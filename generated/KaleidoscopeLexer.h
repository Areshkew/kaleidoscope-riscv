
// Generated from Kaleidoscope.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"


namespace Kaleidoscope {


class  KaleidoscopeLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, OPEN_COMMENT = 6, 
    CLOSE_COMMENT = 7, COMMENT = 8, DEF = 9, IF = 10, ELSE = 11, TRUE = 12, 
    FALSE = 13, ADD = 14, SUB = 15, MUL = 16, DIV = 17, MOD = 18, LT = 19, 
    GT = 20, LEQ = 21, GEQ = 22, EQ = 23, NEQ = 24, INT = 25, ID = 26, WS = 27
  };

  KaleidoscopeLexer(antlr4::CharStream *input);
  ~KaleidoscopeLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

}  // namespace Kaleidoscope
