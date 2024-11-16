
// Generated from rLexer.g4 by ANTLR 4.13.2


#include "rLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct RLexerStaticData final {
  RLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  RLexerStaticData(const RLexerStaticData&) = delete;
  RLexerStaticData(RLexerStaticData&&) = delete;
  RLexerStaticData& operator=(const RLexerStaticData&) = delete;
  RLexerStaticData& operator=(RLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag rlexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<RLexerStaticData> rlexerLexerStaticData = nullptr;

void rlexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (rlexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(rlexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<RLexerStaticData>(
    std::vector<std::string>{
      "SERVER", "LPAREN", "RPAREN", "LSQRLY", "RSQRLY", "EQUAL", "DOT", 
      "HASHTAG", "E_BODY", "E_TITLE", "E_DIV", "E_H1", "E_H2", "E_H3", "E_H4", 
      "E_H5", "E_H6", "E_P", "E_A", "A_CHARSET", "A_REL", "A_HREF", "A_CLASS", 
      "A_ID", "ID_NAME", "CLASS_NAME", "STRING", "WS", "COMMENT"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
  	4,0,29,185,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,1,0,1,0,1,0,1,0,1,1,1,1,1,2,1,2,1,3,1,3,1,4,1,4,1,5,1,5,1,6,1,6,
  	1,7,1,7,1,8,1,8,1,8,1,8,1,8,1,9,1,9,1,9,1,9,1,9,1,9,1,10,1,10,1,10,1,
  	10,1,11,1,11,1,11,1,12,1,12,1,12,1,13,1,13,1,13,1,14,1,14,1,14,1,15,1,
  	15,1,15,1,16,1,16,1,16,1,17,1,17,1,18,1,18,1,19,1,19,1,19,1,19,1,19,1,
  	19,1,19,1,19,1,20,1,20,1,20,1,20,1,21,1,21,1,21,1,21,1,21,1,22,1,22,1,
  	22,1,22,1,22,1,22,1,23,1,23,1,23,1,24,1,24,1,24,5,24,144,8,24,10,24,12,
  	24,147,9,24,1,25,1,25,1,25,5,25,152,8,25,10,25,12,25,155,9,25,1,26,1,
  	26,1,26,1,26,5,26,161,8,26,10,26,12,26,164,9,26,1,26,1,26,1,27,4,27,169,
  	8,27,11,27,12,27,170,1,27,1,27,1,28,1,28,1,28,1,28,5,28,179,8,28,10,28,
  	12,28,182,9,28,1,28,1,28,0,0,29,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,
  	9,19,10,21,11,23,12,25,13,27,14,29,15,31,16,33,17,35,18,37,19,39,20,41,
  	21,43,22,45,23,47,24,49,25,51,26,53,27,55,28,57,29,1,0,5,3,0,65,90,95,
  	95,97,122,5,0,45,45,48,57,65,90,95,95,97,122,2,0,34,34,92,92,3,0,9,10,
  	13,13,32,32,2,0,10,10,13,13,190,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,
  	7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,
  	0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,
  	0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,0,39,
  	1,0,0,0,0,41,1,0,0,0,0,43,1,0,0,0,0,45,1,0,0,0,0,47,1,0,0,0,0,49,1,0,
  	0,0,0,51,1,0,0,0,0,53,1,0,0,0,0,55,1,0,0,0,0,57,1,0,0,0,1,59,1,0,0,0,
  	3,63,1,0,0,0,5,65,1,0,0,0,7,67,1,0,0,0,9,69,1,0,0,0,11,71,1,0,0,0,13,
  	73,1,0,0,0,15,75,1,0,0,0,17,77,1,0,0,0,19,82,1,0,0,0,21,88,1,0,0,0,23,
  	92,1,0,0,0,25,95,1,0,0,0,27,98,1,0,0,0,29,101,1,0,0,0,31,104,1,0,0,0,
  	33,107,1,0,0,0,35,110,1,0,0,0,37,112,1,0,0,0,39,114,1,0,0,0,41,122,1,
  	0,0,0,43,126,1,0,0,0,45,131,1,0,0,0,47,137,1,0,0,0,49,140,1,0,0,0,51,
  	148,1,0,0,0,53,156,1,0,0,0,55,168,1,0,0,0,57,174,1,0,0,0,59,60,5,45,0,
  	0,60,61,5,45,0,0,61,62,5,45,0,0,62,2,1,0,0,0,63,64,5,40,0,0,64,4,1,0,
  	0,0,65,66,5,41,0,0,66,6,1,0,0,0,67,68,5,123,0,0,68,8,1,0,0,0,69,70,5,
  	125,0,0,70,10,1,0,0,0,71,72,5,61,0,0,72,12,1,0,0,0,73,74,5,46,0,0,74,
  	14,1,0,0,0,75,76,5,35,0,0,76,16,1,0,0,0,77,78,5,98,0,0,78,79,5,111,0,
  	0,79,80,5,100,0,0,80,81,5,121,0,0,81,18,1,0,0,0,82,83,5,116,0,0,83,84,
  	5,105,0,0,84,85,5,116,0,0,85,86,5,108,0,0,86,87,5,101,0,0,87,20,1,0,0,
  	0,88,89,5,100,0,0,89,90,5,105,0,0,90,91,5,118,0,0,91,22,1,0,0,0,92,93,
  	5,104,0,0,93,94,5,49,0,0,94,24,1,0,0,0,95,96,5,104,0,0,96,97,5,50,0,0,
  	97,26,1,0,0,0,98,99,5,104,0,0,99,100,5,51,0,0,100,28,1,0,0,0,101,102,
  	5,104,0,0,102,103,5,52,0,0,103,30,1,0,0,0,104,105,5,104,0,0,105,106,5,
  	53,0,0,106,32,1,0,0,0,107,108,5,104,0,0,108,109,5,54,0,0,109,34,1,0,0,
  	0,110,111,5,112,0,0,111,36,1,0,0,0,112,113,5,97,0,0,113,38,1,0,0,0,114,
  	115,5,99,0,0,115,116,5,104,0,0,116,117,5,97,0,0,117,118,5,114,0,0,118,
  	119,5,115,0,0,119,120,5,101,0,0,120,121,5,116,0,0,121,40,1,0,0,0,122,
  	123,5,114,0,0,123,124,5,101,0,0,124,125,5,108,0,0,125,42,1,0,0,0,126,
  	127,5,104,0,0,127,128,5,114,0,0,128,129,5,101,0,0,129,130,5,102,0,0,130,
  	44,1,0,0,0,131,132,5,99,0,0,132,133,5,108,0,0,133,134,5,97,0,0,134,135,
  	5,115,0,0,135,136,5,115,0,0,136,46,1,0,0,0,137,138,5,105,0,0,138,139,
  	5,100,0,0,139,48,1,0,0,0,140,141,5,35,0,0,141,145,7,0,0,0,142,144,7,1,
  	0,0,143,142,1,0,0,0,144,147,1,0,0,0,145,143,1,0,0,0,145,146,1,0,0,0,146,
  	50,1,0,0,0,147,145,1,0,0,0,148,149,5,46,0,0,149,153,7,0,0,0,150,152,7,
  	1,0,0,151,150,1,0,0,0,152,155,1,0,0,0,153,151,1,0,0,0,153,154,1,0,0,0,
  	154,52,1,0,0,0,155,153,1,0,0,0,156,162,5,34,0,0,157,161,8,2,0,0,158,159,
  	5,92,0,0,159,161,9,0,0,0,160,157,1,0,0,0,160,158,1,0,0,0,161,164,1,0,
  	0,0,162,160,1,0,0,0,162,163,1,0,0,0,163,165,1,0,0,0,164,162,1,0,0,0,165,
  	166,5,34,0,0,166,54,1,0,0,0,167,169,7,3,0,0,168,167,1,0,0,0,169,170,1,
  	0,0,0,170,168,1,0,0,0,170,171,1,0,0,0,171,172,1,0,0,0,172,173,6,27,0,
  	0,173,56,1,0,0,0,174,175,5,47,0,0,175,176,5,47,0,0,176,180,1,0,0,0,177,
  	179,8,4,0,0,178,177,1,0,0,0,179,182,1,0,0,0,180,178,1,0,0,0,180,181,1,
  	0,0,0,181,183,1,0,0,0,182,180,1,0,0,0,183,184,6,28,0,0,184,58,1,0,0,0,
  	7,0,145,153,160,162,170,180,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  rlexerLexerStaticData = std::move(staticData);
}

}

rLexer::rLexer(CharStream *input) : Lexer(input) {
  rLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *rlexerLexerStaticData->atn, rlexerLexerStaticData->decisionToDFA, rlexerLexerStaticData->sharedContextCache);
}

rLexer::~rLexer() {
  delete _interpreter;
}

std::string rLexer::getGrammarFileName() const {
  return "rLexer.g4";
}

const std::vector<std::string>& rLexer::getRuleNames() const {
  return rlexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& rLexer::getChannelNames() const {
  return rlexerLexerStaticData->channelNames;
}

const std::vector<std::string>& rLexer::getModeNames() const {
  return rlexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& rLexer::getVocabulary() const {
  return rlexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView rLexer::getSerializedATN() const {
  return rlexerLexerStaticData->serializedATN;
}

const atn::ATN& rLexer::getATN() const {
  return *rlexerLexerStaticData->atn;
}




void rLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  rlexerLexerInitialize();
#else
  ::antlr4::internal::call_once(rlexerLexerOnceFlag, rlexerLexerInitialize);
#endif
}
