
// Generated from Kaleidoscope.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"
#include "KaleidoscopeVisitor.h"


namespace Kaleidoscope {

/**
 * This class provides an empty implementation of KaleidoscopeVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  KaleidoscopeBaseVisitor : public KaleidoscopeVisitor {
public:

  virtual antlrcpp::Any visitProgram(KaleidoscopeParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionDef(KaleidoscopeParser::FunctionDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariableExpr(KaleidoscopeParser::VariableExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAddSubExpr(KaleidoscopeParser::AddSubExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCondExpr(KaleidoscopeParser::CondExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMultDivExpr(KaleidoscopeParser::MultDivExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCallExpr(KaleidoscopeParser::CallExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParenExpr(KaleidoscopeParser::ParenExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstExpr(KaleidoscopeParser::ConstExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOpLExpr(KaleidoscopeParser::OpLExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLTrue(KaleidoscopeParser::LTrueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLFalse(KaleidoscopeParser::LFalseContext *ctx) override {
    return visitChildren(ctx);
  }


};

}  // namespace Kaleidoscope
