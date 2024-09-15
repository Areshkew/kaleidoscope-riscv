
// Generated from Kaleidoscope.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"
#include "KaleidoscopeListener.h"


namespace Kaleidoscope {

/**
 * This class provides an empty implementation of KaleidoscopeListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  KaleidoscopeBaseListener : public KaleidoscopeListener {
public:

  virtual void enterProgram(KaleidoscopeParser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(KaleidoscopeParser::ProgramContext * /*ctx*/) override { }

  virtual void enterFunctionDef(KaleidoscopeParser::FunctionDefContext * /*ctx*/) override { }
  virtual void exitFunctionDef(KaleidoscopeParser::FunctionDefContext * /*ctx*/) override { }

  virtual void enterVariableExpr(KaleidoscopeParser::VariableExprContext * /*ctx*/) override { }
  virtual void exitVariableExpr(KaleidoscopeParser::VariableExprContext * /*ctx*/) override { }

  virtual void enterAddSubExpr(KaleidoscopeParser::AddSubExprContext * /*ctx*/) override { }
  virtual void exitAddSubExpr(KaleidoscopeParser::AddSubExprContext * /*ctx*/) override { }

  virtual void enterCondExpr(KaleidoscopeParser::CondExprContext * /*ctx*/) override { }
  virtual void exitCondExpr(KaleidoscopeParser::CondExprContext * /*ctx*/) override { }

  virtual void enterMultDivExpr(KaleidoscopeParser::MultDivExprContext * /*ctx*/) override { }
  virtual void exitMultDivExpr(KaleidoscopeParser::MultDivExprContext * /*ctx*/) override { }

  virtual void enterCallExpr(KaleidoscopeParser::CallExprContext * /*ctx*/) override { }
  virtual void exitCallExpr(KaleidoscopeParser::CallExprContext * /*ctx*/) override { }

  virtual void enterParenExpr(KaleidoscopeParser::ParenExprContext * /*ctx*/) override { }
  virtual void exitParenExpr(KaleidoscopeParser::ParenExprContext * /*ctx*/) override { }

  virtual void enterConstExpr(KaleidoscopeParser::ConstExprContext * /*ctx*/) override { }
  virtual void exitConstExpr(KaleidoscopeParser::ConstExprContext * /*ctx*/) override { }

  virtual void enterOpLExpr(KaleidoscopeParser::OpLExprContext * /*ctx*/) override { }
  virtual void exitOpLExpr(KaleidoscopeParser::OpLExprContext * /*ctx*/) override { }

  virtual void enterLTrue(KaleidoscopeParser::LTrueContext * /*ctx*/) override { }
  virtual void exitLTrue(KaleidoscopeParser::LTrueContext * /*ctx*/) override { }

  virtual void enterLFalse(KaleidoscopeParser::LFalseContext * /*ctx*/) override { }
  virtual void exitLFalse(KaleidoscopeParser::LFalseContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

}  // namespace Kaleidoscope
