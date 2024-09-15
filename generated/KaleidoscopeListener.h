
// Generated from Kaleidoscope.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"
#include "KaleidoscopeParser.h"


namespace Kaleidoscope {

/**
 * This interface defines an abstract listener for a parse tree produced by KaleidoscopeParser.
 */
class  KaleidoscopeListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProgram(KaleidoscopeParser::ProgramContext *ctx) = 0;
  virtual void exitProgram(KaleidoscopeParser::ProgramContext *ctx) = 0;

  virtual void enterFunctionDef(KaleidoscopeParser::FunctionDefContext *ctx) = 0;
  virtual void exitFunctionDef(KaleidoscopeParser::FunctionDefContext *ctx) = 0;

  virtual void enterVariableExpr(KaleidoscopeParser::VariableExprContext *ctx) = 0;
  virtual void exitVariableExpr(KaleidoscopeParser::VariableExprContext *ctx) = 0;

  virtual void enterAddSubExpr(KaleidoscopeParser::AddSubExprContext *ctx) = 0;
  virtual void exitAddSubExpr(KaleidoscopeParser::AddSubExprContext *ctx) = 0;

  virtual void enterCondExpr(KaleidoscopeParser::CondExprContext *ctx) = 0;
  virtual void exitCondExpr(KaleidoscopeParser::CondExprContext *ctx) = 0;

  virtual void enterMultDivExpr(KaleidoscopeParser::MultDivExprContext *ctx) = 0;
  virtual void exitMultDivExpr(KaleidoscopeParser::MultDivExprContext *ctx) = 0;

  virtual void enterCallExpr(KaleidoscopeParser::CallExprContext *ctx) = 0;
  virtual void exitCallExpr(KaleidoscopeParser::CallExprContext *ctx) = 0;

  virtual void enterParenExpr(KaleidoscopeParser::ParenExprContext *ctx) = 0;
  virtual void exitParenExpr(KaleidoscopeParser::ParenExprContext *ctx) = 0;

  virtual void enterConstExpr(KaleidoscopeParser::ConstExprContext *ctx) = 0;
  virtual void exitConstExpr(KaleidoscopeParser::ConstExprContext *ctx) = 0;

  virtual void enterOpLExpr(KaleidoscopeParser::OpLExprContext *ctx) = 0;
  virtual void exitOpLExpr(KaleidoscopeParser::OpLExprContext *ctx) = 0;

  virtual void enterLTrue(KaleidoscopeParser::LTrueContext *ctx) = 0;
  virtual void exitLTrue(KaleidoscopeParser::LTrueContext *ctx) = 0;

  virtual void enterLFalse(KaleidoscopeParser::LFalseContext *ctx) = 0;
  virtual void exitLFalse(KaleidoscopeParser::LFalseContext *ctx) = 0;


};

}  // namespace Kaleidoscope
