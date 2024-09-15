
// Generated from Kaleidoscope.g4 by ANTLR 4.7


#include "KaleidoscopeListener.h"
#include "KaleidoscopeVisitor.h"

#include "KaleidoscopeParser.h"


using namespace antlrcpp;
using namespace Kaleidoscope;
using namespace antlr4;

KaleidoscopeParser::KaleidoscopeParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

KaleidoscopeParser::~KaleidoscopeParser() {
  delete _interpreter;
}

std::string KaleidoscopeParser::getGrammarFileName() const {
  return "Kaleidoscope.g4";
}

const std::vector<std::string>& KaleidoscopeParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& KaleidoscopeParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgramContext ------------------------------------------------------------------

KaleidoscopeParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KaleidoscopeParser::ExpressionContext* KaleidoscopeParser::ProgramContext::expression() {
  return getRuleContext<KaleidoscopeParser::ExpressionContext>(0);
}

std::vector<KaleidoscopeParser::FunctionDefContext *> KaleidoscopeParser::ProgramContext::functionDef() {
  return getRuleContexts<KaleidoscopeParser::FunctionDefContext>();
}

KaleidoscopeParser::FunctionDefContext* KaleidoscopeParser::ProgramContext::functionDef(size_t i) {
  return getRuleContext<KaleidoscopeParser::FunctionDefContext>(i);
}


size_t KaleidoscopeParser::ProgramContext::getRuleIndex() const {
  return KaleidoscopeParser::RuleProgram;
}

void KaleidoscopeParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KaleidoscopeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void KaleidoscopeParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KaleidoscopeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}


antlrcpp::Any KaleidoscopeParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KaleidoscopeVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

KaleidoscopeParser::ProgramContext* KaleidoscopeParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, KaleidoscopeParser::RuleProgram);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(11);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KaleidoscopeParser::DEF) {
      setState(8);
      functionDef();
      setState(13);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(14);
    dynamic_cast<ProgramContext *>(_localctx)->entry = expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionDefContext ------------------------------------------------------------------

KaleidoscopeParser::FunctionDefContext::FunctionDefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KaleidoscopeParser::FunctionDefContext::DEF() {
  return getToken(KaleidoscopeParser::DEF, 0);
}

std::vector<tree::TerminalNode *> KaleidoscopeParser::FunctionDefContext::ID() {
  return getTokens(KaleidoscopeParser::ID);
}

tree::TerminalNode* KaleidoscopeParser::FunctionDefContext::ID(size_t i) {
  return getToken(KaleidoscopeParser::ID, i);
}

KaleidoscopeParser::ExpressionContext* KaleidoscopeParser::FunctionDefContext::expression() {
  return getRuleContext<KaleidoscopeParser::ExpressionContext>(0);
}


size_t KaleidoscopeParser::FunctionDefContext::getRuleIndex() const {
  return KaleidoscopeParser::RuleFunctionDef;
}

void KaleidoscopeParser::FunctionDefContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KaleidoscopeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionDef(this);
}

void KaleidoscopeParser::FunctionDefContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KaleidoscopeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionDef(this);
}


antlrcpp::Any KaleidoscopeParser::FunctionDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KaleidoscopeVisitor*>(visitor))
    return parserVisitor->visitFunctionDef(this);
  else
    return visitor->visitChildren(this);
}

KaleidoscopeParser::FunctionDefContext* KaleidoscopeParser::functionDef() {
  FunctionDefContext *_localctx = _tracker.createInstance<FunctionDefContext>(_ctx, getState());
  enterRule(_localctx, 2, KaleidoscopeParser::RuleFunctionDef);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(16);
    match(KaleidoscopeParser::DEF);
    setState(17);
    dynamic_cast<FunctionDefContext *>(_localctx)->name = match(KaleidoscopeParser::ID);
    setState(18);
    match(KaleidoscopeParser::T__0);
    setState(29);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KaleidoscopeParser::ID) {
      setState(19);
      match(KaleidoscopeParser::ID);
      setState(24);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == KaleidoscopeParser::T__1) {
        setState(20);
        match(KaleidoscopeParser::T__1);
        setState(21);
        match(KaleidoscopeParser::ID);
        setState(26);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(31);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(32);
    match(KaleidoscopeParser::T__2);
    setState(33);
    match(KaleidoscopeParser::T__3);
    setState(34);
    dynamic_cast<FunctionDefContext *>(_localctx)->body = expression(0);
    setState(35);
    match(KaleidoscopeParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

KaleidoscopeParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t KaleidoscopeParser::ExpressionContext::getRuleIndex() const {
  return KaleidoscopeParser::RuleExpression;
}

void KaleidoscopeParser::ExpressionContext::copyFrom(ExpressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- VariableExprContext ------------------------------------------------------------------

tree::TerminalNode* KaleidoscopeParser::VariableExprContext::ID() {
  return getToken(KaleidoscopeParser::ID, 0);
}

KaleidoscopeParser::VariableExprContext::VariableExprContext(ExpressionContext *ctx) { copyFrom(ctx); }

void KaleidoscopeParser::VariableExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KaleidoscopeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariableExpr(this);
}
void KaleidoscopeParser::VariableExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KaleidoscopeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariableExpr(this);
}

antlrcpp::Any KaleidoscopeParser::VariableExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KaleidoscopeVisitor*>(visitor))
    return parserVisitor->visitVariableExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AddSubExprContext ------------------------------------------------------------------

std::vector<KaleidoscopeParser::ExpressionContext *> KaleidoscopeParser::AddSubExprContext::expression() {
  return getRuleContexts<KaleidoscopeParser::ExpressionContext>();
}

KaleidoscopeParser::ExpressionContext* KaleidoscopeParser::AddSubExprContext::expression(size_t i) {
  return getRuleContext<KaleidoscopeParser::ExpressionContext>(i);
}

tree::TerminalNode* KaleidoscopeParser::AddSubExprContext::ADD() {
  return getToken(KaleidoscopeParser::ADD, 0);
}

tree::TerminalNode* KaleidoscopeParser::AddSubExprContext::SUB() {
  return getToken(KaleidoscopeParser::SUB, 0);
}

KaleidoscopeParser::AddSubExprContext::AddSubExprContext(ExpressionContext *ctx) { copyFrom(ctx); }

void KaleidoscopeParser::AddSubExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KaleidoscopeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAddSubExpr(this);
}
void KaleidoscopeParser::AddSubExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KaleidoscopeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAddSubExpr(this);
}

antlrcpp::Any KaleidoscopeParser::AddSubExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KaleidoscopeVisitor*>(visitor))
    return parserVisitor->visitAddSubExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CondExprContext ------------------------------------------------------------------

tree::TerminalNode* KaleidoscopeParser::CondExprContext::IF() {
  return getToken(KaleidoscopeParser::IF, 0);
}

tree::TerminalNode* KaleidoscopeParser::CondExprContext::ELSE() {
  return getToken(KaleidoscopeParser::ELSE, 0);
}

KaleidoscopeParser::LogicalExpressionContext* KaleidoscopeParser::CondExprContext::logicalExpression() {
  return getRuleContext<KaleidoscopeParser::LogicalExpressionContext>(0);
}

std::vector<KaleidoscopeParser::ExpressionContext *> KaleidoscopeParser::CondExprContext::expression() {
  return getRuleContexts<KaleidoscopeParser::ExpressionContext>();
}

KaleidoscopeParser::ExpressionContext* KaleidoscopeParser::CondExprContext::expression(size_t i) {
  return getRuleContext<KaleidoscopeParser::ExpressionContext>(i);
}

KaleidoscopeParser::CondExprContext::CondExprContext(ExpressionContext *ctx) { copyFrom(ctx); }

void KaleidoscopeParser::CondExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KaleidoscopeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCondExpr(this);
}
void KaleidoscopeParser::CondExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KaleidoscopeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCondExpr(this);
}

antlrcpp::Any KaleidoscopeParser::CondExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KaleidoscopeVisitor*>(visitor))
    return parserVisitor->visitCondExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MultDivExprContext ------------------------------------------------------------------

std::vector<KaleidoscopeParser::ExpressionContext *> KaleidoscopeParser::MultDivExprContext::expression() {
  return getRuleContexts<KaleidoscopeParser::ExpressionContext>();
}

KaleidoscopeParser::ExpressionContext* KaleidoscopeParser::MultDivExprContext::expression(size_t i) {
  return getRuleContext<KaleidoscopeParser::ExpressionContext>(i);
}

tree::TerminalNode* KaleidoscopeParser::MultDivExprContext::MUL() {
  return getToken(KaleidoscopeParser::MUL, 0);
}

tree::TerminalNode* KaleidoscopeParser::MultDivExprContext::DIV() {
  return getToken(KaleidoscopeParser::DIV, 0);
}

tree::TerminalNode* KaleidoscopeParser::MultDivExprContext::MOD() {
  return getToken(KaleidoscopeParser::MOD, 0);
}

KaleidoscopeParser::MultDivExprContext::MultDivExprContext(ExpressionContext *ctx) { copyFrom(ctx); }

void KaleidoscopeParser::MultDivExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KaleidoscopeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMultDivExpr(this);
}
void KaleidoscopeParser::MultDivExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KaleidoscopeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMultDivExpr(this);
}

antlrcpp::Any KaleidoscopeParser::MultDivExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KaleidoscopeVisitor*>(visitor))
    return parserVisitor->visitMultDivExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CallExprContext ------------------------------------------------------------------

tree::TerminalNode* KaleidoscopeParser::CallExprContext::ID() {
  return getToken(KaleidoscopeParser::ID, 0);
}

std::vector<KaleidoscopeParser::ExpressionContext *> KaleidoscopeParser::CallExprContext::expression() {
  return getRuleContexts<KaleidoscopeParser::ExpressionContext>();
}

KaleidoscopeParser::ExpressionContext* KaleidoscopeParser::CallExprContext::expression(size_t i) {
  return getRuleContext<KaleidoscopeParser::ExpressionContext>(i);
}

KaleidoscopeParser::CallExprContext::CallExprContext(ExpressionContext *ctx) { copyFrom(ctx); }

void KaleidoscopeParser::CallExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KaleidoscopeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCallExpr(this);
}
void KaleidoscopeParser::CallExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KaleidoscopeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCallExpr(this);
}

antlrcpp::Any KaleidoscopeParser::CallExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KaleidoscopeVisitor*>(visitor))
    return parserVisitor->visitCallExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParenExprContext ------------------------------------------------------------------

KaleidoscopeParser::ExpressionContext* KaleidoscopeParser::ParenExprContext::expression() {
  return getRuleContext<KaleidoscopeParser::ExpressionContext>(0);
}

KaleidoscopeParser::ParenExprContext::ParenExprContext(ExpressionContext *ctx) { copyFrom(ctx); }

void KaleidoscopeParser::ParenExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KaleidoscopeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParenExpr(this);
}
void KaleidoscopeParser::ParenExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KaleidoscopeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParenExpr(this);
}

antlrcpp::Any KaleidoscopeParser::ParenExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KaleidoscopeVisitor*>(visitor))
    return parserVisitor->visitParenExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ConstExprContext ------------------------------------------------------------------

tree::TerminalNode* KaleidoscopeParser::ConstExprContext::INT() {
  return getToken(KaleidoscopeParser::INT, 0);
}

KaleidoscopeParser::ConstExprContext::ConstExprContext(ExpressionContext *ctx) { copyFrom(ctx); }

void KaleidoscopeParser::ConstExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KaleidoscopeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstExpr(this);
}
void KaleidoscopeParser::ConstExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KaleidoscopeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstExpr(this);
}

antlrcpp::Any KaleidoscopeParser::ConstExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KaleidoscopeVisitor*>(visitor))
    return parserVisitor->visitConstExpr(this);
  else
    return visitor->visitChildren(this);
}

KaleidoscopeParser::ExpressionContext* KaleidoscopeParser::expression() {
   return expression(0);
}

KaleidoscopeParser::ExpressionContext* KaleidoscopeParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  KaleidoscopeParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  KaleidoscopeParser::ExpressionContext *previousContext = _localctx;
  size_t startState = 4;
  enterRecursionRule(_localctx, 4, KaleidoscopeParser::RuleExpression, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(72);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<ParenExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(38);
      match(KaleidoscopeParser::T__0);
      setState(39);
      dynamic_cast<ParenExprContext *>(_localctx)->exp = expression(0);
      setState(40);
      match(KaleidoscopeParser::T__2);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<CondExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(42);
      match(KaleidoscopeParser::IF);
      setState(43);
      match(KaleidoscopeParser::T__0);
      setState(44);
      dynamic_cast<CondExprContext *>(_localctx)->gExp = logicalExpression();
      setState(45);
      match(KaleidoscopeParser::T__2);
      setState(46);
      match(KaleidoscopeParser::T__3);
      setState(47);
      dynamic_cast<CondExprContext *>(_localctx)->tExp = expression(0);
      setState(48);
      match(KaleidoscopeParser::T__4);
      setState(49);
      match(KaleidoscopeParser::ELSE);
      setState(50);
      match(KaleidoscopeParser::T__3);
      setState(51);
      dynamic_cast<CondExprContext *>(_localctx)->eExp = expression(0);
      setState(52);
      match(KaleidoscopeParser::T__4);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<CallExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(54);
      dynamic_cast<CallExprContext *>(_localctx)->name = match(KaleidoscopeParser::ID);
      setState(55);
      match(KaleidoscopeParser::T__0);
      setState(66);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << KaleidoscopeParser::T__0)
        | (1ULL << KaleidoscopeParser::IF)
        | (1ULL << KaleidoscopeParser::INT)
        | (1ULL << KaleidoscopeParser::ID))) != 0)) {
        setState(56);
        expression(0);
        setState(61);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == KaleidoscopeParser::T__1) {
          setState(57);
          match(KaleidoscopeParser::T__1);
          setState(58);
          expression(0);
          setState(63);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(68);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(69);
      match(KaleidoscopeParser::T__2);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<ConstExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(70);
      match(KaleidoscopeParser::INT);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<VariableExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(71);
      match(KaleidoscopeParser::ID);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(82);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(80);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MultDivExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(74);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(75);
          dynamic_cast<MultDivExprContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << KaleidoscopeParser::MUL)
            | (1ULL << KaleidoscopeParser::DIV)
            | (1ULL << KaleidoscopeParser::MOD))) != 0))) {
            dynamic_cast<MultDivExprContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(76);
          dynamic_cast<MultDivExprContext *>(_localctx)->right = expression(5);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<AddSubExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(77);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(78);
          dynamic_cast<AddSubExprContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == KaleidoscopeParser::ADD

          || _la == KaleidoscopeParser::SUB)) {
            dynamic_cast<AddSubExprContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(79);
          dynamic_cast<AddSubExprContext *>(_localctx)->right = expression(4);
          break;
        }

        } 
      }
      setState(84);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- LogicalExpressionContext ------------------------------------------------------------------

KaleidoscopeParser::LogicalExpressionContext::LogicalExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t KaleidoscopeParser::LogicalExpressionContext::getRuleIndex() const {
  return KaleidoscopeParser::RuleLogicalExpression;
}

void KaleidoscopeParser::LogicalExpressionContext::copyFrom(LogicalExpressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- OpLExprContext ------------------------------------------------------------------

std::vector<KaleidoscopeParser::ExpressionContext *> KaleidoscopeParser::OpLExprContext::expression() {
  return getRuleContexts<KaleidoscopeParser::ExpressionContext>();
}

KaleidoscopeParser::ExpressionContext* KaleidoscopeParser::OpLExprContext::expression(size_t i) {
  return getRuleContext<KaleidoscopeParser::ExpressionContext>(i);
}

tree::TerminalNode* KaleidoscopeParser::OpLExprContext::LT() {
  return getToken(KaleidoscopeParser::LT, 0);
}

tree::TerminalNode* KaleidoscopeParser::OpLExprContext::GT() {
  return getToken(KaleidoscopeParser::GT, 0);
}

tree::TerminalNode* KaleidoscopeParser::OpLExprContext::LEQ() {
  return getToken(KaleidoscopeParser::LEQ, 0);
}

tree::TerminalNode* KaleidoscopeParser::OpLExprContext::GEQ() {
  return getToken(KaleidoscopeParser::GEQ, 0);
}

tree::TerminalNode* KaleidoscopeParser::OpLExprContext::EQ() {
  return getToken(KaleidoscopeParser::EQ, 0);
}

tree::TerminalNode* KaleidoscopeParser::OpLExprContext::NEQ() {
  return getToken(KaleidoscopeParser::NEQ, 0);
}

KaleidoscopeParser::OpLExprContext::OpLExprContext(LogicalExpressionContext *ctx) { copyFrom(ctx); }

void KaleidoscopeParser::OpLExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KaleidoscopeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOpLExpr(this);
}
void KaleidoscopeParser::OpLExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KaleidoscopeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOpLExpr(this);
}

antlrcpp::Any KaleidoscopeParser::OpLExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KaleidoscopeVisitor*>(visitor))
    return parserVisitor->visitOpLExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LTrueContext ------------------------------------------------------------------

tree::TerminalNode* KaleidoscopeParser::LTrueContext::TRUE() {
  return getToken(KaleidoscopeParser::TRUE, 0);
}

KaleidoscopeParser::LTrueContext::LTrueContext(LogicalExpressionContext *ctx) { copyFrom(ctx); }

void KaleidoscopeParser::LTrueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KaleidoscopeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLTrue(this);
}
void KaleidoscopeParser::LTrueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KaleidoscopeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLTrue(this);
}

antlrcpp::Any KaleidoscopeParser::LTrueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KaleidoscopeVisitor*>(visitor))
    return parserVisitor->visitLTrue(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LFalseContext ------------------------------------------------------------------

tree::TerminalNode* KaleidoscopeParser::LFalseContext::FALSE() {
  return getToken(KaleidoscopeParser::FALSE, 0);
}

KaleidoscopeParser::LFalseContext::LFalseContext(LogicalExpressionContext *ctx) { copyFrom(ctx); }

void KaleidoscopeParser::LFalseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KaleidoscopeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLFalse(this);
}
void KaleidoscopeParser::LFalseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KaleidoscopeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLFalse(this);
}

antlrcpp::Any KaleidoscopeParser::LFalseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KaleidoscopeVisitor*>(visitor))
    return parserVisitor->visitLFalse(this);
  else
    return visitor->visitChildren(this);
}
KaleidoscopeParser::LogicalExpressionContext* KaleidoscopeParser::logicalExpression() {
  LogicalExpressionContext *_localctx = _tracker.createInstance<LogicalExpressionContext>(_ctx, getState());
  enterRule(_localctx, 6, KaleidoscopeParser::RuleLogicalExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(91);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case KaleidoscopeParser::T__0:
      case KaleidoscopeParser::IF:
      case KaleidoscopeParser::INT:
      case KaleidoscopeParser::ID: {
        _localctx = dynamic_cast<LogicalExpressionContext *>(_tracker.createInstance<KaleidoscopeParser::OpLExprContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(85);
        dynamic_cast<OpLExprContext *>(_localctx)->left = expression(0);
        setState(86);
        dynamic_cast<OpLExprContext *>(_localctx)->op = _input->LT(1);
        _la = _input->LA(1);
        if (!((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << KaleidoscopeParser::LT)
          | (1ULL << KaleidoscopeParser::GT)
          | (1ULL << KaleidoscopeParser::LEQ)
          | (1ULL << KaleidoscopeParser::GEQ)
          | (1ULL << KaleidoscopeParser::EQ)
          | (1ULL << KaleidoscopeParser::NEQ))) != 0))) {
          dynamic_cast<OpLExprContext *>(_localctx)->op = _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(87);
        dynamic_cast<OpLExprContext *>(_localctx)->right = expression(0);
        break;
      }

      case KaleidoscopeParser::TRUE: {
        _localctx = dynamic_cast<LogicalExpressionContext *>(_tracker.createInstance<KaleidoscopeParser::LTrueContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(89);
        match(KaleidoscopeParser::TRUE);
        break;
      }

      case KaleidoscopeParser::FALSE: {
        _localctx = dynamic_cast<LogicalExpressionContext *>(_tracker.createInstance<KaleidoscopeParser::LFalseContext>(_localctx));
        enterOuterAlt(_localctx, 3);
        setState(90);
        match(KaleidoscopeParser::FALSE);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool KaleidoscopeParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 2: return expressionSempred(dynamic_cast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool KaleidoscopeParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 4);
    case 1: return precpred(_ctx, 3);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> KaleidoscopeParser::_decisionToDFA;
atn::PredictionContextCache KaleidoscopeParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN KaleidoscopeParser::_atn;
std::vector<uint16_t> KaleidoscopeParser::_serializedATN;

std::vector<std::string> KaleidoscopeParser::_ruleNames = {
  "program", "functionDef", "expression", "logicalExpression"
};

std::vector<std::string> KaleidoscopeParser::_literalNames = {
  "", "'('", "','", "')'", "'{'", "'}'", "'/*'", "'*/'", "", "'def'", "'if'", 
  "'else'", "'true'", "'false'", "'+'", "'-'", "'*'", "'/'", "'%'", "'<'", 
  "'>'", "'<='", "'>='", "'=='", "'!='"
};

std::vector<std::string> KaleidoscopeParser::_symbolicNames = {
  "", "", "", "", "", "", "OPEN_COMMENT", "CLOSE_COMMENT", "COMMENT", "DEF", 
  "IF", "ELSE", "TRUE", "FALSE", "ADD", "SUB", "MUL", "DIV", "MOD", "LT", 
  "GT", "LEQ", "GEQ", "EQ", "NEQ", "INT", "ID", "WS"
};

dfa::Vocabulary KaleidoscopeParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> KaleidoscopeParser::_tokenNames;

KaleidoscopeParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x1d, 0x60, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x3, 0x2, 0x7, 0x2, 0xc, 0xa, 0x2, 0xc, 0x2, 
    0xe, 0x2, 0xf, 0xb, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0x19, 0xa, 0x3, 0xc, 0x3, 
    0xe, 0x3, 0x1c, 0xb, 0x3, 0x7, 0x3, 0x1e, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 
    0x21, 0xb, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x7, 0x4, 0x3e, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0x41, 0xb, 0x4, 0x7, 
    0x4, 0x43, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0x46, 0xb, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x5, 0x4, 0x4b, 0xa, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x7, 0x4, 0x53, 0xa, 0x4, 0xc, 0x4, 0xe, 
    0x4, 0x56, 0xb, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x5, 0x5, 0x5e, 0xa, 0x5, 0x3, 0x5, 0x2, 0x3, 0x6, 0x6, 0x2, 
    0x4, 0x6, 0x8, 0x2, 0x5, 0x3, 0x2, 0x12, 0x14, 0x3, 0x2, 0x10, 0x11, 
    0x3, 0x2, 0x15, 0x1a, 0x2, 0x68, 0x2, 0xd, 0x3, 0x2, 0x2, 0x2, 0x4, 
    0x12, 0x3, 0x2, 0x2, 0x2, 0x6, 0x4a, 0x3, 0x2, 0x2, 0x2, 0x8, 0x5d, 
    0x3, 0x2, 0x2, 0x2, 0xa, 0xc, 0x5, 0x4, 0x3, 0x2, 0xb, 0xa, 0x3, 0x2, 
    0x2, 0x2, 0xc, 0xf, 0x3, 0x2, 0x2, 0x2, 0xd, 0xb, 0x3, 0x2, 0x2, 0x2, 
    0xd, 0xe, 0x3, 0x2, 0x2, 0x2, 0xe, 0x10, 0x3, 0x2, 0x2, 0x2, 0xf, 0xd, 
    0x3, 0x2, 0x2, 0x2, 0x10, 0x11, 0x5, 0x6, 0x4, 0x2, 0x11, 0x3, 0x3, 
    0x2, 0x2, 0x2, 0x12, 0x13, 0x7, 0xb, 0x2, 0x2, 0x13, 0x14, 0x7, 0x1c, 
    0x2, 0x2, 0x14, 0x1f, 0x7, 0x3, 0x2, 0x2, 0x15, 0x1a, 0x7, 0x1c, 0x2, 
    0x2, 0x16, 0x17, 0x7, 0x4, 0x2, 0x2, 0x17, 0x19, 0x7, 0x1c, 0x2, 0x2, 
    0x18, 0x16, 0x3, 0x2, 0x2, 0x2, 0x19, 0x1c, 0x3, 0x2, 0x2, 0x2, 0x1a, 
    0x18, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x1b, 0x1e, 
    0x3, 0x2, 0x2, 0x2, 0x1c, 0x1a, 0x3, 0x2, 0x2, 0x2, 0x1d, 0x15, 0x3, 
    0x2, 0x2, 0x2, 0x1e, 0x21, 0x3, 0x2, 0x2, 0x2, 0x1f, 0x1d, 0x3, 0x2, 
    0x2, 0x2, 0x1f, 0x20, 0x3, 0x2, 0x2, 0x2, 0x20, 0x22, 0x3, 0x2, 0x2, 
    0x2, 0x21, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x22, 0x23, 0x7, 0x5, 0x2, 0x2, 
    0x23, 0x24, 0x7, 0x6, 0x2, 0x2, 0x24, 0x25, 0x5, 0x6, 0x4, 0x2, 0x25, 
    0x26, 0x7, 0x7, 0x2, 0x2, 0x26, 0x5, 0x3, 0x2, 0x2, 0x2, 0x27, 0x28, 
    0x8, 0x4, 0x1, 0x2, 0x28, 0x29, 0x7, 0x3, 0x2, 0x2, 0x29, 0x2a, 0x5, 
    0x6, 0x4, 0x2, 0x2a, 0x2b, 0x7, 0x5, 0x2, 0x2, 0x2b, 0x4b, 0x3, 0x2, 
    0x2, 0x2, 0x2c, 0x2d, 0x7, 0xc, 0x2, 0x2, 0x2d, 0x2e, 0x7, 0x3, 0x2, 
    0x2, 0x2e, 0x2f, 0x5, 0x8, 0x5, 0x2, 0x2f, 0x30, 0x7, 0x5, 0x2, 0x2, 
    0x30, 0x31, 0x7, 0x6, 0x2, 0x2, 0x31, 0x32, 0x5, 0x6, 0x4, 0x2, 0x32, 
    0x33, 0x7, 0x7, 0x2, 0x2, 0x33, 0x34, 0x7, 0xd, 0x2, 0x2, 0x34, 0x35, 
    0x7, 0x6, 0x2, 0x2, 0x35, 0x36, 0x5, 0x6, 0x4, 0x2, 0x36, 0x37, 0x7, 
    0x7, 0x2, 0x2, 0x37, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x38, 0x39, 0x7, 0x1c, 
    0x2, 0x2, 0x39, 0x44, 0x7, 0x3, 0x2, 0x2, 0x3a, 0x3f, 0x5, 0x6, 0x4, 
    0x2, 0x3b, 0x3c, 0x7, 0x4, 0x2, 0x2, 0x3c, 0x3e, 0x5, 0x6, 0x4, 0x2, 
    0x3d, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x41, 0x3, 0x2, 0x2, 0x2, 0x3f, 
    0x3d, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x40, 0x3, 0x2, 0x2, 0x2, 0x40, 0x43, 
    0x3, 0x2, 0x2, 0x2, 0x41, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x42, 0x3a, 0x3, 
    0x2, 0x2, 0x2, 0x43, 0x46, 0x3, 0x2, 0x2, 0x2, 0x44, 0x42, 0x3, 0x2, 
    0x2, 0x2, 0x44, 0x45, 0x3, 0x2, 0x2, 0x2, 0x45, 0x47, 0x3, 0x2, 0x2, 
    0x2, 0x46, 0x44, 0x3, 0x2, 0x2, 0x2, 0x47, 0x4b, 0x7, 0x5, 0x2, 0x2, 
    0x48, 0x4b, 0x7, 0x1b, 0x2, 0x2, 0x49, 0x4b, 0x7, 0x1c, 0x2, 0x2, 0x4a, 
    0x27, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x2c, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x38, 
    0x3, 0x2, 0x2, 0x2, 0x4a, 0x48, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x49, 0x3, 
    0x2, 0x2, 0x2, 0x4b, 0x54, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x4d, 0xc, 0x6, 
    0x2, 0x2, 0x4d, 0x4e, 0x9, 0x2, 0x2, 0x2, 0x4e, 0x53, 0x5, 0x6, 0x4, 
    0x7, 0x4f, 0x50, 0xc, 0x5, 0x2, 0x2, 0x50, 0x51, 0x9, 0x3, 0x2, 0x2, 
    0x51, 0x53, 0x5, 0x6, 0x4, 0x6, 0x52, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x52, 
    0x4f, 0x3, 0x2, 0x2, 0x2, 0x53, 0x56, 0x3, 0x2, 0x2, 0x2, 0x54, 0x52, 
    0x3, 0x2, 0x2, 0x2, 0x54, 0x55, 0x3, 0x2, 0x2, 0x2, 0x55, 0x7, 0x3, 
    0x2, 0x2, 0x2, 0x56, 0x54, 0x3, 0x2, 0x2, 0x2, 0x57, 0x58, 0x5, 0x6, 
    0x4, 0x2, 0x58, 0x59, 0x9, 0x4, 0x2, 0x2, 0x59, 0x5a, 0x5, 0x6, 0x4, 
    0x2, 0x5a, 0x5e, 0x3, 0x2, 0x2, 0x2, 0x5b, 0x5e, 0x7, 0xe, 0x2, 0x2, 
    0x5c, 0x5e, 0x7, 0xf, 0x2, 0x2, 0x5d, 0x57, 0x3, 0x2, 0x2, 0x2, 0x5d, 
    0x5b, 0x3, 0x2, 0x2, 0x2, 0x5d, 0x5c, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x9, 
    0x3, 0x2, 0x2, 0x2, 0xb, 0xd, 0x1a, 0x1f, 0x3f, 0x44, 0x4a, 0x52, 0x54, 
    0x5d, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

KaleidoscopeParser::Initializer KaleidoscopeParser::_init;
