
// Generated from grammar/ExprLexer.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  ExprLexer : public antlr4::Lexer {
public:
  enum {
    SERVER = 1, LPAREN = 2, RPAREN = 3, LSQRLY = 4, RSQRLY = 5, EQUAL = 6, 
    DOT = 7, HASHTAG = 8, E_BODY = 9, E_TITLE = 10, E_DIV = 11, E_H1 = 12, 
    E_H2 = 13, E_H3 = 14, E_H4 = 15, E_H5 = 16, E_H6 = 17, E_P = 18, E_A = 19, 
    A_CHARSET = 20, A_REL = 21, A_HREF = 22, A_CLASS = 23, A_ID = 24, ID_NAME = 25, 
    CLASS_NAME = 26, STRING = 27, WS = 28, COMMENT = 29
  };

  explicit ExprLexer(antlr4::CharStream *input);

  ~ExprLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

