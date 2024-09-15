
// Generated from Kaleidoscope.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"
#include "KaleidoscopeParser.h"


namespace Kaleidoscope {

/**
 * This class defines an abstract visitor for a parse tree
 * produced by KaleidoscopeParser.
 */
class  KaleidoscopeVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by KaleidoscopeParser.
   */
    virtual antlrcpp::Any visitProgram(KaleidoscopeParser::ProgramContext *context) = 0;

    virtual antlrcpp::Any visitFunctionDef(KaleidoscopeParser::FunctionDefContext *context) = 0;

    virtual antlrcpp::Any visitVariableExpr(KaleidoscopeParser::VariableExprContext *context) = 0;

    virtual antlrcpp::Any visitAddSubExpr(KaleidoscopeParser::AddSubExprContext *context) = 0;

    virtual antlrcpp::Any visitCondExpr(KaleidoscopeParser::CondExprContext *context) = 0;

    virtual antlrcpp::Any visitMultDivExpr(KaleidoscopeParser::MultDivExprContext *context) = 0;

    virtual antlrcpp::Any visitCallExpr(KaleidoscopeParser::CallExprContext *context) = 0;

    virtual antlrcpp::Any visitParenExpr(KaleidoscopeParser::ParenExprContext *context) = 0;

    virtual antlrcpp::Any visitConstExpr(KaleidoscopeParser::ConstExprContext *context) = 0;

    virtual antlrcpp::Any visitOpLExpr(KaleidoscopeParser::OpLExprContext *context) = 0;

    virtual antlrcpp::Any visitLTrue(KaleidoscopeParser::LTrueContext *context) = 0;

    virtual antlrcpp::Any visitLFalse(KaleidoscopeParser::LFalseContext *context) = 0;


};

}  // namespace Kaleidoscope
