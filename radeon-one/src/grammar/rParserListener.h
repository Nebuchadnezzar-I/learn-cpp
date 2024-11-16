
// Generated from rParser.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "rParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by rParser.
 */
class  rParserListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProgram(rParser::ProgramContext *ctx) = 0;
  virtual void exitProgram(rParser::ProgramContext *ctx) = 0;

  virtual void enterTag(rParser::TagContext *ctx) = 0;
  virtual void exitTag(rParser::TagContext *ctx) = 0;

  virtual void enterContent(rParser::ContentContext *ctx) = 0;
  virtual void exitContent(rParser::ContentContext *ctx) = 0;

  virtual void enterAttribute(rParser::AttributeContext *ctx) = 0;
  virtual void exitAttribute(rParser::AttributeContext *ctx) = 0;

  virtual void enterTagName(rParser::TagNameContext *ctx) = 0;
  virtual void exitTagName(rParser::TagNameContext *ctx) = 0;


};

