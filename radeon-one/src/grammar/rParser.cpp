
// Generated from rParser.g4 by ANTLR 4.13.2


#include "rParserListener.h"

#include "rParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct RParserStaticData final {
  RParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  RParserStaticData(const RParserStaticData&) = delete;
  RParserStaticData(RParserStaticData&&) = delete;
  RParserStaticData& operator=(const RParserStaticData&) = delete;
  RParserStaticData& operator=(RParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag rparserParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<RParserStaticData> rparserParserStaticData = nullptr;

void rparserParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (rparserParserStaticData != nullptr) {
    return;
  }
#else
  assert(rparserParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<RParserStaticData>(
    std::vector<std::string>{
      "program", "tag", "content", "attribute", "tagName"
    },
    std::vector<std::string>{
      "", "'---'", "'('", "')'", "'{'", "'}'", "'='", "'.'", "'#'", "'body'", 
      "'title'", "'div'", "'h1'", "'h2'", "'h3'", "'h4'", "'h5'", "'h6'", 
      "'p'", "'a'", "'charset'", "'rel'", "'href'", "'class'", "'id'"
    },
    std::vector<std::string>{
      "", "SERVER", "LPAREN", "RPAREN", "LSQRLY", "RSQRLY", "EQUAL", "DOT", 
      "HASHTAG", "E_BODY", "E_TITLE", "E_DIV", "E_H1", "E_H2", "E_H3", "E_H4", 
      "E_H5", "E_H6", "E_P", "E_A", "A_CHARSET", "A_REL", "A_HREF", "A_CLASS", 
      "A_ID", "ID_NAME", "CLASS_NAME", "STRING", "WS", "COMMENT"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,29,62,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,1,0,5,0,12,8,0,10,0,
  	12,0,15,9,0,1,0,1,0,1,1,1,1,5,1,21,8,1,10,1,12,1,24,9,1,1,1,1,1,1,1,1,
  	1,1,1,1,1,1,1,5,1,33,8,1,10,1,12,1,36,9,1,1,1,3,1,39,8,1,1,1,1,1,1,1,
  	1,1,3,1,45,8,1,1,2,5,2,48,8,2,10,2,12,2,51,9,2,1,2,3,2,54,8,2,1,3,1,3,
  	1,3,1,3,1,4,1,4,1,4,2,34,49,0,5,0,2,4,6,8,0,3,1,0,25,26,1,0,20,24,3,0,
  	9,9,11,12,19,19,63,0,13,1,0,0,0,2,44,1,0,0,0,4,49,1,0,0,0,6,55,1,0,0,
  	0,8,59,1,0,0,0,10,12,3,2,1,0,11,10,1,0,0,0,12,15,1,0,0,0,13,11,1,0,0,
  	0,13,14,1,0,0,0,14,16,1,0,0,0,15,13,1,0,0,0,16,17,5,0,0,1,17,1,1,0,0,
  	0,18,22,3,8,4,0,19,21,7,0,0,0,20,19,1,0,0,0,21,24,1,0,0,0,22,20,1,0,0,
  	0,22,23,1,0,0,0,23,25,1,0,0,0,24,22,1,0,0,0,25,26,5,4,0,0,26,27,3,4,2,
  	0,27,28,5,5,0,0,28,45,1,0,0,0,29,38,3,8,4,0,30,34,5,2,0,0,31,33,3,6,3,
  	0,32,31,1,0,0,0,33,36,1,0,0,0,34,35,1,0,0,0,34,32,1,0,0,0,35,37,1,0,0,
  	0,36,34,1,0,0,0,37,39,5,3,0,0,38,30,1,0,0,0,38,39,1,0,0,0,39,40,1,0,0,
  	0,40,41,5,4,0,0,41,42,3,4,2,0,42,43,5,5,0,0,43,45,1,0,0,0,44,18,1,0,0,
  	0,44,29,1,0,0,0,45,3,1,0,0,0,46,48,3,2,1,0,47,46,1,0,0,0,48,51,1,0,0,
  	0,49,50,1,0,0,0,49,47,1,0,0,0,50,53,1,0,0,0,51,49,1,0,0,0,52,54,5,27,
  	0,0,53,52,1,0,0,0,53,54,1,0,0,0,54,5,1,0,0,0,55,56,7,1,0,0,56,57,5,6,
  	0,0,57,58,5,27,0,0,58,7,1,0,0,0,59,60,7,2,0,0,60,9,1,0,0,0,7,13,22,34,
  	38,44,49,53
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  rparserParserStaticData = std::move(staticData);
}

}

rParser::rParser(TokenStream *input) : rParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

rParser::rParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  rParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *rparserParserStaticData->atn, rparserParserStaticData->decisionToDFA, rparserParserStaticData->sharedContextCache, options);
}

rParser::~rParser() {
  delete _interpreter;
}

const atn::ATN& rParser::getATN() const {
  return *rparserParserStaticData->atn;
}

std::string rParser::getGrammarFileName() const {
  return "rParser.g4";
}

const std::vector<std::string>& rParser::getRuleNames() const {
  return rparserParserStaticData->ruleNames;
}

const dfa::Vocabulary& rParser::getVocabulary() const {
  return rparserParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView rParser::getSerializedATN() const {
  return rparserParserStaticData->serializedATN;
}


//----------------- ProgramContext ------------------------------------------------------------------

rParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* rParser::ProgramContext::EOF() {
  return getToken(rParser::EOF, 0);
}

std::vector<rParser::TagContext *> rParser::ProgramContext::tag() {
  return getRuleContexts<rParser::TagContext>();
}

rParser::TagContext* rParser::ProgramContext::tag(size_t i) {
  return getRuleContext<rParser::TagContext>(i);
}


size_t rParser::ProgramContext::getRuleIndex() const {
  return rParser::RuleProgram;
}

void rParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<rParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void rParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<rParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}

rParser::ProgramContext* rParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, rParser::RuleProgram);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(13);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 530944) != 0)) {
      setState(10);
      tag();
      setState(15);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(16);
    match(rParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TagContext ------------------------------------------------------------------

rParser::TagContext::TagContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

rParser::TagNameContext* rParser::TagContext::tagName() {
  return getRuleContext<rParser::TagNameContext>(0);
}

tree::TerminalNode* rParser::TagContext::LSQRLY() {
  return getToken(rParser::LSQRLY, 0);
}

rParser::ContentContext* rParser::TagContext::content() {
  return getRuleContext<rParser::ContentContext>(0);
}

tree::TerminalNode* rParser::TagContext::RSQRLY() {
  return getToken(rParser::RSQRLY, 0);
}

std::vector<tree::TerminalNode *> rParser::TagContext::CLASS_NAME() {
  return getTokens(rParser::CLASS_NAME);
}

tree::TerminalNode* rParser::TagContext::CLASS_NAME(size_t i) {
  return getToken(rParser::CLASS_NAME, i);
}

std::vector<tree::TerminalNode *> rParser::TagContext::ID_NAME() {
  return getTokens(rParser::ID_NAME);
}

tree::TerminalNode* rParser::TagContext::ID_NAME(size_t i) {
  return getToken(rParser::ID_NAME, i);
}

tree::TerminalNode* rParser::TagContext::LPAREN() {
  return getToken(rParser::LPAREN, 0);
}

tree::TerminalNode* rParser::TagContext::RPAREN() {
  return getToken(rParser::RPAREN, 0);
}

std::vector<rParser::AttributeContext *> rParser::TagContext::attribute() {
  return getRuleContexts<rParser::AttributeContext>();
}

rParser::AttributeContext* rParser::TagContext::attribute(size_t i) {
  return getRuleContext<rParser::AttributeContext>(i);
}


size_t rParser::TagContext::getRuleIndex() const {
  return rParser::RuleTag;
}

void rParser::TagContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<rParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTag(this);
}

void rParser::TagContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<rParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTag(this);
}

rParser::TagContext* rParser::tag() {
  TagContext *_localctx = _tracker.createInstance<TagContext>(_ctx, getState());
  enterRule(_localctx, 2, rParser::RuleTag);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    setState(44);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(18);
      tagName();
      setState(22);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == rParser::ID_NAME

      || _la == rParser::CLASS_NAME) {
        setState(19);
        _la = _input->LA(1);
        if (!(_la == rParser::ID_NAME

        || _la == rParser::CLASS_NAME)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(24);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(25);
      match(rParser::LSQRLY);
      setState(26);
      content();
      setState(27);
      match(rParser::RSQRLY);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(29);
      tagName();
      setState(38);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == rParser::LPAREN) {
        setState(30);
        match(rParser::LPAREN);
        setState(34);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
        while (alt != 1 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1 + 1) {
            setState(31);
            attribute(); 
          }
          setState(36);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
        }
        setState(37);
        match(rParser::RPAREN);
      }
      setState(40);
      match(rParser::LSQRLY);
      setState(41);
      content();
      setState(42);
      match(rParser::RSQRLY);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ContentContext ------------------------------------------------------------------

rParser::ContentContext::ContentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<rParser::TagContext *> rParser::ContentContext::tag() {
  return getRuleContexts<rParser::TagContext>();
}

rParser::TagContext* rParser::ContentContext::tag(size_t i) {
  return getRuleContext<rParser::TagContext>(i);
}

tree::TerminalNode* rParser::ContentContext::STRING() {
  return getToken(rParser::STRING, 0);
}


size_t rParser::ContentContext::getRuleIndex() const {
  return rParser::RuleContent;
}

void rParser::ContentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<rParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterContent(this);
}

void rParser::ContentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<rParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitContent(this);
}

rParser::ContentContext* rParser::content() {
  ContentContext *_localctx = _tracker.createInstance<ContentContext>(_ctx, getState());
  enterRule(_localctx, 4, rParser::RuleContent);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(49);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    while (alt != 1 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1 + 1) {
        setState(46);
        tag(); 
      }
      setState(51);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    }
    setState(53);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == rParser::STRING) {
      setState(52);
      match(rParser::STRING);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttributeContext ------------------------------------------------------------------

rParser::AttributeContext::AttributeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* rParser::AttributeContext::EQUAL() {
  return getToken(rParser::EQUAL, 0);
}

tree::TerminalNode* rParser::AttributeContext::STRING() {
  return getToken(rParser::STRING, 0);
}

tree::TerminalNode* rParser::AttributeContext::A_CHARSET() {
  return getToken(rParser::A_CHARSET, 0);
}

tree::TerminalNode* rParser::AttributeContext::A_REL() {
  return getToken(rParser::A_REL, 0);
}

tree::TerminalNode* rParser::AttributeContext::A_HREF() {
  return getToken(rParser::A_HREF, 0);
}

tree::TerminalNode* rParser::AttributeContext::A_ID() {
  return getToken(rParser::A_ID, 0);
}

tree::TerminalNode* rParser::AttributeContext::A_CLASS() {
  return getToken(rParser::A_CLASS, 0);
}


size_t rParser::AttributeContext::getRuleIndex() const {
  return rParser::RuleAttribute;
}

void rParser::AttributeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<rParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttribute(this);
}

void rParser::AttributeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<rParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttribute(this);
}

rParser::AttributeContext* rParser::attribute() {
  AttributeContext *_localctx = _tracker.createInstance<AttributeContext>(_ctx, getState());
  enterRule(_localctx, 6, rParser::RuleAttribute);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(55);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 32505856) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(56);
    match(rParser::EQUAL);
    setState(57);
    match(rParser::STRING);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TagNameContext ------------------------------------------------------------------

rParser::TagNameContext::TagNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* rParser::TagNameContext::E_BODY() {
  return getToken(rParser::E_BODY, 0);
}

tree::TerminalNode* rParser::TagNameContext::E_H1() {
  return getToken(rParser::E_H1, 0);
}

tree::TerminalNode* rParser::TagNameContext::E_DIV() {
  return getToken(rParser::E_DIV, 0);
}

tree::TerminalNode* rParser::TagNameContext::E_A() {
  return getToken(rParser::E_A, 0);
}


size_t rParser::TagNameContext::getRuleIndex() const {
  return rParser::RuleTagName;
}

void rParser::TagNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<rParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTagName(this);
}

void rParser::TagNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<rParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTagName(this);
}

rParser::TagNameContext* rParser::tagName() {
  TagNameContext *_localctx = _tracker.createInstance<TagNameContext>(_ctx, getState());
  enterRule(_localctx, 8, rParser::RuleTagName);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(59);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 530944) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void rParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  rparserParserInitialize();
#else
  ::antlr4::internal::call_once(rparserParserOnceFlag, rparserParserInitialize);
#endif
}
