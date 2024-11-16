
// Generated from rParser.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  rParser : public antlr4::Parser {
public:
  enum {
    SERVER = 1, LPAREN = 2, RPAREN = 3, LSQRLY = 4, RSQRLY = 5, EQUAL = 6,
    DOT = 7, HASHTAG = 8, E_BODY = 9, E_TITLE = 10, E_DIV = 11, E_H1 = 12,
    E_H2 = 13, E_H3 = 14, E_H4 = 15, E_H5 = 16, E_H6 = 17, E_P = 18, E_A = 19,
    A_CHARSET = 20, A_REL = 21, A_HREF = 22, A_CLASS = 23, A_ID = 24, ID_NAME = 25,
    CLASS_NAME = 26, STRING = 27, WS = 28, COMMENT = 29
  };

  enum {
    RuleProgram = 0, RuleTag = 1, RuleContent = 2, RuleAttribute = 3, RuleTagName = 4
  };

  explicit rParser(antlr4::TokenStream *input);

  rParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~rParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class ProgramContext;
  class TagContext;
  class ContentContext;
  class AttributeContext;
  class TagNameContext;

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<TagContext *> tag();
    TagContext* tag(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

  };

  ProgramContext* program();

  class  TagContext : public antlr4::ParserRuleContext {
  public:
    TagContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TagNameContext *tagName();
    antlr4::tree::TerminalNode *LSQRLY();
    ContentContext *content();
    antlr4::tree::TerminalNode *RSQRLY();
    std::vector<antlr4::tree::TerminalNode *> CLASS_NAME();
    antlr4::tree::TerminalNode* CLASS_NAME(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ID_NAME();
    antlr4::tree::TerminalNode* ID_NAME(size_t i);
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<AttributeContext *> attribute();
    AttributeContext* attribute(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

  };

  TagContext* tag();

  class  ContentContext : public antlr4::ParserRuleContext {
  public:
    ContentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TagContext *> tag();
    TagContext* tag(size_t i);
    antlr4::tree::TerminalNode *STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

  };

  ContentContext* content();

  class  AttributeContext : public antlr4::ParserRuleContext {
  public:
    AttributeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *A_CHARSET();
    antlr4::tree::TerminalNode *A_REL();
    antlr4::tree::TerminalNode *A_HREF();
    antlr4::tree::TerminalNode *A_ID();
    antlr4::tree::TerminalNode *A_CLASS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

  };

  AttributeContext* attribute();

  class  TagNameContext : public antlr4::ParserRuleContext {
  public:
    TagNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *E_BODY();
    antlr4::tree::TerminalNode *E_H1();
    antlr4::tree::TerminalNode *E_DIV();
    antlr4::tree::TerminalNode *E_A();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

  };

  TagNameContext* tagName();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

