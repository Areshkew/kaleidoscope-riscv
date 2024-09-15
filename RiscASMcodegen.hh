#ifndef __RISCCODEGEN_HH__
#define __RISCCODEGEN_HH__

#include "KaleidoscopeBaseVisitor.h"
#include "codeEmitter.hh"
#include <algorithm>
#include <cassert>
#include <unordered_map>
using namespace Kaleidoscope;
using namespace std;

using antlr4::ANTLRInputStream;
using antlrcpp::Any;

class RISCAsmGenerator : public KaleidoscopeVisitor {
private:
  /**
   * Code emitter
   */
  RISCCodeEmitter &ce;
  /**
   * Whether this code will be emulated in spim or not.
   */
  bool spim;
  /**
   * Conditional counter.
   *
   * This is useful to generate unique labels for the barnching of all the
   * conditionals in a program.
   */
  size_t condCounter;
  /**
   * Type definition for the storage of the argument and its correspondant
   * position in a function.
   */
  typedef unordered_map<string, size_t> ArgumentPositions;
  /**
   * Type definition for the storage of all the functions in a program and
   * their correspondant argument positions.
   */
  typedef unordered_map<string, ArgumentPositions> FunctionArguments;
  FunctionArguments funcArgs;
  /**
   * Current function name being processed.
   */
  string currentFuncDef;

public:
  RISCAsmGenerator(RISCCodeEmitter &c)
      : ce(c), condCounter(0), funcArgs(), currentFuncDef() {}
  virtual ~RISCAsmGenerator() {}

  /**
   * Stack Managment
   */
  void pushRegister(const string &reg) {
    ce.comment("Push");
    ce.sw(reg, "sp");
    ce.addiu("sp", "sp", 4);
  }

  void popInRegister(const string &reg) {
    ce.comment("Pop");
    ce.lw(reg, "sp", -4);
    ce.addiu("sp", "sp", -4);
  }

  /**
   * Code generation for a constant node
   *
   * - Preserves the stack invariant because the stack pointer is not used.
   *
   * - Preserves the return invariant because the numeric constant is loaded
   * in $a0.
   */
  virtual Any visitConstExpr(KaleidoscopeParser::ConstExprContext *context) {
    string constant = context->getText();
    int val = stoi(constant);

    ce.li("a0", val);

    return Any();
  }

  /**
   * Code generation for a variable node.
   *
   * - Preserves the stack invariant because the stack pointer is not used.
   *
   * - Preserves the return invariant because the numeric constant is loaded
   * in $a0.
   */
  virtual Any
  visitVariableExpr(KaleidoscopeParser::VariableExprContext *context) {
    /*
      At this point we are inside an expression and inside a function body.
      The last one implies that the code for the function *header* was already
      processed and funcArgs already contains an entry for the current
      function and the current variable.
     */
    string varName = context->getText();
    size_t varPos = funcArgs[currentFuncDef][varName];
    size_t offset = (varPos + 1) * 4;

    ce.lw("a0", "fp", -offset);

    return Any();
  }

  /**
   * Code generation for addiution or subtraction node.
   */
  virtual Any visitAddSubExpr(KaleidoscopeParser::AddSubExprContext *context) {
    // Generate the code for the left expression. The result is left in $a0
    // and the stack is unchanged.
    Any e1 = visit(context->left);

    // Store $a0 on the stack: it contains the result of evaluating e1
    pushRegister("a0");

    // Generate code for the right expression. This will modify $a0 and that
    // was the reason to store it on the stack in the previous step.
    Any e2 = visit(context->right);

    // At this point $a0 contains the result of the right expression and the
    // result of the left one is on the stack. Then we load the first argument
    // from the stack into $t1 and pop it.
    popInRegister("t1");

    // Now we produce the code for the actual operation depending on the token
    // value. The result is in $a0 to maintain the return invariant.
    string op = context->op->getText();
    if (op == "+") {
      ce.add("a0", "t1", "a0");
    } else {
      assert(op == "-");
      ce.sub("a0", "t1", "a0");
    }
    return Any();
  }

  /**
   * Code generation for division or multiplication nodes
   */
  virtual Any
  visitMultDivExpr(KaleidoscopeParser::MultDivExprContext *context) {
    // Generate code for left expression
    Any e1 = visit(context->left);
    // Store result on the stack
    pushRegister("a0");
    // Generate code for right expression
    Any e2 = visit(context->right);

    popInRegister("t1");
    // Perform the actual operation and store its result in $a0
    string op = context->op->getText();
    if (op == "*") {
      // This is not very nice since we discard the HI register's contents
      ce.mult("a0", "a0", "t1");
      // ce.mflo("a0");
    } else if (op == "/") {
      ce.div("a0", "t1", "a0");
      // ce.mflo("a0");
    } else {
      assert(op == "%");
      ce.rem("a0", "t1", "a0");
      // ce.mfhi("$a0");
    }
    return Any();
  }
  /**
   * Code generation for nested expression
   */
  virtual Any visitParenExpr(KaleidoscopeParser::ParenExprContext *context) {
    visit(context->exp);
    return Any();
  }

  /**
   * Code generation for the conditional
   */
  virtual Any visitCondExpr(KaleidoscopeParser::CondExprContext *context) {
    cout << "Visiting Cond node" << endl;
    // Generate code for the guard. In this case, the returned value is the
    // numeric identifier used to label the else branch.
    Any guard = visit(context->gExp);
    size_t condId = guard.as<size_t>();
    auto lineNumber = context->getStart()->getLine();

    string trueLabel("true_" + to_string(condId));
    string falseLabel("false_" + to_string(condId));
    string exitLabel("if_exit_" + to_string(condId));

    // Generate code for the *false part* of the conditional
    ce.newLabel(falseLabel);
    Any eExpr = visit(context->eExp);
    ce.b(exitLabel);

    // Generate code for the *true part* of the conditional
    ce.newLabel(trueLabel);
    Any tExpr = visit(context->tExp);
    ce.newLabel(exitLabel);

    return Any();
  }

  /**
   * Code generation for conditional guard
   */
  virtual Any visitOpLExpr(KaleidoscopeParser::OpLExprContext *context) {
    // Generate code to evaluate the left expression
    Any left = visit(context->left);
    // Store the result of the left expression on the stack
    pushRegister("a0");
    // Generate code to evaluate the right expression. The result will be on
    // the stack
    Any right = visit(context->right);
    // Load from the stack the result of the left expression
    popInRegister("t1");

    size_t condId = condCounter;
    condCounter++;

    // Perform the jump according to the relation
    string op = context->op->getText();
    string jLabel("true_" + to_string(condId));
    if (op == "<") {
      ce.blt("t1", "a0", jLabel);
    } else if (op == ">") {
      ce.bgt("t1", "a0", jLabel);
    } else if (op == "<=") {
      ce.ble("t1", "a0", jLabel);
    } else if (op == ">=") {
      ce.bge("t1", "a0", jLabel);
    } else if (op == "==") {
      ce.beq("t1", "a0", jLabel);
    } else {
      assert(op == "!=");
      ce.bne("t1", "a0", jLabel);
    }
    return Any(condId);
  };

  // ----
  virtual Any visitProgram(KaleidoscopeParser::ProgramContext *context) {
    // Jump to Main Label
    ce.b("main");

    size_t numChildren = context->children.size();
    // Generate code for all the functions
    for (size_t i = 0; i < numChildren - 1; i++) {
      Any r = visit(context->children[i]);
    }
    
    // Generate code for entry point expression
    ce.newLabel("main");
    Any result = visit(context->entry);
    
    return result;
  }

  virtual Any
  visitFunctionDef(KaleidoscopeParser::FunctionDefContext *context) {
    auto lineNumber = context->getStart()->getLine();
    string functionName = context->name->getText();
    // os << "# Code generated for function " << functionName << " at line "
    //   << lineNumber << endl;
    ce.newLabel(functionName);

    // Prepare the code for the execution record
    ce.comment("Callee side");
    ce.move("fp", "sp");
    pushRegister("ra");

    unordered_map<string, size_t> argPositions;

    // Avoid the first identifier because it is the function's name.
    for (size_t i = 1; i < context->ID().size(); i++) {
      string argName = context->ID()[i]->getText();
      argPositions[argName] = i - 1;
      cout << " Argument: " << argName << " position: " << argPositions[argName]
           << endl;
    }

    funcArgs[functionName] = argPositions;
    currentFuncDef = functionName;

    // Generate code for the function body.
    ce.comment("Function body");
    Any result = visit(context->body);
    // Activation record
    ce.comment("Activation record");
    ce.lw("ra", "sp", -4);
    // There is a proble with the following hard-coded number. It is only
    // valid when the function has one parameter.
    ce.addiu("sp", "sp", -12);
    ce.lw("fp", "sp");
    ce.jr("ra");

    return Any();
  }

  virtual Any visitCallExpr(KaleidoscopeParser::CallExprContext *context) {
    string functionName = context->name->getText();
    cout << "Visiting CallNode node for " << functionName << endl;
    pushRegister("fp");

    // Compute the values of the arguments before making the procedure call.
    // Every argument gets pushed in the stack.

    ce.comment("Arguments code");
    {
      size_t i = 0;
      for (auto *expr : context->expression()) {
        // os << "\t#Argument " << i << endl;
        // Generate argument for the i-th argument
        visit(expr);
        // push the result into the stack
        pushRegister("a0");
        i++;
      }
    }
    ce.comment("End of argument code");
    // The actual function call
    ce.jal(functionName);

    return Any();
  }

  virtual Any visitLTrue(KaleidoscopeParser::LTrueContext *context) {
    assert(false);
    return Any();
  }

  virtual Any visitLFalse(KaleidoscopeParser::LFalseContext *context) {
    assert(false);
    return Any();
  }
};

#endif