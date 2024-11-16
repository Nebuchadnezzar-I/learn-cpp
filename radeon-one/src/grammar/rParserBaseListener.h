
// Generated from rParser.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "rParserListener.h"


/**
 * This class provides an empty implementation of rParserListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  rParserBaseListener : public rParserListener {
public:

  virtual void enterProgram(rParser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(rParser::ProgramContext * /*ctx*/) override { }

  virtual void enterTag(rParser::TagContext * /*ctx*/) override { }
  virtual void exitTag(rParser::TagContext * /*ctx*/) override { }

  virtual void enterContent(rParser::ContentContext * /*ctx*/) override { }
  virtual void exitContent(rParser::ContentContext * /*ctx*/) override { }

  virtual void enterAttribute(rParser::AttributeContext * /*ctx*/) override { }
  virtual void exitAttribute(rParser::AttributeContext * /*ctx*/) override { }

  virtual void enterTagName(rParser::TagNameContext * /*ctx*/) override { }
  virtual void exitTagName(rParser::TagNameContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

