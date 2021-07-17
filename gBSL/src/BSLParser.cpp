
// Generated from d:\cpp\AddInNative\gBSL\src\BSLParser.g4 by ANTLR 4.8


#include "BSLParserListener.h"

#include "BSLParser.h"


using namespace antlrcpp;
using namespace antlr4;

BSLParser::BSLParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

BSLParser::~BSLParser() {
  delete _interpreter;
}

std::string BSLParser::getGrammarFileName() const {
  return "BSLParser.g4";
}

const std::vector<std::string>& BSLParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& BSLParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- FileContext ------------------------------------------------------------------

BSLParser::FileContext::FileContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

BSLParser::FileCodeBlockContext* BSLParser::FileContext::fileCodeBlock() {
  return getRuleContext<BSLParser::FileCodeBlockContext>(0);
}

tree::TerminalNode* BSLParser::FileContext::EOF() {
  return getToken(BSLParser::EOF, 0);
}

BSLParser::ShebangContext* BSLParser::FileContext::shebang() {
  return getRuleContext<BSLParser::ShebangContext>(0);
}

std::vector<BSLParser::PreprocessorContext *> BSLParser::FileContext::preprocessor() {
  return getRuleContexts<BSLParser::PreprocessorContext>();
}

BSLParser::PreprocessorContext* BSLParser::FileContext::preprocessor(size_t i) {
  return getRuleContext<BSLParser::PreprocessorContext>(i);
}

BSLParser::ModuleVarsContext* BSLParser::FileContext::moduleVars() {
  return getRuleContext<BSLParser::ModuleVarsContext>(0);
}

BSLParser::FileCodeBlockBeforeSubContext* BSLParser::FileContext::fileCodeBlockBeforeSub() {
  return getRuleContext<BSLParser::FileCodeBlockBeforeSubContext>(0);
}

BSLParser::SubsContext* BSLParser::FileContext::subs() {
  return getRuleContext<BSLParser::SubsContext>(0);
}


size_t BSLParser::FileContext::getRuleIndex() const {
  return BSLParser::RuleFile;
}

void BSLParser::FileContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFile(this);
}

void BSLParser::FileContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFile(this);
}

BSLParser::FileContext* BSLParser::file() {
  FileContext *_localctx = _tracker.createInstance<FileContext>(_ctx, getState());
  enterRule(_localctx, 0, BSLParser::RuleFile);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(203);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
    case 1: {
      setState(202);
      shebang();
      break;
    }

    }
    setState(208);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(205);
        preprocessor(); 
      }
      setState(210);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx);
    }
    setState(212);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      setState(211);
      moduleVars();
      break;
    }

    }
    setState(217);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(214);
        preprocessor(); 
      }
      setState(219);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    }
    setState(223);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      setState(220);
      fileCodeBlockBeforeSub();
      setState(221);
      subs();
      break;
    }

    }
    setState(225);
    fileCodeBlock();
    setState(226);
    match(BSLParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ShebangContext ------------------------------------------------------------------

BSLParser::ShebangContext::ShebangContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BSLParser::ShebangContext::HASH() {
  return getToken(BSLParser::HASH, 0);
}

tree::TerminalNode* BSLParser::ShebangContext::PREPROC_EXCLAMATION_MARK() {
  return getToken(BSLParser::PREPROC_EXCLAMATION_MARK, 0);
}

std::vector<tree::TerminalNode *> BSLParser::ShebangContext::PREPROC_ANY() {
  return getTokens(BSLParser::PREPROC_ANY);
}

tree::TerminalNode* BSLParser::ShebangContext::PREPROC_ANY(size_t i) {
  return getToken(BSLParser::PREPROC_ANY, i);
}

std::vector<tree::TerminalNode *> BSLParser::ShebangContext::PREPROC_IDENTIFIER() {
  return getTokens(BSLParser::PREPROC_IDENTIFIER);
}

tree::TerminalNode* BSLParser::ShebangContext::PREPROC_IDENTIFIER(size_t i) {
  return getToken(BSLParser::PREPROC_IDENTIFIER, i);
}


size_t BSLParser::ShebangContext::getRuleIndex() const {
  return BSLParser::RuleShebang;
}

void BSLParser::ShebangContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterShebang(this);
}

void BSLParser::ShebangContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitShebang(this);
}

BSLParser::ShebangContext* BSLParser::shebang() {
  ShebangContext *_localctx = _tracker.createInstance<ShebangContext>(_ctx, getState());
  enterRule(_localctx, 2, BSLParser::RuleShebang);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(228);
    match(BSLParser::HASH);
    setState(229);
    match(BSLParser::PREPROC_EXCLAMATION_MARK);
    setState(233);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BSLParser::PREPROC_IDENTIFIER

    || _la == BSLParser::PREPROC_ANY) {
      setState(230);
      _la = _input->LA(1);
      if (!(_la == BSLParser::PREPROC_IDENTIFIER

      || _la == BSLParser::PREPROC_ANY)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(235);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UsedLibContext ------------------------------------------------------------------

BSLParser::UsedLibContext::UsedLibContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BSLParser::UsedLibContext::PREPROC_STRING() {
  return getToken(BSLParser::PREPROC_STRING, 0);
}

tree::TerminalNode* BSLParser::UsedLibContext::PREPROC_IDENTIFIER() {
  return getToken(BSLParser::PREPROC_IDENTIFIER, 0);
}


size_t BSLParser::UsedLibContext::getRuleIndex() const {
  return BSLParser::RuleUsedLib;
}

void BSLParser::UsedLibContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUsedLib(this);
}

void BSLParser::UsedLibContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUsedLib(this);
}

BSLParser::UsedLibContext* BSLParser::usedLib() {
  UsedLibContext *_localctx = _tracker.createInstance<UsedLibContext>(_ctx, getState());
  enterRule(_localctx, 4, BSLParser::RuleUsedLib);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(236);
    _la = _input->LA(1);
    if (!(_la == BSLParser::PREPROC_STRING

    || _la == BSLParser::PREPROC_IDENTIFIER)) {
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

//----------------- UseContext ------------------------------------------------------------------

BSLParser::UseContext::UseContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BSLParser::UseContext::PREPROC_USE_KEYWORD() {
  return getToken(BSLParser::PREPROC_USE_KEYWORD, 0);
}

BSLParser::UsedLibContext* BSLParser::UseContext::usedLib() {
  return getRuleContext<BSLParser::UsedLibContext>(0);
}


size_t BSLParser::UseContext::getRuleIndex() const {
  return BSLParser::RuleUse;
}

void BSLParser::UseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUse(this);
}

void BSLParser::UseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUse(this);
}

BSLParser::UseContext* BSLParser::use() {
  UseContext *_localctx = _tracker.createInstance<UseContext>(_ctx, getState());
  enterRule(_localctx, 6, BSLParser::RuleUse);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(238);
    match(BSLParser::PREPROC_USE_KEYWORD);
    setState(239);
    usedLib();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RegionStartContext ------------------------------------------------------------------

BSLParser::RegionStartContext::RegionStartContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BSLParser::RegionStartContext::PREPROC_REGION() {
  return getToken(BSLParser::PREPROC_REGION, 0);
}

BSLParser::RegionNameContext* BSLParser::RegionStartContext::regionName() {
  return getRuleContext<BSLParser::RegionNameContext>(0);
}


size_t BSLParser::RegionStartContext::getRuleIndex() const {
  return BSLParser::RuleRegionStart;
}

void BSLParser::RegionStartContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRegionStart(this);
}

void BSLParser::RegionStartContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRegionStart(this);
}

BSLParser::RegionStartContext* BSLParser::regionStart() {
  RegionStartContext *_localctx = _tracker.createInstance<RegionStartContext>(_ctx, getState());
  enterRule(_localctx, 8, BSLParser::RuleRegionStart);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(241);
    match(BSLParser::PREPROC_REGION);
    setState(242);
    regionName();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RegionEndContext ------------------------------------------------------------------

BSLParser::RegionEndContext::RegionEndContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BSLParser::RegionEndContext::PREPROC_END_REGION() {
  return getToken(BSLParser::PREPROC_END_REGION, 0);
}


size_t BSLParser::RegionEndContext::getRuleIndex() const {
  return BSLParser::RuleRegionEnd;
}

void BSLParser::RegionEndContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRegionEnd(this);
}

void BSLParser::RegionEndContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRegionEnd(this);
}

BSLParser::RegionEndContext* BSLParser::regionEnd() {
  RegionEndContext *_localctx = _tracker.createInstance<RegionEndContext>(_ctx, getState());
  enterRule(_localctx, 10, BSLParser::RuleRegionEnd);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(244);
    match(BSLParser::PREPROC_END_REGION);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RegionNameContext ------------------------------------------------------------------

BSLParser::RegionNameContext::RegionNameContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BSLParser::RegionNameContext::PREPROC_IDENTIFIER() {
  return getToken(BSLParser::PREPROC_IDENTIFIER, 0);
}


size_t BSLParser::RegionNameContext::getRuleIndex() const {
  return BSLParser::RuleRegionName;
}

void BSLParser::RegionNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRegionName(this);
}

void BSLParser::RegionNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRegionName(this);
}

BSLParser::RegionNameContext* BSLParser::regionName() {
  RegionNameContext *_localctx = _tracker.createInstance<RegionNameContext>(_ctx, getState());
  enterRule(_localctx, 12, BSLParser::RuleRegionName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(246);
    match(BSLParser::PREPROC_IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Preproc_ifContext ------------------------------------------------------------------

BSLParser::Preproc_ifContext::Preproc_ifContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BSLParser::Preproc_ifContext::PREPROC_IF_KEYWORD() {
  return getToken(BSLParser::PREPROC_IF_KEYWORD, 0);
}

BSLParser::Preproc_expressionContext* BSLParser::Preproc_ifContext::preproc_expression() {
  return getRuleContext<BSLParser::Preproc_expressionContext>(0);
}

tree::TerminalNode* BSLParser::Preproc_ifContext::PREPROC_THEN_KEYWORD() {
  return getToken(BSLParser::PREPROC_THEN_KEYWORD, 0);
}


size_t BSLParser::Preproc_ifContext::getRuleIndex() const {
  return BSLParser::RulePreproc_if;
}

void BSLParser::Preproc_ifContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPreproc_if(this);
}

void BSLParser::Preproc_ifContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPreproc_if(this);
}

BSLParser::Preproc_ifContext* BSLParser::preproc_if() {
  Preproc_ifContext *_localctx = _tracker.createInstance<Preproc_ifContext>(_ctx, getState());
  enterRule(_localctx, 14, BSLParser::RulePreproc_if);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(248);
    match(BSLParser::PREPROC_IF_KEYWORD);
    setState(249);
    preproc_expression();
    setState(250);
    match(BSLParser::PREPROC_THEN_KEYWORD);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Preproc_elsifContext ------------------------------------------------------------------

BSLParser::Preproc_elsifContext::Preproc_elsifContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BSLParser::Preproc_elsifContext::PREPROC_ELSIF_KEYWORD() {
  return getToken(BSLParser::PREPROC_ELSIF_KEYWORD, 0);
}

BSLParser::Preproc_expressionContext* BSLParser::Preproc_elsifContext::preproc_expression() {
  return getRuleContext<BSLParser::Preproc_expressionContext>(0);
}

tree::TerminalNode* BSLParser::Preproc_elsifContext::PREPROC_THEN_KEYWORD() {
  return getToken(BSLParser::PREPROC_THEN_KEYWORD, 0);
}


size_t BSLParser::Preproc_elsifContext::getRuleIndex() const {
  return BSLParser::RulePreproc_elsif;
}

void BSLParser::Preproc_elsifContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPreproc_elsif(this);
}

void BSLParser::Preproc_elsifContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPreproc_elsif(this);
}

BSLParser::Preproc_elsifContext* BSLParser::preproc_elsif() {
  Preproc_elsifContext *_localctx = _tracker.createInstance<Preproc_elsifContext>(_ctx, getState());
  enterRule(_localctx, 16, BSLParser::RulePreproc_elsif);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(252);
    match(BSLParser::PREPROC_ELSIF_KEYWORD);
    setState(253);
    preproc_expression();
    setState(254);
    match(BSLParser::PREPROC_THEN_KEYWORD);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Preproc_elseContext ------------------------------------------------------------------

BSLParser::Preproc_elseContext::Preproc_elseContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BSLParser::Preproc_elseContext::PREPROC_ELSE_KEYWORD() {
  return getToken(BSLParser::PREPROC_ELSE_KEYWORD, 0);
}


size_t BSLParser::Preproc_elseContext::getRuleIndex() const {
  return BSLParser::RulePreproc_else;
}

void BSLParser::Preproc_elseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPreproc_else(this);
}

void BSLParser::Preproc_elseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPreproc_else(this);
}

BSLParser::Preproc_elseContext* BSLParser::preproc_else() {
  Preproc_elseContext *_localctx = _tracker.createInstance<Preproc_elseContext>(_ctx, getState());
  enterRule(_localctx, 18, BSLParser::RulePreproc_else);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(256);
    match(BSLParser::PREPROC_ELSE_KEYWORD);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Preproc_endifContext ------------------------------------------------------------------

BSLParser::Preproc_endifContext::Preproc_endifContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BSLParser::Preproc_endifContext::PREPROC_ENDIF_KEYWORD() {
  return getToken(BSLParser::PREPROC_ENDIF_KEYWORD, 0);
}


size_t BSLParser::Preproc_endifContext::getRuleIndex() const {
  return BSLParser::RulePreproc_endif;
}

void BSLParser::Preproc_endifContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPreproc_endif(this);
}

void BSLParser::Preproc_endifContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPreproc_endif(this);
}

BSLParser::Preproc_endifContext* BSLParser::preproc_endif() {
  Preproc_endifContext *_localctx = _tracker.createInstance<Preproc_endifContext>(_ctx, getState());
  enterRule(_localctx, 20, BSLParser::RulePreproc_endif);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(258);
    match(BSLParser::PREPROC_ENDIF_KEYWORD);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Preproc_expressionContext ------------------------------------------------------------------

BSLParser::Preproc_expressionContext::Preproc_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BSLParser::Preproc_expressionContext::PREPROC_LPAREN() {
  return getToken(BSLParser::PREPROC_LPAREN, 0);
}

BSLParser::Preproc_expressionContext* BSLParser::Preproc_expressionContext::preproc_expression() {
  return getRuleContext<BSLParser::Preproc_expressionContext>(0);
}

tree::TerminalNode* BSLParser::Preproc_expressionContext::PREPROC_RPAREN() {
  return getToken(BSLParser::PREPROC_RPAREN, 0);
}

tree::TerminalNode* BSLParser::Preproc_expressionContext::PREPROC_NOT_KEYWORD() {
  return getToken(BSLParser::PREPROC_NOT_KEYWORD, 0);
}

BSLParser::Preproc_logicalExpressionContext* BSLParser::Preproc_expressionContext::preproc_logicalExpression() {
  return getRuleContext<BSLParser::Preproc_logicalExpressionContext>(0);
}


size_t BSLParser::Preproc_expressionContext::getRuleIndex() const {
  return BSLParser::RulePreproc_expression;
}

void BSLParser::Preproc_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPreproc_expression(this);
}

void BSLParser::Preproc_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPreproc_expression(this);
}

BSLParser::Preproc_expressionContext* BSLParser::preproc_expression() {
  Preproc_expressionContext *_localctx = _tracker.createInstance<Preproc_expressionContext>(_ctx, getState());
  enterRule(_localctx, 22, BSLParser::RulePreproc_expression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(268);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(261);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == BSLParser::PREPROC_NOT_KEYWORD) {
        setState(260);
        match(BSLParser::PREPROC_NOT_KEYWORD);
      }

      setState(263);
      match(BSLParser::PREPROC_LPAREN);
      setState(264);
      preproc_expression();
      setState(265);
      match(BSLParser::PREPROC_RPAREN);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(267);
      preproc_logicalExpression();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Preproc_logicalOperandContext ------------------------------------------------------------------

BSLParser::Preproc_logicalOperandContext::Preproc_logicalOperandContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BSLParser::Preproc_logicalOperandContext::PREPROC_LPAREN() {
  return getToken(BSLParser::PREPROC_LPAREN, 0);
}

BSLParser::Preproc_logicalOperandContext* BSLParser::Preproc_logicalOperandContext::preproc_logicalOperand() {
  return getRuleContext<BSLParser::Preproc_logicalOperandContext>(0);
}

tree::TerminalNode* BSLParser::Preproc_logicalOperandContext::PREPROC_RPAREN() {
  return getToken(BSLParser::PREPROC_RPAREN, 0);
}

tree::TerminalNode* BSLParser::Preproc_logicalOperandContext::PREPROC_NOT_KEYWORD() {
  return getToken(BSLParser::PREPROC_NOT_KEYWORD, 0);
}

BSLParser::Preproc_symbolContext* BSLParser::Preproc_logicalOperandContext::preproc_symbol() {
  return getRuleContext<BSLParser::Preproc_symbolContext>(0);
}


size_t BSLParser::Preproc_logicalOperandContext::getRuleIndex() const {
  return BSLParser::RulePreproc_logicalOperand;
}

void BSLParser::Preproc_logicalOperandContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPreproc_logicalOperand(this);
}

void BSLParser::Preproc_logicalOperandContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPreproc_logicalOperand(this);
}

BSLParser::Preproc_logicalOperandContext* BSLParser::preproc_logicalOperand() {
  Preproc_logicalOperandContext *_localctx = _tracker.createInstance<Preproc_logicalOperandContext>(_ctx, getState());
  enterRule(_localctx, 24, BSLParser::RulePreproc_logicalOperand);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(281);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BSLParser::PREPROC_LPAREN: {
        enterOuterAlt(_localctx, 1);
        setState(270);
        match(BSLParser::PREPROC_LPAREN);
        setState(272);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
        case 1: {
          setState(271);
          match(BSLParser::PREPROC_NOT_KEYWORD);
          break;
        }

        }
        setState(274);
        preproc_logicalOperand();
        setState(275);
        match(BSLParser::PREPROC_RPAREN);
        break;
      }

      case BSLParser::PREPROC_NOT_KEYWORD:
      case BSLParser::PREPROC_MOBILEAPPCLIENT_SYMBOL:
      case BSLParser::PREPROC_MOBILEAPPSERVER_SYMBOL:
      case BSLParser::PREPROC_MOBILECLIENT_SYMBOL:
      case BSLParser::PREPROC_THICKCLIENTORDINARYAPPLICATION_SYMBOL:
      case BSLParser::PREPROC_THICKCLIENTMANAGEDAPPLICATION_SYMBOL:
      case BSLParser::PREPROC_EXTERNALCONNECTION_SYMBOL:
      case BSLParser::PREPROC_THINCLIENT_SYMBOL:
      case BSLParser::PREPROC_WEBCLIENT_SYMBOL:
      case BSLParser::PREPROC_ATCLIENT_SYMBOL:
      case BSLParser::PREPROC_CLIENT_SYMBOL:
      case BSLParser::PREPROC_ATSERVER_SYMBOL:
      case BSLParser::PREPROC_SERVER_SYMBOL:
      case BSLParser::PREPROC_LINUX:
      case BSLParser::PREPROC_WINDOWS:
      case BSLParser::PREPROC_MACOS:
      case BSLParser::PREPROC_IDENTIFIER: {
        enterOuterAlt(_localctx, 2);
        setState(278);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == BSLParser::PREPROC_NOT_KEYWORD) {
          setState(277);
          match(BSLParser::PREPROC_NOT_KEYWORD);
        }
        setState(280);
        preproc_symbol();
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

//----------------- Preproc_logicalExpressionContext ------------------------------------------------------------------

BSLParser::Preproc_logicalExpressionContext::Preproc_logicalExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

std::vector<BSLParser::Preproc_logicalOperandContext *> BSLParser::Preproc_logicalExpressionContext::preproc_logicalOperand() {
  return getRuleContexts<BSLParser::Preproc_logicalOperandContext>();
}

BSLParser::Preproc_logicalOperandContext* BSLParser::Preproc_logicalExpressionContext::preproc_logicalOperand(size_t i) {
  return getRuleContext<BSLParser::Preproc_logicalOperandContext>(i);
}

std::vector<BSLParser::Preproc_boolOperationContext *> BSLParser::Preproc_logicalExpressionContext::preproc_boolOperation() {
  return getRuleContexts<BSLParser::Preproc_boolOperationContext>();
}

BSLParser::Preproc_boolOperationContext* BSLParser::Preproc_logicalExpressionContext::preproc_boolOperation(size_t i) {
  return getRuleContext<BSLParser::Preproc_boolOperationContext>(i);
}


size_t BSLParser::Preproc_logicalExpressionContext::getRuleIndex() const {
  return BSLParser::RulePreproc_logicalExpression;
}

void BSLParser::Preproc_logicalExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPreproc_logicalExpression(this);
}

void BSLParser::Preproc_logicalExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPreproc_logicalExpression(this);
}

BSLParser::Preproc_logicalExpressionContext* BSLParser::preproc_logicalExpression() {
  Preproc_logicalExpressionContext *_localctx = _tracker.createInstance<Preproc_logicalExpressionContext>(_ctx, getState());
  enterRule(_localctx, 26, BSLParser::RulePreproc_logicalExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(283);
    preproc_logicalOperand();
    setState(289);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BSLParser::PREPROC_OR_KEYWORD

    || _la == BSLParser::PREPROC_AND_KEYWORD) {
      setState(284);
      preproc_boolOperation();
      setState(285);
      preproc_logicalOperand();
      setState(291);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Preproc_symbolContext ------------------------------------------------------------------

BSLParser::Preproc_symbolContext::Preproc_symbolContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BSLParser::Preproc_symbolContext::PREPROC_CLIENT_SYMBOL() {
  return getToken(BSLParser::PREPROC_CLIENT_SYMBOL, 0);
}

tree::TerminalNode* BSLParser::Preproc_symbolContext::PREPROC_ATCLIENT_SYMBOL() {
  return getToken(BSLParser::PREPROC_ATCLIENT_SYMBOL, 0);
}

tree::TerminalNode* BSLParser::Preproc_symbolContext::PREPROC_SERVER_SYMBOL() {
  return getToken(BSLParser::PREPROC_SERVER_SYMBOL, 0);
}

tree::TerminalNode* BSLParser::Preproc_symbolContext::PREPROC_ATSERVER_SYMBOL() {
  return getToken(BSLParser::PREPROC_ATSERVER_SYMBOL, 0);
}

tree::TerminalNode* BSLParser::Preproc_symbolContext::PREPROC_MOBILEAPPCLIENT_SYMBOL() {
  return getToken(BSLParser::PREPROC_MOBILEAPPCLIENT_SYMBOL, 0);
}

tree::TerminalNode* BSLParser::Preproc_symbolContext::PREPROC_MOBILEAPPSERVER_SYMBOL() {
  return getToken(BSLParser::PREPROC_MOBILEAPPSERVER_SYMBOL, 0);
}

tree::TerminalNode* BSLParser::Preproc_symbolContext::PREPROC_MOBILECLIENT_SYMBOL() {
  return getToken(BSLParser::PREPROC_MOBILECLIENT_SYMBOL, 0);
}

tree::TerminalNode* BSLParser::Preproc_symbolContext::PREPROC_THICKCLIENTORDINARYAPPLICATION_SYMBOL() {
  return getToken(BSLParser::PREPROC_THICKCLIENTORDINARYAPPLICATION_SYMBOL, 0);
}

tree::TerminalNode* BSLParser::Preproc_symbolContext::PREPROC_THICKCLIENTMANAGEDAPPLICATION_SYMBOL() {
  return getToken(BSLParser::PREPROC_THICKCLIENTMANAGEDAPPLICATION_SYMBOL, 0);
}

tree::TerminalNode* BSLParser::Preproc_symbolContext::PREPROC_EXTERNALCONNECTION_SYMBOL() {
  return getToken(BSLParser::PREPROC_EXTERNALCONNECTION_SYMBOL, 0);
}

tree::TerminalNode* BSLParser::Preproc_symbolContext::PREPROC_THINCLIENT_SYMBOL() {
  return getToken(BSLParser::PREPROC_THINCLIENT_SYMBOL, 0);
}

tree::TerminalNode* BSLParser::Preproc_symbolContext::PREPROC_WEBCLIENT_SYMBOL() {
  return getToken(BSLParser::PREPROC_WEBCLIENT_SYMBOL, 0);
}

tree::TerminalNode* BSLParser::Preproc_symbolContext::PREPROC_LINUX() {
  return getToken(BSLParser::PREPROC_LINUX, 0);
}

tree::TerminalNode* BSLParser::Preproc_symbolContext::PREPROC_WINDOWS() {
  return getToken(BSLParser::PREPROC_WINDOWS, 0);
}

tree::TerminalNode* BSLParser::Preproc_symbolContext::PREPROC_MACOS() {
  return getToken(BSLParser::PREPROC_MACOS, 0);
}

BSLParser::Preproc_unknownSymbolContext* BSLParser::Preproc_symbolContext::preproc_unknownSymbol() {
  return getRuleContext<BSLParser::Preproc_unknownSymbolContext>(0);
}


size_t BSLParser::Preproc_symbolContext::getRuleIndex() const {
  return BSLParser::RulePreproc_symbol;
}

void BSLParser::Preproc_symbolContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPreproc_symbol(this);
}

void BSLParser::Preproc_symbolContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPreproc_symbol(this);
}

BSLParser::Preproc_symbolContext* BSLParser::preproc_symbol() {
  Preproc_symbolContext *_localctx = _tracker.createInstance<Preproc_symbolContext>(_ctx, getState());
  enterRule(_localctx, 28, BSLParser::RulePreproc_symbol);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(308);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BSLParser::PREPROC_CLIENT_SYMBOL: {
        enterOuterAlt(_localctx, 1);
        setState(292);
        match(BSLParser::PREPROC_CLIENT_SYMBOL);
        break;
      }

      case BSLParser::PREPROC_ATCLIENT_SYMBOL: {
        enterOuterAlt(_localctx, 2);
        setState(293);
        match(BSLParser::PREPROC_ATCLIENT_SYMBOL);
        break;
      }

      case BSLParser::PREPROC_SERVER_SYMBOL: {
        enterOuterAlt(_localctx, 3);
        setState(294);
        match(BSLParser::PREPROC_SERVER_SYMBOL);
        break;
      }

      case BSLParser::PREPROC_ATSERVER_SYMBOL: {
        enterOuterAlt(_localctx, 4);
        setState(295);
        match(BSLParser::PREPROC_ATSERVER_SYMBOL);
        break;
      }

      case BSLParser::PREPROC_MOBILEAPPCLIENT_SYMBOL: {
        enterOuterAlt(_localctx, 5);
        setState(296);
        match(BSLParser::PREPROC_MOBILEAPPCLIENT_SYMBOL);
        break;
      }

      case BSLParser::PREPROC_MOBILEAPPSERVER_SYMBOL: {
        enterOuterAlt(_localctx, 6);
        setState(297);
        match(BSLParser::PREPROC_MOBILEAPPSERVER_SYMBOL);
        break;
      }

      case BSLParser::PREPROC_MOBILECLIENT_SYMBOL: {
        enterOuterAlt(_localctx, 7);
        setState(298);
        match(BSLParser::PREPROC_MOBILECLIENT_SYMBOL);
        break;
      }

      case BSLParser::PREPROC_THICKCLIENTORDINARYAPPLICATION_SYMBOL: {
        enterOuterAlt(_localctx, 8);
        setState(299);
        match(BSLParser::PREPROC_THICKCLIENTORDINARYAPPLICATION_SYMBOL);
        break;
      }

      case BSLParser::PREPROC_THICKCLIENTMANAGEDAPPLICATION_SYMBOL: {
        enterOuterAlt(_localctx, 9);
        setState(300);
        match(BSLParser::PREPROC_THICKCLIENTMANAGEDAPPLICATION_SYMBOL);
        break;
      }

      case BSLParser::PREPROC_EXTERNALCONNECTION_SYMBOL: {
        enterOuterAlt(_localctx, 10);
        setState(301);
        match(BSLParser::PREPROC_EXTERNALCONNECTION_SYMBOL);
        break;
      }

      case BSLParser::PREPROC_THINCLIENT_SYMBOL: {
        enterOuterAlt(_localctx, 11);
        setState(302);
        match(BSLParser::PREPROC_THINCLIENT_SYMBOL);
        break;
      }

      case BSLParser::PREPROC_WEBCLIENT_SYMBOL: {
        enterOuterAlt(_localctx, 12);
        setState(303);
        match(BSLParser::PREPROC_WEBCLIENT_SYMBOL);
        break;
      }

      case BSLParser::PREPROC_LINUX: {
        enterOuterAlt(_localctx, 13);
        setState(304);
        match(BSLParser::PREPROC_LINUX);
        break;
      }

      case BSLParser::PREPROC_WINDOWS: {
        enterOuterAlt(_localctx, 14);
        setState(305);
        match(BSLParser::PREPROC_WINDOWS);
        break;
      }

      case BSLParser::PREPROC_MACOS: {
        enterOuterAlt(_localctx, 15);
        setState(306);
        match(BSLParser::PREPROC_MACOS);
        break;
      }

      case BSLParser::PREPROC_IDENTIFIER: {
        enterOuterAlt(_localctx, 16);
        setState(307);
        preproc_unknownSymbol();
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

//----------------- Preproc_unknownSymbolContext ------------------------------------------------------------------

BSLParser::Preproc_unknownSymbolContext::Preproc_unknownSymbolContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BSLParser::Preproc_unknownSymbolContext::PREPROC_IDENTIFIER() {
  return getToken(BSLParser::PREPROC_IDENTIFIER, 0);
}


size_t BSLParser::Preproc_unknownSymbolContext::getRuleIndex() const {
  return BSLParser::RulePreproc_unknownSymbol;
}

void BSLParser::Preproc_unknownSymbolContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPreproc_unknownSymbol(this);
}

void BSLParser::Preproc_unknownSymbolContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPreproc_unknownSymbol(this);
}

BSLParser::Preproc_unknownSymbolContext* BSLParser::preproc_unknownSymbol() {
  Preproc_unknownSymbolContext *_localctx = _tracker.createInstance<Preproc_unknownSymbolContext>(_ctx, getState());
  enterRule(_localctx, 30, BSLParser::RulePreproc_unknownSymbol);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(310);
    match(BSLParser::PREPROC_IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Preproc_boolOperationContext ------------------------------------------------------------------

BSLParser::Preproc_boolOperationContext::Preproc_boolOperationContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BSLParser::Preproc_boolOperationContext::PREPROC_OR_KEYWORD() {
  return getToken(BSLParser::PREPROC_OR_KEYWORD, 0);
}

tree::TerminalNode* BSLParser::Preproc_boolOperationContext::PREPROC_AND_KEYWORD() {
  return getToken(BSLParser::PREPROC_AND_KEYWORD, 0);
}


size_t BSLParser::Preproc_boolOperationContext::getRuleIndex() const {
  return BSLParser::RulePreproc_boolOperation;
}

void BSLParser::Preproc_boolOperationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPreproc_boolOperation(this);
}

void BSLParser::Preproc_boolOperationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPreproc_boolOperation(this);
}

BSLParser::Preproc_boolOperationContext* BSLParser::preproc_boolOperation() {
  Preproc_boolOperationContext *_localctx = _tracker.createInstance<Preproc_boolOperationContext>(_ctx, getState());
  enterRule(_localctx, 32, BSLParser::RulePreproc_boolOperation);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(312);
    _la = _input->LA(1);
    if (!(_la == BSLParser::PREPROC_OR_KEYWORD

    || _la == BSLParser::PREPROC_AND_KEYWORD)) {
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

//----------------- PreprocessorContext ------------------------------------------------------------------

BSLParser::PreprocessorContext::PreprocessorContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BSLParser::PreprocessorContext::HASH() {
  return getToken(BSLParser::HASH, 0);
}

BSLParser::RegionStartContext* BSLParser::PreprocessorContext::regionStart() {
  return getRuleContext<BSLParser::RegionStartContext>(0);
}

BSLParser::RegionEndContext* BSLParser::PreprocessorContext::regionEnd() {
  return getRuleContext<BSLParser::RegionEndContext>(0);
}

BSLParser::Preproc_ifContext* BSLParser::PreprocessorContext::preproc_if() {
  return getRuleContext<BSLParser::Preproc_ifContext>(0);
}

BSLParser::Preproc_elsifContext* BSLParser::PreprocessorContext::preproc_elsif() {
  return getRuleContext<BSLParser::Preproc_elsifContext>(0);
}

BSLParser::Preproc_elseContext* BSLParser::PreprocessorContext::preproc_else() {
  return getRuleContext<BSLParser::Preproc_elseContext>(0);
}

BSLParser::Preproc_endifContext* BSLParser::PreprocessorContext::preproc_endif() {
  return getRuleContext<BSLParser::Preproc_endifContext>(0);
}

BSLParser::UseContext* BSLParser::PreprocessorContext::use() {
  return getRuleContext<BSLParser::UseContext>(0);
}


size_t BSLParser::PreprocessorContext::getRuleIndex() const {
  return BSLParser::RulePreprocessor;
}

void BSLParser::PreprocessorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPreprocessor(this);
}

void BSLParser::PreprocessorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPreprocessor(this);
}

BSLParser::PreprocessorContext* BSLParser::preprocessor() {
  PreprocessorContext *_localctx = _tracker.createInstance<PreprocessorContext>(_ctx, getState());
  enterRule(_localctx, 34, BSLParser::RulePreprocessor);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(314);
    match(BSLParser::HASH);
    setState(322);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BSLParser::PREPROC_REGION: {
        setState(315);
        regionStart();
        break;
      }

      case BSLParser::PREPROC_END_REGION: {
        setState(316);
        regionEnd();
        break;
      }

      case BSLParser::PREPROC_IF_KEYWORD: {
        setState(317);
        preproc_if();
        break;
      }

      case BSLParser::PREPROC_ELSIF_KEYWORD: {
        setState(318);
        preproc_elsif();
        break;
      }

      case BSLParser::PREPROC_ELSE_KEYWORD: {
        setState(319);
        preproc_else();
        break;
      }

      case BSLParser::PREPROC_ENDIF_KEYWORD: {
        setState(320);
        preproc_endif();
        break;
      }

      case BSLParser::PREPROC_USE_KEYWORD: {
        setState(321);
        use();
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

//----------------- CompilerDirectiveSymbolContext ------------------------------------------------------------------

BSLParser::CompilerDirectiveSymbolContext::CompilerDirectiveSymbolContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BSLParser::CompilerDirectiveSymbolContext::ANNOTATION_ATSERVERNOCONTEXT_SYMBOL() {
  return getToken(BSLParser::ANNOTATION_ATSERVERNOCONTEXT_SYMBOL, 0);
}

tree::TerminalNode* BSLParser::CompilerDirectiveSymbolContext::ANNOTATION_ATCLIENTATSERVERNOCONTEXT_SYMBOL() {
  return getToken(BSLParser::ANNOTATION_ATCLIENTATSERVERNOCONTEXT_SYMBOL, 0);
}

tree::TerminalNode* BSLParser::CompilerDirectiveSymbolContext::ANNOTATION_ATCLIENTATSERVER_SYMBOL() {
  return getToken(BSLParser::ANNOTATION_ATCLIENTATSERVER_SYMBOL, 0);
}

tree::TerminalNode* BSLParser::CompilerDirectiveSymbolContext::ANNOTATION_ATCLIENT_SYMBOL() {
  return getToken(BSLParser::ANNOTATION_ATCLIENT_SYMBOL, 0);
}

tree::TerminalNode* BSLParser::CompilerDirectiveSymbolContext::ANNOTATION_ATSERVER_SYMBOL() {
  return getToken(BSLParser::ANNOTATION_ATSERVER_SYMBOL, 0);
}


size_t BSLParser::CompilerDirectiveSymbolContext::getRuleIndex() const {
  return BSLParser::RuleCompilerDirectiveSymbol;
}

void BSLParser::CompilerDirectiveSymbolContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompilerDirectiveSymbol(this);
}

void BSLParser::CompilerDirectiveSymbolContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompilerDirectiveSymbol(this);
}

BSLParser::CompilerDirectiveSymbolContext* BSLParser::compilerDirectiveSymbol() {
  CompilerDirectiveSymbolContext *_localctx = _tracker.createInstance<CompilerDirectiveSymbolContext>(_ctx, getState());
  enterRule(_localctx, 36, BSLParser::RuleCompilerDirectiveSymbol);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(324);
    _la = _input->LA(1);
    if (!(((((_la - 112) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 112)) & ((1ULL << (BSLParser::ANNOTATION_ATSERVERNOCONTEXT_SYMBOL - 112))
      | (1ULL << (BSLParser::ANNOTATION_ATCLIENTATSERVERNOCONTEXT_SYMBOL - 112))
      | (1ULL << (BSLParser::ANNOTATION_ATCLIENTATSERVER_SYMBOL - 112))
      | (1ULL << (BSLParser::ANNOTATION_ATCLIENT_SYMBOL - 112))
      | (1ULL << (BSLParser::ANNOTATION_ATSERVER_SYMBOL - 112)))) != 0))) {
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

//----------------- CompilerDirectiveContext ------------------------------------------------------------------

BSLParser::CompilerDirectiveContext::CompilerDirectiveContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BSLParser::CompilerDirectiveContext::AMPERSAND() {
  return getToken(BSLParser::AMPERSAND, 0);
}

BSLParser::CompilerDirectiveSymbolContext* BSLParser::CompilerDirectiveContext::compilerDirectiveSymbol() {
  return getRuleContext<BSLParser::CompilerDirectiveSymbolContext>(0);
}


size_t BSLParser::CompilerDirectiveContext::getRuleIndex() const {
  return BSLParser::RuleCompilerDirective;
}

void BSLParser::CompilerDirectiveContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompilerDirective(this);
}

void BSLParser::CompilerDirectiveContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompilerDirective(this);
}

BSLParser::CompilerDirectiveContext* BSLParser::compilerDirective() {
  CompilerDirectiveContext *_localctx = _tracker.createInstance<CompilerDirectiveContext>(_ctx, getState());
  enterRule(_localctx, 38, BSLParser::RuleCompilerDirective);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(326);
    match(BSLParser::AMPERSAND);
    setState(327);
    compilerDirectiveSymbol();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AnnotationNameContext ------------------------------------------------------------------

BSLParser::AnnotationNameContext::AnnotationNameContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BSLParser::AnnotationNameContext::ANNOTATION_CUSTOM_SYMBOL() {
  return getToken(BSLParser::ANNOTATION_CUSTOM_SYMBOL, 0);
}

tree::TerminalNode* BSLParser::AnnotationNameContext::ANNOTATION_BEFORE_SYMBOL() {
  return getToken(BSLParser::ANNOTATION_BEFORE_SYMBOL, 0);
}

tree::TerminalNode* BSLParser::AnnotationNameContext::ANNOTATION_AFTER_SYMBOL() {
  return getToken(BSLParser::ANNOTATION_AFTER_SYMBOL, 0);
}

tree::TerminalNode* BSLParser::AnnotationNameContext::ANNOTATION_AROUND_SYMBOL() {
  return getToken(BSLParser::ANNOTATION_AROUND_SYMBOL, 0);
}

tree::TerminalNode* BSLParser::AnnotationNameContext::ANNOTATION_CHANGEANDVALIDATE_SYMBOL() {
  return getToken(BSLParser::ANNOTATION_CHANGEANDVALIDATE_SYMBOL, 0);
}


size_t BSLParser::AnnotationNameContext::getRuleIndex() const {
  return BSLParser::RuleAnnotationName;
}

void BSLParser::AnnotationNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnnotationName(this);
}

void BSLParser::AnnotationNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnnotationName(this);
}

BSLParser::AnnotationNameContext* BSLParser::annotationName() {
  AnnotationNameContext *_localctx = _tracker.createInstance<AnnotationNameContext>(_ctx, getState());
  enterRule(_localctx, 40, BSLParser::RuleAnnotationName);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(329);
    _la = _input->LA(1);
    if (!(((((_la - 117) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 117)) & ((1ULL << (BSLParser::ANNOTATION_BEFORE_SYMBOL - 117))
      | (1ULL << (BSLParser::ANNOTATION_AFTER_SYMBOL - 117))
      | (1ULL << (BSLParser::ANNOTATION_AROUND_SYMBOL - 117))
      | (1ULL << (BSLParser::ANNOTATION_CHANGEANDVALIDATE_SYMBOL - 117))
      | (1ULL << (BSLParser::ANNOTATION_CUSTOM_SYMBOL - 117)))) != 0))) {
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

//----------------- AnnotationParamNameContext ------------------------------------------------------------------

BSLParser::AnnotationParamNameContext::AnnotationParamNameContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BSLParser::AnnotationParamNameContext::IDENTIFIER() {
  return getToken(BSLParser::IDENTIFIER, 0);
}


size_t BSLParser::AnnotationParamNameContext::getRuleIndex() const {
  return BSLParser::RuleAnnotationParamName;
}

void BSLParser::AnnotationParamNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnnotationParamName(this);
}

void BSLParser::AnnotationParamNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnnotationParamName(this);
}

BSLParser::AnnotationParamNameContext* BSLParser::annotationParamName() {
  AnnotationParamNameContext *_localctx = _tracker.createInstance<AnnotationParamNameContext>(_ctx, getState());
  enterRule(_localctx, 42, BSLParser::RuleAnnotationParamName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(331);
    match(BSLParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AnnotationContext ------------------------------------------------------------------

BSLParser::AnnotationContext::AnnotationContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BSLParser::AnnotationContext::AMPERSAND() {
  return getToken(BSLParser::AMPERSAND, 0);
}

BSLParser::AnnotationNameContext* BSLParser::AnnotationContext::annotationName() {
  return getRuleContext<BSLParser::AnnotationNameContext>(0);
}

BSLParser::AnnotationParamsContext* BSLParser::AnnotationContext::annotationParams() {
  return getRuleContext<BSLParser::AnnotationParamsContext>(0);
}


size_t BSLParser::AnnotationContext::getRuleIndex() const {
  return BSLParser::RuleAnnotation;
}

void BSLParser::AnnotationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnnotation(this);
}

void BSLParser::AnnotationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnnotation(this);
}

BSLParser::AnnotationContext* BSLParser::annotation() {
  AnnotationContext *_localctx = _tracker.createInstance<AnnotationContext>(_ctx, getState());
  enterRule(_localctx, 44, BSLParser::RuleAnnotation);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(333);
    match(BSLParser::AMPERSAND);
    setState(334);
    annotationName();
    setState(336);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BSLParser::LPAREN) {
      setState(335);
      annotationParams();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AnnotationParamsContext ------------------------------------------------------------------

BSLParser::AnnotationParamsContext::AnnotationParamsContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BSLParser::AnnotationParamsContext::LPAREN() {
  return getToken(BSLParser::LPAREN, 0);
}

tree::TerminalNode* BSLParser::AnnotationParamsContext::RPAREN() {
  return getToken(BSLParser::RPAREN, 0);
}

std::vector<BSLParser::AnnotationParamContext *> BSLParser::AnnotationParamsContext::annotationParam() {
  return getRuleContexts<BSLParser::AnnotationParamContext>();
}

BSLParser::AnnotationParamContext* BSLParser::AnnotationParamsContext::annotationParam(size_t i) {
  return getRuleContext<BSLParser::AnnotationParamContext>(i);
}

std::vector<tree::TerminalNode *> BSLParser::AnnotationParamsContext::COMMA() {
  return getTokens(BSLParser::COMMA);
}

tree::TerminalNode* BSLParser::AnnotationParamsContext::COMMA(size_t i) {
  return getToken(BSLParser::COMMA, i);
}


size_t BSLParser::AnnotationParamsContext::getRuleIndex() const {
  return BSLParser::RuleAnnotationParams;
}

void BSLParser::AnnotationParamsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnnotationParams(this);
}

void BSLParser::AnnotationParamsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnnotationParams(this);
}

BSLParser::AnnotationParamsContext* BSLParser::annotationParams() {
  AnnotationParamsContext *_localctx = _tracker.createInstance<AnnotationParamsContext>(_ctx, getState());
  enterRule(_localctx, 46, BSLParser::RuleAnnotationParams);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(338);
    match(BSLParser::LPAREN);
    setState(347);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << BSLParser::PLUS)
      | (1ULL << BSLParser::MINUS)
      | (1ULL << BSLParser::TRUE)
      | (1ULL << BSLParser::FALSE)
      | (1ULL << BSLParser::UNDEFINED)
      | (1ULL << BSLParser::IS_NULL)
      | (1ULL << BSLParser::DECIMAL)
      | (1ULL << BSLParser::DATETIME)
      | (1ULL << BSLParser::FLOAT)
      | (1ULL << BSLParser::STRING)
      | (1ULL << BSLParser::STRINGSTART))) != 0) || _la == BSLParser::IDENTIFIER) {
      setState(339);
      annotationParam();
      setState(344);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == BSLParser::COMMA) {
        setState(340);
        match(BSLParser::COMMA);
        setState(341);
        annotationParam();
        setState(346);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(349);
    match(BSLParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AnnotationParamContext ------------------------------------------------------------------

BSLParser::AnnotationParamContext::AnnotationParamContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

BSLParser::AnnotationParamNameContext* BSLParser::AnnotationParamContext::annotationParamName() {
  return getRuleContext<BSLParser::AnnotationParamNameContext>(0);
}

tree::TerminalNode* BSLParser::AnnotationParamContext::ASSIGN() {
  return getToken(BSLParser::ASSIGN, 0);
}

BSLParser::ConstValueContext* BSLParser::AnnotationParamContext::constValue() {
  return getRuleContext<BSLParser::ConstValueContext>(0);
}


size_t BSLParser::AnnotationParamContext::getRuleIndex() const {
  return BSLParser::RuleAnnotationParam;
}

void BSLParser::AnnotationParamContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnnotationParam(this);
}

void BSLParser::AnnotationParamContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnnotationParam(this);
}

BSLParser::AnnotationParamContext* BSLParser::annotationParam() {
  AnnotationParamContext *_localctx = _tracker.createInstance<AnnotationParamContext>(_ctx, getState());
  enterRule(_localctx, 48, BSLParser::RuleAnnotationParam);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(357);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BSLParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(351);
        annotationParamName();
        setState(354);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == BSLParser::ASSIGN) {
          setState(352);
          match(BSLParser::ASSIGN);
          setState(353);
          constValue();
        }
        break;
      }

      case BSLParser::PLUS:
      case BSLParser::MINUS:
      case BSLParser::TRUE:
      case BSLParser::FALSE:
      case BSLParser::UNDEFINED:
      case BSLParser::IS_NULL:
      case BSLParser::DECIMAL:
      case BSLParser::DATETIME:
      case BSLParser::FLOAT:
      case BSLParser::STRING:
      case BSLParser::STRINGSTART: {
        enterOuterAlt(_localctx, 2);
        setState(356);
        constValue();
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

//----------------- Var_nameContext ------------------------------------------------------------------

BSLParser::Var_nameContext::Var_nameContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BSLParser::Var_nameContext::IDENTIFIER() {
  return getToken(BSLParser::IDENTIFIER, 0);
}


size_t BSLParser::Var_nameContext::getRuleIndex() const {
  return BSLParser::RuleVar_name;
}

void BSLParser::Var_nameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVar_name(this);
}

void BSLParser::Var_nameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVar_name(this);
}

BSLParser::Var_nameContext* BSLParser::var_name() {
  Var_nameContext *_localctx = _tracker.createInstance<Var_nameContext>(_ctx, getState());
  enterRule(_localctx, 50, BSLParser::RuleVar_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(359);
    match(BSLParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ModuleVarsContext ------------------------------------------------------------------

BSLParser::ModuleVarsContext::ModuleVarsContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

std::vector<BSLParser::ModuleVarContext *> BSLParser::ModuleVarsContext::moduleVar() {
  return getRuleContexts<BSLParser::ModuleVarContext>();
}

BSLParser::ModuleVarContext* BSLParser::ModuleVarsContext::moduleVar(size_t i) {
  return getRuleContext<BSLParser::ModuleVarContext>(i);
}


size_t BSLParser::ModuleVarsContext::getRuleIndex() const {
  return BSLParser::RuleModuleVars;
}

void BSLParser::ModuleVarsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterModuleVars(this);
}

void BSLParser::ModuleVarsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitModuleVars(this);
}

BSLParser::ModuleVarsContext* BSLParser::moduleVars() {
  ModuleVarsContext *_localctx = _tracker.createInstance<ModuleVarsContext>(_ctx, getState());
  enterRule(_localctx, 52, BSLParser::RuleModuleVars);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(362); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(361);
              moduleVar();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(364); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ModuleVarContext ------------------------------------------------------------------

BSLParser::ModuleVarContext::ModuleVarContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BSLParser::ModuleVarContext::VAR_KEYWORD() {
  return getToken(BSLParser::VAR_KEYWORD, 0);
}

BSLParser::ModuleVarsListContext* BSLParser::ModuleVarContext::moduleVarsList() {
  return getRuleContext<BSLParser::ModuleVarsListContext>(0);
}

std::vector<BSLParser::PreprocessorContext *> BSLParser::ModuleVarContext::preprocessor() {
  return getRuleContexts<BSLParser::PreprocessorContext>();
}

BSLParser::PreprocessorContext* BSLParser::ModuleVarContext::preprocessor(size_t i) {
  return getRuleContext<BSLParser::PreprocessorContext>(i);
}

std::vector<BSLParser::CompilerDirectiveContext *> BSLParser::ModuleVarContext::compilerDirective() {
  return getRuleContexts<BSLParser::CompilerDirectiveContext>();
}

BSLParser::CompilerDirectiveContext* BSLParser::ModuleVarContext::compilerDirective(size_t i) {
  return getRuleContext<BSLParser::CompilerDirectiveContext>(i);
}

std::vector<BSLParser::AnnotationContext *> BSLParser::ModuleVarContext::annotation() {
  return getRuleContexts<BSLParser::AnnotationContext>();
}

BSLParser::AnnotationContext* BSLParser::ModuleVarContext::annotation(size_t i) {
  return getRuleContext<BSLParser::AnnotationContext>(i);
}

tree::TerminalNode* BSLParser::ModuleVarContext::SEMICOLON() {
  return getToken(BSLParser::SEMICOLON, 0);
}


size_t BSLParser::ModuleVarContext::getRuleIndex() const {
  return BSLParser::RuleModuleVar;
}

void BSLParser::ModuleVarContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterModuleVar(this);
}

void BSLParser::ModuleVarContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitModuleVar(this);
}

BSLParser::ModuleVarContext* BSLParser::moduleVar() {
  ModuleVarContext *_localctx = _tracker.createInstance<ModuleVarContext>(_ctx, getState());
  enterRule(_localctx, 54, BSLParser::RuleModuleVar);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(371);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BSLParser::AMPERSAND

    || _la == BSLParser::HASH) {
      setState(369);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
      case 1: {
        setState(366);
        preprocessor();
        break;
      }

      case 2: {
        setState(367);
        compilerDirective();
        break;
      }

      case 3: {
        setState(368);
        annotation();
        break;
      }

      }
      setState(373);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(374);
    match(BSLParser::VAR_KEYWORD);
    setState(375);
    moduleVarsList();
    setState(377);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
    case 1: {
      setState(376);
      match(BSLParser::SEMICOLON);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ModuleVarsListContext ------------------------------------------------------------------

BSLParser::ModuleVarsListContext::ModuleVarsListContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

std::vector<BSLParser::ModuleVarDeclarationContext *> BSLParser::ModuleVarsListContext::moduleVarDeclaration() {
  return getRuleContexts<BSLParser::ModuleVarDeclarationContext>();
}

BSLParser::ModuleVarDeclarationContext* BSLParser::ModuleVarsListContext::moduleVarDeclaration(size_t i) {
  return getRuleContext<BSLParser::ModuleVarDeclarationContext>(i);
}

std::vector<tree::TerminalNode *> BSLParser::ModuleVarsListContext::COMMA() {
  return getTokens(BSLParser::COMMA);
}

tree::TerminalNode* BSLParser::ModuleVarsListContext::COMMA(size_t i) {
  return getToken(BSLParser::COMMA, i);
}


size_t BSLParser::ModuleVarsListContext::getRuleIndex() const {
  return BSLParser::RuleModuleVarsList;
}

void BSLParser::ModuleVarsListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterModuleVarsList(this);
}

void BSLParser::ModuleVarsListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitModuleVarsList(this);
}

BSLParser::ModuleVarsListContext* BSLParser::moduleVarsList() {
  ModuleVarsListContext *_localctx = _tracker.createInstance<ModuleVarsListContext>(_ctx, getState());
  enterRule(_localctx, 56, BSLParser::RuleModuleVarsList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(379);
    moduleVarDeclaration();
    setState(384);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BSLParser::COMMA) {
      setState(380);
      match(BSLParser::COMMA);
      setState(381);
      moduleVarDeclaration();
      setState(386);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ModuleVarDeclarationContext ------------------------------------------------------------------

BSLParser::ModuleVarDeclarationContext::ModuleVarDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

BSLParser::Var_nameContext* BSLParser::ModuleVarDeclarationContext::var_name() {
  return getRuleContext<BSLParser::Var_nameContext>(0);
}

tree::TerminalNode* BSLParser::ModuleVarDeclarationContext::EXPORT_KEYWORD() {
  return getToken(BSLParser::EXPORT_KEYWORD, 0);
}


size_t BSLParser::ModuleVarDeclarationContext::getRuleIndex() const {
  return BSLParser::RuleModuleVarDeclaration;
}

void BSLParser::ModuleVarDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterModuleVarDeclaration(this);
}

void BSLParser::ModuleVarDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitModuleVarDeclaration(this);
}

BSLParser::ModuleVarDeclarationContext* BSLParser::moduleVarDeclaration() {
  ModuleVarDeclarationContext *_localctx = _tracker.createInstance<ModuleVarDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 58, BSLParser::RuleModuleVarDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(387);
    var_name();
    setState(389);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BSLParser::EXPORT_KEYWORD) {
      setState(388);
      match(BSLParser::EXPORT_KEYWORD);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SubVarsContext ------------------------------------------------------------------

BSLParser::SubVarsContext::SubVarsContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

std::vector<BSLParser::SubVarContext *> BSLParser::SubVarsContext::subVar() {
  return getRuleContexts<BSLParser::SubVarContext>();
}

BSLParser::SubVarContext* BSLParser::SubVarsContext::subVar(size_t i) {
  return getRuleContext<BSLParser::SubVarContext>(i);
}


size_t BSLParser::SubVarsContext::getRuleIndex() const {
  return BSLParser::RuleSubVars;
}

void BSLParser::SubVarsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSubVars(this);
}

void BSLParser::SubVarsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSubVars(this);
}

BSLParser::SubVarsContext* BSLParser::subVars() {
  SubVarsContext *_localctx = _tracker.createInstance<SubVarsContext>(_ctx, getState());
  enterRule(_localctx, 60, BSLParser::RuleSubVars);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(392); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(391);
              subVar();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(394); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SubVarContext ------------------------------------------------------------------

BSLParser::SubVarContext::SubVarContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BSLParser::SubVarContext::VAR_KEYWORD() {
  return getToken(BSLParser::VAR_KEYWORD, 0);
}

BSLParser::SubVarsListContext* BSLParser::SubVarContext::subVarsList() {
  return getRuleContext<BSLParser::SubVarsListContext>(0);
}

std::vector<BSLParser::PreprocessorContext *> BSLParser::SubVarContext::preprocessor() {
  return getRuleContexts<BSLParser::PreprocessorContext>();
}

BSLParser::PreprocessorContext* BSLParser::SubVarContext::preprocessor(size_t i) {
  return getRuleContext<BSLParser::PreprocessorContext>(i);
}

std::vector<BSLParser::CompilerDirectiveContext *> BSLParser::SubVarContext::compilerDirective() {
  return getRuleContexts<BSLParser::CompilerDirectiveContext>();
}

BSLParser::CompilerDirectiveContext* BSLParser::SubVarContext::compilerDirective(size_t i) {
  return getRuleContext<BSLParser::CompilerDirectiveContext>(i);
}

std::vector<BSLParser::AnnotationContext *> BSLParser::SubVarContext::annotation() {
  return getRuleContexts<BSLParser::AnnotationContext>();
}

BSLParser::AnnotationContext* BSLParser::SubVarContext::annotation(size_t i) {
  return getRuleContext<BSLParser::AnnotationContext>(i);
}

tree::TerminalNode* BSLParser::SubVarContext::SEMICOLON() {
  return getToken(BSLParser::SEMICOLON, 0);
}


size_t BSLParser::SubVarContext::getRuleIndex() const {
  return BSLParser::RuleSubVar;
}

void BSLParser::SubVarContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSubVar(this);
}

void BSLParser::SubVarContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSubVar(this);
}

BSLParser::SubVarContext* BSLParser::subVar() {
  SubVarContext *_localctx = _tracker.createInstance<SubVarContext>(_ctx, getState());
  enterRule(_localctx, 62, BSLParser::RuleSubVar);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(401);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BSLParser::AMPERSAND

    || _la == BSLParser::HASH) {
      setState(399);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx)) {
      case 1: {
        setState(396);
        preprocessor();
        break;
      }

      case 2: {
        setState(397);
        compilerDirective();
        break;
      }

      case 3: {
        setState(398);
        annotation();
        break;
      }

      }
      setState(403);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(404);
    match(BSLParser::VAR_KEYWORD);
    setState(405);
    subVarsList();
    setState(407);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx)) {
    case 1: {
      setState(406);
      match(BSLParser::SEMICOLON);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SubVarsListContext ------------------------------------------------------------------

BSLParser::SubVarsListContext::SubVarsListContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

std::vector<BSLParser::SubVarDeclarationContext *> BSLParser::SubVarsListContext::subVarDeclaration() {
  return getRuleContexts<BSLParser::SubVarDeclarationContext>();
}

BSLParser::SubVarDeclarationContext* BSLParser::SubVarsListContext::subVarDeclaration(size_t i) {
  return getRuleContext<BSLParser::SubVarDeclarationContext>(i);
}

std::vector<tree::TerminalNode *> BSLParser::SubVarsListContext::COMMA() {
  return getTokens(BSLParser::COMMA);
}

tree::TerminalNode* BSLParser::SubVarsListContext::COMMA(size_t i) {
  return getToken(BSLParser::COMMA, i);
}


size_t BSLParser::SubVarsListContext::getRuleIndex() const {
  return BSLParser::RuleSubVarsList;
}

void BSLParser::SubVarsListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSubVarsList(this);
}

void BSLParser::SubVarsListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSubVarsList(this);
}

BSLParser::SubVarsListContext* BSLParser::subVarsList() {
  SubVarsListContext *_localctx = _tracker.createInstance<SubVarsListContext>(_ctx, getState());
  enterRule(_localctx, 64, BSLParser::RuleSubVarsList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(409);
    subVarDeclaration();
    setState(414);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BSLParser::COMMA) {
      setState(410);
      match(BSLParser::COMMA);
      setState(411);
      subVarDeclaration();
      setState(416);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SubVarDeclarationContext ------------------------------------------------------------------

BSLParser::SubVarDeclarationContext::SubVarDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

BSLParser::Var_nameContext* BSLParser::SubVarDeclarationContext::var_name() {
  return getRuleContext<BSLParser::Var_nameContext>(0);
}


size_t BSLParser::SubVarDeclarationContext::getRuleIndex() const {
  return BSLParser::RuleSubVarDeclaration;
}

void BSLParser::SubVarDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSubVarDeclaration(this);
}

void BSLParser::SubVarDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSubVarDeclaration(this);
}

BSLParser::SubVarDeclarationContext* BSLParser::subVarDeclaration() {
  SubVarDeclarationContext *_localctx = _tracker.createInstance<SubVarDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 66, BSLParser::RuleSubVarDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(417);
    var_name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SubNameContext ------------------------------------------------------------------

BSLParser::SubNameContext::SubNameContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BSLParser::SubNameContext::IDENTIFIER() {
  return getToken(BSLParser::IDENTIFIER, 0);
}


size_t BSLParser::SubNameContext::getRuleIndex() const {
  return BSLParser::RuleSubName;
}

void BSLParser::SubNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSubName(this);
}

void BSLParser::SubNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSubName(this);
}

BSLParser::SubNameContext* BSLParser::subName() {
  SubNameContext *_localctx = _tracker.createInstance<SubNameContext>(_ctx, getState());
  enterRule(_localctx, 68, BSLParser::RuleSubName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(419);
    match(BSLParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SubsContext ------------------------------------------------------------------

BSLParser::SubsContext::SubsContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

std::vector<BSLParser::SubContext *> BSLParser::SubsContext::sub() {
  return getRuleContexts<BSLParser::SubContext>();
}

BSLParser::SubContext* BSLParser::SubsContext::sub(size_t i) {
  return getRuleContext<BSLParser::SubContext>(i);
}


size_t BSLParser::SubsContext::getRuleIndex() const {
  return BSLParser::RuleSubs;
}

void BSLParser::SubsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSubs(this);
}

void BSLParser::SubsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSubs(this);
}

BSLParser::SubsContext* BSLParser::subs() {
  SubsContext *_localctx = _tracker.createInstance<SubsContext>(_ctx, getState());
  enterRule(_localctx, 70, BSLParser::RuleSubs);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(422); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(421);
              sub();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(424); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SubContext ------------------------------------------------------------------

BSLParser::SubContext::SubContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

BSLParser::ProcedureContext* BSLParser::SubContext::procedure() {
  return getRuleContext<BSLParser::ProcedureContext>(0);
}

BSLParser::FunctionContext* BSLParser::SubContext::function() {
  return getRuleContext<BSLParser::FunctionContext>(0);
}


size_t BSLParser::SubContext::getRuleIndex() const {
  return BSLParser::RuleSub;
}

void BSLParser::SubContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSub(this);
}

void BSLParser::SubContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSub(this);
}

BSLParser::SubContext* BSLParser::sub() {
  SubContext *_localctx = _tracker.createInstance<SubContext>(_ctx, getState());
  enterRule(_localctx, 72, BSLParser::RuleSub);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(428);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(426);
      procedure();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(427);
      function();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProcedureContext ------------------------------------------------------------------

BSLParser::ProcedureContext::ProcedureContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

BSLParser::ProcDeclarationContext* BSLParser::ProcedureContext::procDeclaration() {
  return getRuleContext<BSLParser::ProcDeclarationContext>(0);
}

BSLParser::SubCodeBlockContext* BSLParser::ProcedureContext::subCodeBlock() {
  return getRuleContext<BSLParser::SubCodeBlockContext>(0);
}

tree::TerminalNode* BSLParser::ProcedureContext::ENDPROCEDURE_KEYWORD() {
  return getToken(BSLParser::ENDPROCEDURE_KEYWORD, 0);
}


size_t BSLParser::ProcedureContext::getRuleIndex() const {
  return BSLParser::RuleProcedure;
}

void BSLParser::ProcedureContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProcedure(this);
}

void BSLParser::ProcedureContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProcedure(this);
}

BSLParser::ProcedureContext* BSLParser::procedure() {
  ProcedureContext *_localctx = _tracker.createInstance<ProcedureContext>(_ctx, getState());
  enterRule(_localctx, 74, BSLParser::RuleProcedure);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(430);
    procDeclaration();
    setState(431);
    subCodeBlock();
    setState(432);
    match(BSLParser::ENDPROCEDURE_KEYWORD);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionContext ------------------------------------------------------------------

BSLParser::FunctionContext::FunctionContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

BSLParser::FuncDeclarationContext* BSLParser::FunctionContext::funcDeclaration() {
  return getRuleContext<BSLParser::FuncDeclarationContext>(0);
}

BSLParser::SubCodeBlockContext* BSLParser::FunctionContext::subCodeBlock() {
  return getRuleContext<BSLParser::SubCodeBlockContext>(0);
}

tree::TerminalNode* BSLParser::FunctionContext::ENDFUNCTION_KEYWORD() {
  return getToken(BSLParser::ENDFUNCTION_KEYWORD, 0);
}


size_t BSLParser::FunctionContext::getRuleIndex() const {
  return BSLParser::RuleFunction;
}

void BSLParser::FunctionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction(this);
}

void BSLParser::FunctionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction(this);
}

BSLParser::FunctionContext* BSLParser::function() {
  FunctionContext *_localctx = _tracker.createInstance<FunctionContext>(_ctx, getState());
  enterRule(_localctx, 76, BSLParser::RuleFunction);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(434);
    funcDeclaration();
    setState(435);
    subCodeBlock();
    setState(436);
    match(BSLParser::ENDFUNCTION_KEYWORD);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProcDeclarationContext ------------------------------------------------------------------

BSLParser::ProcDeclarationContext::ProcDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BSLParser::ProcDeclarationContext::PROCEDURE_KEYWORD() {
  return getToken(BSLParser::PROCEDURE_KEYWORD, 0);
}

BSLParser::SubNameContext* BSLParser::ProcDeclarationContext::subName() {
  return getRuleContext<BSLParser::SubNameContext>(0);
}

tree::TerminalNode* BSLParser::ProcDeclarationContext::LPAREN() {
  return getToken(BSLParser::LPAREN, 0);
}

tree::TerminalNode* BSLParser::ProcDeclarationContext::RPAREN() {
  return getToken(BSLParser::RPAREN, 0);
}

std::vector<BSLParser::PreprocessorContext *> BSLParser::ProcDeclarationContext::preprocessor() {
  return getRuleContexts<BSLParser::PreprocessorContext>();
}

BSLParser::PreprocessorContext* BSLParser::ProcDeclarationContext::preprocessor(size_t i) {
  return getRuleContext<BSLParser::PreprocessorContext>(i);
}

std::vector<BSLParser::CompilerDirectiveContext *> BSLParser::ProcDeclarationContext::compilerDirective() {
  return getRuleContexts<BSLParser::CompilerDirectiveContext>();
}

BSLParser::CompilerDirectiveContext* BSLParser::ProcDeclarationContext::compilerDirective(size_t i) {
  return getRuleContext<BSLParser::CompilerDirectiveContext>(i);
}

std::vector<BSLParser::AnnotationContext *> BSLParser::ProcDeclarationContext::annotation() {
  return getRuleContexts<BSLParser::AnnotationContext>();
}

BSLParser::AnnotationContext* BSLParser::ProcDeclarationContext::annotation(size_t i) {
  return getRuleContext<BSLParser::AnnotationContext>(i);
}

tree::TerminalNode* BSLParser::ProcDeclarationContext::ASYNC_KEYWORD() {
  return getToken(BSLParser::ASYNC_KEYWORD, 0);
}

BSLParser::ParamListContext* BSLParser::ProcDeclarationContext::paramList() {
  return getRuleContext<BSLParser::ParamListContext>(0);
}

tree::TerminalNode* BSLParser::ProcDeclarationContext::EXPORT_KEYWORD() {
  return getToken(BSLParser::EXPORT_KEYWORD, 0);
}


size_t BSLParser::ProcDeclarationContext::getRuleIndex() const {
  return BSLParser::RuleProcDeclaration;
}

void BSLParser::ProcDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProcDeclaration(this);
}

void BSLParser::ProcDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProcDeclaration(this);
}

BSLParser::ProcDeclarationContext* BSLParser::procDeclaration() {
  ProcDeclarationContext *_localctx = _tracker.createInstance<ProcDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 78, BSLParser::RuleProcDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(443);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BSLParser::AMPERSAND

    || _la == BSLParser::HASH) {
      setState(441);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx)) {
      case 1: {
        setState(438);
        preprocessor();
        break;
      }

      case 2: {
        setState(439);
        compilerDirective();
        break;
      }

      case 3: {
        setState(440);
        annotation();
        break;
      }

      }
      setState(445);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(447);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BSLParser::ASYNC_KEYWORD) {
      setState(446);
      match(BSLParser::ASYNC_KEYWORD);
    }
    setState(449);
    match(BSLParser::PROCEDURE_KEYWORD);
    setState(450);
    subName();
    setState(451);
    match(BSLParser::LPAREN);
    setState(453);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BSLParser::VAL_KEYWORD

    || _la == BSLParser::IDENTIFIER) {
      setState(452);
      paramList();
    }
    setState(455);
    match(BSLParser::RPAREN);
    setState(457);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BSLParser::EXPORT_KEYWORD) {
      setState(456);
      match(BSLParser::EXPORT_KEYWORD);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncDeclarationContext ------------------------------------------------------------------

BSLParser::FuncDeclarationContext::FuncDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BSLParser::FuncDeclarationContext::FUNCTION_KEYWORD() {
  return getToken(BSLParser::FUNCTION_KEYWORD, 0);
}

BSLParser::SubNameContext* BSLParser::FuncDeclarationContext::subName() {
  return getRuleContext<BSLParser::SubNameContext>(0);
}

tree::TerminalNode* BSLParser::FuncDeclarationContext::LPAREN() {
  return getToken(BSLParser::LPAREN, 0);
}

tree::TerminalNode* BSLParser::FuncDeclarationContext::RPAREN() {
  return getToken(BSLParser::RPAREN, 0);
}

std::vector<BSLParser::PreprocessorContext *> BSLParser::FuncDeclarationContext::preprocessor() {
  return getRuleContexts<BSLParser::PreprocessorContext>();
}

BSLParser::PreprocessorContext* BSLParser::FuncDeclarationContext::preprocessor(size_t i) {
  return getRuleContext<BSLParser::PreprocessorContext>(i);
}

std::vector<BSLParser::CompilerDirectiveContext *> BSLParser::FuncDeclarationContext::compilerDirective() {
  return getRuleContexts<BSLParser::CompilerDirectiveContext>();
}

BSLParser::CompilerDirectiveContext* BSLParser::FuncDeclarationContext::compilerDirective(size_t i) {
  return getRuleContext<BSLParser::CompilerDirectiveContext>(i);
}

std::vector<BSLParser::AnnotationContext *> BSLParser::FuncDeclarationContext::annotation() {
  return getRuleContexts<BSLParser::AnnotationContext>();
}

BSLParser::AnnotationContext* BSLParser::FuncDeclarationContext::annotation(size_t i) {
  return getRuleContext<BSLParser::AnnotationContext>(i);
}

tree::TerminalNode* BSLParser::FuncDeclarationContext::ASYNC_KEYWORD() {
  return getToken(BSLParser::ASYNC_KEYWORD, 0);
}

BSLParser::ParamListContext* BSLParser::FuncDeclarationContext::paramList() {
  return getRuleContext<BSLParser::ParamListContext>(0);
}

tree::TerminalNode* BSLParser::FuncDeclarationContext::EXPORT_KEYWORD() {
  return getToken(BSLParser::EXPORT_KEYWORD, 0);
}


size_t BSLParser::FuncDeclarationContext::getRuleIndex() const {
  return BSLParser::RuleFuncDeclaration;
}

void BSLParser::FuncDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncDeclaration(this);
}

void BSLParser::FuncDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncDeclaration(this);
}

BSLParser::FuncDeclarationContext* BSLParser::funcDeclaration() {
  FuncDeclarationContext *_localctx = _tracker.createInstance<FuncDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 80, BSLParser::RuleFuncDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(464);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BSLParser::AMPERSAND

    || _la == BSLParser::HASH) {
      setState(462);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx)) {
      case 1: {
        setState(459);
        preprocessor();
        break;
      }

      case 2: {
        setState(460);
        compilerDirective();
        break;
      }

      case 3: {
        setState(461);
        annotation();
        break;
      }

      }
      setState(466);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(468);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BSLParser::ASYNC_KEYWORD) {
      setState(467);
      match(BSLParser::ASYNC_KEYWORD);
    }
    setState(470);
    match(BSLParser::FUNCTION_KEYWORD);
    setState(471);
    subName();
    setState(472);
    match(BSLParser::LPAREN);
    setState(474);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BSLParser::VAL_KEYWORD

    || _la == BSLParser::IDENTIFIER) {
      setState(473);
      paramList();
    }
    setState(476);
    match(BSLParser::RPAREN);
    setState(478);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BSLParser::EXPORT_KEYWORD) {
      setState(477);
      match(BSLParser::EXPORT_KEYWORD);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SubCodeBlockContext ------------------------------------------------------------------

BSLParser::SubCodeBlockContext::SubCodeBlockContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

BSLParser::CodeBlockContext* BSLParser::SubCodeBlockContext::codeBlock() {
  return getRuleContext<BSLParser::CodeBlockContext>(0);
}

BSLParser::SubVarsContext* BSLParser::SubCodeBlockContext::subVars() {
  return getRuleContext<BSLParser::SubVarsContext>(0);
}


size_t BSLParser::SubCodeBlockContext::getRuleIndex() const {
  return BSLParser::RuleSubCodeBlock;
}

void BSLParser::SubCodeBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSubCodeBlock(this);
}

void BSLParser::SubCodeBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSubCodeBlock(this);
}

BSLParser::SubCodeBlockContext* BSLParser::subCodeBlock() {
  SubCodeBlockContext *_localctx = _tracker.createInstance<SubCodeBlockContext>(_ctx, getState());
  enterRule(_localctx, 82, BSLParser::RuleSubCodeBlock);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(481);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 42, _ctx)) {
    case 1: {
      setState(480);
      subVars();
      break;
    }

    }
    setState(483);
    codeBlock();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ContinueStatementContext ------------------------------------------------------------------

BSLParser::ContinueStatementContext::ContinueStatementContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BSLParser::ContinueStatementContext::CONTINUE_KEYWORD() {
  return getToken(BSLParser::CONTINUE_KEYWORD, 0);
}


size_t BSLParser::ContinueStatementContext::getRuleIndex() const {
  return BSLParser::RuleContinueStatement;
}

void BSLParser::ContinueStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterContinueStatement(this);
}

void BSLParser::ContinueStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitContinueStatement(this);
}

BSLParser::ContinueStatementContext* BSLParser::continueStatement() {
  ContinueStatementContext *_localctx = _tracker.createInstance<ContinueStatementContext>(_ctx, getState());
  enterRule(_localctx, 84, BSLParser::RuleContinueStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(485);
    match(BSLParser::CONTINUE_KEYWORD);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BreakStatementContext ------------------------------------------------------------------

BSLParser::BreakStatementContext::BreakStatementContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BSLParser::BreakStatementContext::BREAK_KEYWORD() {
  return getToken(BSLParser::BREAK_KEYWORD, 0);
}


size_t BSLParser::BreakStatementContext::getRuleIndex() const {
  return BSLParser::RuleBreakStatement;
}

void BSLParser::BreakStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBreakStatement(this);
}

void BSLParser::BreakStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBreakStatement(this);
}

BSLParser::BreakStatementContext* BSLParser::breakStatement() {
  BreakStatementContext *_localctx = _tracker.createInstance<BreakStatementContext>(_ctx, getState());
  enterRule(_localctx, 86, BSLParser::RuleBreakStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(487);
    match(BSLParser::BREAK_KEYWORD);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RaiseStatementContext ------------------------------------------------------------------

BSLParser::RaiseStatementContext::RaiseStatementContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BSLParser::RaiseStatementContext::RAISE_KEYWORD() {
  return getToken(BSLParser::RAISE_KEYWORD, 0);
}

BSLParser::ExpressionContext* BSLParser::RaiseStatementContext::expression() {
  return getRuleContext<BSLParser::ExpressionContext>(0);
}


size_t BSLParser::RaiseStatementContext::getRuleIndex() const {
  return BSLParser::RuleRaiseStatement;
}

void BSLParser::RaiseStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRaiseStatement(this);
}

void BSLParser::RaiseStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRaiseStatement(this);
}

BSLParser::RaiseStatementContext* BSLParser::raiseStatement() {
  RaiseStatementContext *_localctx = _tracker.createInstance<RaiseStatementContext>(_ctx, getState());
  enterRule(_localctx, 88, BSLParser::RuleRaiseStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(489);
    match(BSLParser::RAISE_KEYWORD);
    setState(491);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 43, _ctx)) {
    case 1: {
      setState(490);
      expression();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfStatementContext ------------------------------------------------------------------

BSLParser::IfStatementContext::IfStatementContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

BSLParser::IfBranchContext* BSLParser::IfStatementContext::ifBranch() {
  return getRuleContext<BSLParser::IfBranchContext>(0);
}

tree::TerminalNode* BSLParser::IfStatementContext::ENDIF_KEYWORD() {
  return getToken(BSLParser::ENDIF_KEYWORD, 0);
}

std::vector<BSLParser::ElsifBranchContext *> BSLParser::IfStatementContext::elsifBranch() {
  return getRuleContexts<BSLParser::ElsifBranchContext>();
}

BSLParser::ElsifBranchContext* BSLParser::IfStatementContext::elsifBranch(size_t i) {
  return getRuleContext<BSLParser::ElsifBranchContext>(i);
}

BSLParser::ElseBranchContext* BSLParser::IfStatementContext::elseBranch() {
  return getRuleContext<BSLParser::ElseBranchContext>(0);
}


size_t BSLParser::IfStatementContext::getRuleIndex() const {
  return BSLParser::RuleIfStatement;
}

void BSLParser::IfStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfStatement(this);
}

void BSLParser::IfStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfStatement(this);
}

BSLParser::IfStatementContext* BSLParser::ifStatement() {
  IfStatementContext *_localctx = _tracker.createInstance<IfStatementContext>(_ctx, getState());
  enterRule(_localctx, 90, BSLParser::RuleIfStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(493);
    ifBranch();
    setState(497);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BSLParser::ELSIF_KEYWORD) {
      setState(494);
      elsifBranch();
      setState(499);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(501);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BSLParser::ELSE_KEYWORD) {
      setState(500);
      elseBranch();
    }
    setState(503);
    match(BSLParser::ENDIF_KEYWORD);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfBranchContext ------------------------------------------------------------------

BSLParser::IfBranchContext::IfBranchContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BSLParser::IfBranchContext::IF_KEYWORD() {
  return getToken(BSLParser::IF_KEYWORD, 0);
}

BSLParser::ExpressionContext* BSLParser::IfBranchContext::expression() {
  return getRuleContext<BSLParser::ExpressionContext>(0);
}

tree::TerminalNode* BSLParser::IfBranchContext::THEN_KEYWORD() {
  return getToken(BSLParser::THEN_KEYWORD, 0);
}

BSLParser::CodeBlockContext* BSLParser::IfBranchContext::codeBlock() {
  return getRuleContext<BSLParser::CodeBlockContext>(0);
}


size_t BSLParser::IfBranchContext::getRuleIndex() const {
  return BSLParser::RuleIfBranch;
}

void BSLParser::IfBranchContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfBranch(this);
}

void BSLParser::IfBranchContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfBranch(this);
}

BSLParser::IfBranchContext* BSLParser::ifBranch() {
  IfBranchContext *_localctx = _tracker.createInstance<IfBranchContext>(_ctx, getState());
  enterRule(_localctx, 92, BSLParser::RuleIfBranch);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(505);
    match(BSLParser::IF_KEYWORD);
    setState(506);
    expression();
    setState(507);
    match(BSLParser::THEN_KEYWORD);
    setState(508);
    codeBlock();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElsifBranchContext ------------------------------------------------------------------

BSLParser::ElsifBranchContext::ElsifBranchContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BSLParser::ElsifBranchContext::ELSIF_KEYWORD() {
  return getToken(BSLParser::ELSIF_KEYWORD, 0);
}

BSLParser::ExpressionContext* BSLParser::ElsifBranchContext::expression() {
  return getRuleContext<BSLParser::ExpressionContext>(0);
}

tree::TerminalNode* BSLParser::ElsifBranchContext::THEN_KEYWORD() {
  return getToken(BSLParser::THEN_KEYWORD, 0);
}

BSLParser::CodeBlockContext* BSLParser::ElsifBranchContext::codeBlock() {
  return getRuleContext<BSLParser::CodeBlockContext>(0);
}


size_t BSLParser::ElsifBranchContext::getRuleIndex() const {
  return BSLParser::RuleElsifBranch;
}

void BSLParser::ElsifBranchContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElsifBranch(this);
}

void BSLParser::ElsifBranchContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElsifBranch(this);
}

BSLParser::ElsifBranchContext* BSLParser::elsifBranch() {
  ElsifBranchContext *_localctx = _tracker.createInstance<ElsifBranchContext>(_ctx, getState());
  enterRule(_localctx, 94, BSLParser::RuleElsifBranch);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(510);
    match(BSLParser::ELSIF_KEYWORD);
    setState(511);
    expression();
    setState(512);
    match(BSLParser::THEN_KEYWORD);
    setState(513);
    codeBlock();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElseBranchContext ------------------------------------------------------------------

BSLParser::ElseBranchContext::ElseBranchContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BSLParser::ElseBranchContext::ELSE_KEYWORD() {
  return getToken(BSLParser::ELSE_KEYWORD, 0);
}

BSLParser::CodeBlockContext* BSLParser::ElseBranchContext::codeBlock() {
  return getRuleContext<BSLParser::CodeBlockContext>(0);
}


size_t BSLParser::ElseBranchContext::getRuleIndex() const {
  return BSLParser::RuleElseBranch;
}

void BSLParser::ElseBranchContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElseBranch(this);
}

void BSLParser::ElseBranchContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElseBranch(this);
}

BSLParser::ElseBranchContext* BSLParser::elseBranch() {
  ElseBranchContext *_localctx = _tracker.createInstance<ElseBranchContext>(_ctx, getState());
  enterRule(_localctx, 96, BSLParser::RuleElseBranch);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(515);
    match(BSLParser::ELSE_KEYWORD);
    setState(516);
    codeBlock();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhileStatementContext ------------------------------------------------------------------

BSLParser::WhileStatementContext::WhileStatementContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BSLParser::WhileStatementContext::WHILE_KEYWORD() {
  return getToken(BSLParser::WHILE_KEYWORD, 0);
}

BSLParser::ExpressionContext* BSLParser::WhileStatementContext::expression() {
  return getRuleContext<BSLParser::ExpressionContext>(0);
}

tree::TerminalNode* BSLParser::WhileStatementContext::DO_KEYWORD() {
  return getToken(BSLParser::DO_KEYWORD, 0);
}

BSLParser::CodeBlockContext* BSLParser::WhileStatementContext::codeBlock() {
  return getRuleContext<BSLParser::CodeBlockContext>(0);
}

tree::TerminalNode* BSLParser::WhileStatementContext::ENDDO_KEYWORD() {
  return getToken(BSLParser::ENDDO_KEYWORD, 0);
}


size_t BSLParser::WhileStatementContext::getRuleIndex() const {
  return BSLParser::RuleWhileStatement;
}

void BSLParser::WhileStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhileStatement(this);
}

void BSLParser::WhileStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhileStatement(this);
}

BSLParser::WhileStatementContext* BSLParser::whileStatement() {
  WhileStatementContext *_localctx = _tracker.createInstance<WhileStatementContext>(_ctx, getState());
  enterRule(_localctx, 98, BSLParser::RuleWhileStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(518);
    match(BSLParser::WHILE_KEYWORD);
    setState(519);
    expression();
    setState(520);
    match(BSLParser::DO_KEYWORD);
    setState(521);
    codeBlock();
    setState(522);
    match(BSLParser::ENDDO_KEYWORD);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForStatementContext ------------------------------------------------------------------

BSLParser::ForStatementContext::ForStatementContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BSLParser::ForStatementContext::FOR_KEYWORD() {
  return getToken(BSLParser::FOR_KEYWORD, 0);
}

tree::TerminalNode* BSLParser::ForStatementContext::IDENTIFIER() {
  return getToken(BSLParser::IDENTIFIER, 0);
}

tree::TerminalNode* BSLParser::ForStatementContext::ASSIGN() {
  return getToken(BSLParser::ASSIGN, 0);
}

std::vector<BSLParser::ExpressionContext *> BSLParser::ForStatementContext::expression() {
  return getRuleContexts<BSLParser::ExpressionContext>();
}

BSLParser::ExpressionContext* BSLParser::ForStatementContext::expression(size_t i) {
  return getRuleContext<BSLParser::ExpressionContext>(i);
}

tree::TerminalNode* BSLParser::ForStatementContext::TO_KEYWORD() {
  return getToken(BSLParser::TO_KEYWORD, 0);
}

tree::TerminalNode* BSLParser::ForStatementContext::DO_KEYWORD() {
  return getToken(BSLParser::DO_KEYWORD, 0);
}

BSLParser::CodeBlockContext* BSLParser::ForStatementContext::codeBlock() {
  return getRuleContext<BSLParser::CodeBlockContext>(0);
}

tree::TerminalNode* BSLParser::ForStatementContext::ENDDO_KEYWORD() {
  return getToken(BSLParser::ENDDO_KEYWORD, 0);
}


size_t BSLParser::ForStatementContext::getRuleIndex() const {
  return BSLParser::RuleForStatement;
}

void BSLParser::ForStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForStatement(this);
}

void BSLParser::ForStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForStatement(this);
}

BSLParser::ForStatementContext* BSLParser::forStatement() {
  ForStatementContext *_localctx = _tracker.createInstance<ForStatementContext>(_ctx, getState());
  enterRule(_localctx, 100, BSLParser::RuleForStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(524);
    match(BSLParser::FOR_KEYWORD);
    setState(525);
    match(BSLParser::IDENTIFIER);
    setState(526);
    match(BSLParser::ASSIGN);
    setState(527);
    expression();
    setState(528);
    match(BSLParser::TO_KEYWORD);
    setState(529);
    expression();
    setState(530);
    match(BSLParser::DO_KEYWORD);
    setState(531);
    codeBlock();
    setState(532);
    match(BSLParser::ENDDO_KEYWORD);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForEachStatementContext ------------------------------------------------------------------

BSLParser::ForEachStatementContext::ForEachStatementContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BSLParser::ForEachStatementContext::FOR_KEYWORD() {
  return getToken(BSLParser::FOR_KEYWORD, 0);
}

tree::TerminalNode* BSLParser::ForEachStatementContext::EACH_KEYWORD() {
  return getToken(BSLParser::EACH_KEYWORD, 0);
}

tree::TerminalNode* BSLParser::ForEachStatementContext::IDENTIFIER() {
  return getToken(BSLParser::IDENTIFIER, 0);
}

tree::TerminalNode* BSLParser::ForEachStatementContext::IN_KEYWORD() {
  return getToken(BSLParser::IN_KEYWORD, 0);
}

BSLParser::ExpressionContext* BSLParser::ForEachStatementContext::expression() {
  return getRuleContext<BSLParser::ExpressionContext>(0);
}

tree::TerminalNode* BSLParser::ForEachStatementContext::DO_KEYWORD() {
  return getToken(BSLParser::DO_KEYWORD, 0);
}

BSLParser::CodeBlockContext* BSLParser::ForEachStatementContext::codeBlock() {
  return getRuleContext<BSLParser::CodeBlockContext>(0);
}

tree::TerminalNode* BSLParser::ForEachStatementContext::ENDDO_KEYWORD() {
  return getToken(BSLParser::ENDDO_KEYWORD, 0);
}


size_t BSLParser::ForEachStatementContext::getRuleIndex() const {
  return BSLParser::RuleForEachStatement;
}

void BSLParser::ForEachStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForEachStatement(this);
}

void BSLParser::ForEachStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForEachStatement(this);
}

BSLParser::ForEachStatementContext* BSLParser::forEachStatement() {
  ForEachStatementContext *_localctx = _tracker.createInstance<ForEachStatementContext>(_ctx, getState());
  enterRule(_localctx, 102, BSLParser::RuleForEachStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(534);
    match(BSLParser::FOR_KEYWORD);
    setState(535);
    match(BSLParser::EACH_KEYWORD);
    setState(536);
    match(BSLParser::IDENTIFIER);
    setState(537);
    match(BSLParser::IN_KEYWORD);
    setState(538);
    expression();
    setState(539);
    match(BSLParser::DO_KEYWORD);
    setState(540);
    codeBlock();
    setState(541);
    match(BSLParser::ENDDO_KEYWORD);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TryStatementContext ------------------------------------------------------------------

BSLParser::TryStatementContext::TryStatementContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BSLParser::TryStatementContext::TRY_KEYWORD() {
  return getToken(BSLParser::TRY_KEYWORD, 0);
}

BSLParser::TryCodeBlockContext* BSLParser::TryStatementContext::tryCodeBlock() {
  return getRuleContext<BSLParser::TryCodeBlockContext>(0);
}

tree::TerminalNode* BSLParser::TryStatementContext::EXCEPT_KEYWORD() {
  return getToken(BSLParser::EXCEPT_KEYWORD, 0);
}

BSLParser::ExceptCodeBlockContext* BSLParser::TryStatementContext::exceptCodeBlock() {
  return getRuleContext<BSLParser::ExceptCodeBlockContext>(0);
}

tree::TerminalNode* BSLParser::TryStatementContext::ENDTRY_KEYWORD() {
  return getToken(BSLParser::ENDTRY_KEYWORD, 0);
}


size_t BSLParser::TryStatementContext::getRuleIndex() const {
  return BSLParser::RuleTryStatement;
}

void BSLParser::TryStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTryStatement(this);
}

void BSLParser::TryStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTryStatement(this);
}

BSLParser::TryStatementContext* BSLParser::tryStatement() {
  TryStatementContext *_localctx = _tracker.createInstance<TryStatementContext>(_ctx, getState());
  enterRule(_localctx, 104, BSLParser::RuleTryStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(543);
    match(BSLParser::TRY_KEYWORD);
    setState(544);
    tryCodeBlock();
    setState(545);
    match(BSLParser::EXCEPT_KEYWORD);
    setState(546);
    exceptCodeBlock();
    setState(547);
    match(BSLParser::ENDTRY_KEYWORD);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReturnStatementContext ------------------------------------------------------------------

BSLParser::ReturnStatementContext::ReturnStatementContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BSLParser::ReturnStatementContext::RETURN_KEYWORD() {
  return getToken(BSLParser::RETURN_KEYWORD, 0);
}

BSLParser::ExpressionContext* BSLParser::ReturnStatementContext::expression() {
  return getRuleContext<BSLParser::ExpressionContext>(0);
}


size_t BSLParser::ReturnStatementContext::getRuleIndex() const {
  return BSLParser::RuleReturnStatement;
}

void BSLParser::ReturnStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturnStatement(this);
}

void BSLParser::ReturnStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturnStatement(this);
}

BSLParser::ReturnStatementContext* BSLParser::returnStatement() {
  ReturnStatementContext *_localctx = _tracker.createInstance<ReturnStatementContext>(_ctx, getState());
  enterRule(_localctx, 106, BSLParser::RuleReturnStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(549);
    match(BSLParser::RETURN_KEYWORD);
    setState(551);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 46, _ctx)) {
    case 1: {
      setState(550);
      expression();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExecuteStatementContext ------------------------------------------------------------------

BSLParser::ExecuteStatementContext::ExecuteStatementContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BSLParser::ExecuteStatementContext::EXECUTE_KEYWORD() {
  return getToken(BSLParser::EXECUTE_KEYWORD, 0);
}

BSLParser::DoCallContext* BSLParser::ExecuteStatementContext::doCall() {
  return getRuleContext<BSLParser::DoCallContext>(0);
}

BSLParser::CallParamListContext* BSLParser::ExecuteStatementContext::callParamList() {
  return getRuleContext<BSLParser::CallParamListContext>(0);
}


size_t BSLParser::ExecuteStatementContext::getRuleIndex() const {
  return BSLParser::RuleExecuteStatement;
}

void BSLParser::ExecuteStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExecuteStatement(this);
}

void BSLParser::ExecuteStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExecuteStatement(this);
}

BSLParser::ExecuteStatementContext* BSLParser::executeStatement() {
  ExecuteStatementContext *_localctx = _tracker.createInstance<ExecuteStatementContext>(_ctx, getState());
  enterRule(_localctx, 108, BSLParser::RuleExecuteStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(553);
    match(BSLParser::EXECUTE_KEYWORD);
    setState(556);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 47, _ctx)) {
    case 1: {
      setState(554);
      doCall();
      break;
    }

    case 2: {
      setState(555);
      callParamList();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CallStatementContext ------------------------------------------------------------------

BSLParser::CallStatementContext::CallStatementContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

BSLParser::GlobalMethodCallContext* BSLParser::CallStatementContext::globalMethodCall() {
  return getRuleContext<BSLParser::GlobalMethodCallContext>(0);
}

tree::TerminalNode* BSLParser::CallStatementContext::WAIT_KEYWORD() {
  return getToken(BSLParser::WAIT_KEYWORD, 0);
}

BSLParser::AccessCallContext* BSLParser::CallStatementContext::accessCall() {
  return getRuleContext<BSLParser::AccessCallContext>(0);
}

tree::TerminalNode* BSLParser::CallStatementContext::IDENTIFIER() {
  return getToken(BSLParser::IDENTIFIER, 0);
}

std::vector<BSLParser::ModifierContext *> BSLParser::CallStatementContext::modifier() {
  return getRuleContexts<BSLParser::ModifierContext>();
}

BSLParser::ModifierContext* BSLParser::CallStatementContext::modifier(size_t i) {
  return getRuleContext<BSLParser::ModifierContext>(i);
}


size_t BSLParser::CallStatementContext::getRuleIndex() const {
  return BSLParser::RuleCallStatement;
}

void BSLParser::CallStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCallStatement(this);
}

void BSLParser::CallStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCallStatement(this);
}

BSLParser::CallStatementContext* BSLParser::callStatement() {
  CallStatementContext *_localctx = _tracker.createInstance<CallStatementContext>(_ctx, getState());
  enterRule(_localctx, 110, BSLParser::RuleCallStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(559);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BSLParser::WAIT_KEYWORD) {
      setState(558);
      match(BSLParser::WAIT_KEYWORD);
    }
    setState(573);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 51, _ctx)) {
    case 1: {
      setState(563);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 49, _ctx)) {
      case 1: {
        setState(561);
        match(BSLParser::IDENTIFIER);
        break;
      }

      case 2: {
        setState(562);
        globalMethodCall();
        break;
      }

      }
      setState(568);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 50, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(565);
          modifier(); 
        }
        setState(570);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 50, _ctx);
      }
      setState(571);
      accessCall();
      break;
    }

    case 2: {
      setState(572);
      globalMethodCall();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WaitStatementContext ------------------------------------------------------------------

BSLParser::WaitStatementContext::WaitStatementContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BSLParser::WaitStatementContext::WAIT_KEYWORD() {
  return getToken(BSLParser::WAIT_KEYWORD, 0);
}

tree::TerminalNode* BSLParser::WaitStatementContext::IDENTIFIER() {
  return getToken(BSLParser::IDENTIFIER, 0);
}


size_t BSLParser::WaitStatementContext::getRuleIndex() const {
  return BSLParser::RuleWaitStatement;
}

void BSLParser::WaitStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWaitStatement(this);
}

void BSLParser::WaitStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWaitStatement(this);
}

BSLParser::WaitStatementContext* BSLParser::waitStatement() {
  WaitStatementContext *_localctx = _tracker.createInstance<WaitStatementContext>(_ctx, getState());
  enterRule(_localctx, 112, BSLParser::RuleWaitStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(575);
    match(BSLParser::WAIT_KEYWORD);
    setState(576);
    match(BSLParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LabelNameContext ------------------------------------------------------------------

BSLParser::LabelNameContext::LabelNameContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BSLParser::LabelNameContext::IDENTIFIER() {
  return getToken(BSLParser::IDENTIFIER, 0);
}


size_t BSLParser::LabelNameContext::getRuleIndex() const {
  return BSLParser::RuleLabelName;
}

void BSLParser::LabelNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLabelName(this);
}

void BSLParser::LabelNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLabelName(this);
}

BSLParser::LabelNameContext* BSLParser::labelName() {
  LabelNameContext *_localctx = _tracker.createInstance<LabelNameContext>(_ctx, getState());
  enterRule(_localctx, 114, BSLParser::RuleLabelName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(578);
    match(BSLParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LabelContext ------------------------------------------------------------------

BSLParser::LabelContext::LabelContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BSLParser::LabelContext::TILDA() {
  return getToken(BSLParser::TILDA, 0);
}

BSLParser::LabelNameContext* BSLParser::LabelContext::labelName() {
  return getRuleContext<BSLParser::LabelNameContext>(0);
}

tree::TerminalNode* BSLParser::LabelContext::COLON() {
  return getToken(BSLParser::COLON, 0);
}


size_t BSLParser::LabelContext::getRuleIndex() const {
  return BSLParser::RuleLabel;
}

void BSLParser::LabelContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLabel(this);
}

void BSLParser::LabelContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLabel(this);
}

BSLParser::LabelContext* BSLParser::label() {
  LabelContext *_localctx = _tracker.createInstance<LabelContext>(_ctx, getState());
  enterRule(_localctx, 116, BSLParser::RuleLabel);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(580);
    match(BSLParser::TILDA);
    setState(581);
    labelName();
    setState(582);
    match(BSLParser::COLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GotoStatementContext ------------------------------------------------------------------

BSLParser::GotoStatementContext::GotoStatementContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BSLParser::GotoStatementContext::GOTO_KEYWORD() {
  return getToken(BSLParser::GOTO_KEYWORD, 0);
}

tree::TerminalNode* BSLParser::GotoStatementContext::TILDA() {
  return getToken(BSLParser::TILDA, 0);
}

BSLParser::LabelNameContext* BSLParser::GotoStatementContext::labelName() {
  return getRuleContext<BSLParser::LabelNameContext>(0);
}


size_t BSLParser::GotoStatementContext::getRuleIndex() const {
  return BSLParser::RuleGotoStatement;
}

void BSLParser::GotoStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGotoStatement(this);
}

void BSLParser::GotoStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGotoStatement(this);
}

BSLParser::GotoStatementContext* BSLParser::gotoStatement() {
  GotoStatementContext *_localctx = _tracker.createInstance<GotoStatementContext>(_ctx, getState());
  enterRule(_localctx, 118, BSLParser::RuleGotoStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(584);
    match(BSLParser::GOTO_KEYWORD);
    setState(585);
    match(BSLParser::TILDA);
    setState(586);
    labelName();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TryCodeBlockContext ------------------------------------------------------------------

BSLParser::TryCodeBlockContext::TryCodeBlockContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

BSLParser::CodeBlockContext* BSLParser::TryCodeBlockContext::codeBlock() {
  return getRuleContext<BSLParser::CodeBlockContext>(0);
}


size_t BSLParser::TryCodeBlockContext::getRuleIndex() const {
  return BSLParser::RuleTryCodeBlock;
}

void BSLParser::TryCodeBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTryCodeBlock(this);
}

void BSLParser::TryCodeBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTryCodeBlock(this);
}

BSLParser::TryCodeBlockContext* BSLParser::tryCodeBlock() {
  TryCodeBlockContext *_localctx = _tracker.createInstance<TryCodeBlockContext>(_ctx, getState());
  enterRule(_localctx, 120, BSLParser::RuleTryCodeBlock);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(588);
    codeBlock();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExceptCodeBlockContext ------------------------------------------------------------------

BSLParser::ExceptCodeBlockContext::ExceptCodeBlockContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

BSLParser::CodeBlockContext* BSLParser::ExceptCodeBlockContext::codeBlock() {
  return getRuleContext<BSLParser::CodeBlockContext>(0);
}


size_t BSLParser::ExceptCodeBlockContext::getRuleIndex() const {
  return BSLParser::RuleExceptCodeBlock;
}

void BSLParser::ExceptCodeBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExceptCodeBlock(this);
}

void BSLParser::ExceptCodeBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExceptCodeBlock(this);
}

BSLParser::ExceptCodeBlockContext* BSLParser::exceptCodeBlock() {
  ExceptCodeBlockContext *_localctx = _tracker.createInstance<ExceptCodeBlockContext>(_ctx, getState());
  enterRule(_localctx, 122, BSLParser::RuleExceptCodeBlock);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(590);
    codeBlock();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EventContext ------------------------------------------------------------------

BSLParser::EventContext::EventContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

BSLParser::ExpressionContext* BSLParser::EventContext::expression() {
  return getRuleContext<BSLParser::ExpressionContext>(0);
}


size_t BSLParser::EventContext::getRuleIndex() const {
  return BSLParser::RuleEvent;
}

void BSLParser::EventContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEvent(this);
}

void BSLParser::EventContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEvent(this);
}

BSLParser::EventContext* BSLParser::event() {
  EventContext *_localctx = _tracker.createInstance<EventContext>(_ctx, getState());
  enterRule(_localctx, 124, BSLParser::RuleEvent);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(592);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- HandlerContext ------------------------------------------------------------------

BSLParser::HandlerContext::HandlerContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

BSLParser::ExpressionContext* BSLParser::HandlerContext::expression() {
  return getRuleContext<BSLParser::ExpressionContext>(0);
}


size_t BSLParser::HandlerContext::getRuleIndex() const {
  return BSLParser::RuleHandler;
}

void BSLParser::HandlerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHandler(this);
}

void BSLParser::HandlerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHandler(this);
}

BSLParser::HandlerContext* BSLParser::handler() {
  HandlerContext *_localctx = _tracker.createInstance<HandlerContext>(_ctx, getState());
  enterRule(_localctx, 126, BSLParser::RuleHandler);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(594);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AddHandlerStatementContext ------------------------------------------------------------------

BSLParser::AddHandlerStatementContext::AddHandlerStatementContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BSLParser::AddHandlerStatementContext::ADDHANDLER_KEYWORD() {
  return getToken(BSLParser::ADDHANDLER_KEYWORD, 0);
}

BSLParser::EventContext* BSLParser::AddHandlerStatementContext::event() {
  return getRuleContext<BSLParser::EventContext>(0);
}

tree::TerminalNode* BSLParser::AddHandlerStatementContext::COMMA() {
  return getToken(BSLParser::COMMA, 0);
}

BSLParser::HandlerContext* BSLParser::AddHandlerStatementContext::handler() {
  return getRuleContext<BSLParser::HandlerContext>(0);
}


size_t BSLParser::AddHandlerStatementContext::getRuleIndex() const {
  return BSLParser::RuleAddHandlerStatement;
}

void BSLParser::AddHandlerStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAddHandlerStatement(this);
}

void BSLParser::AddHandlerStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAddHandlerStatement(this);
}

BSLParser::AddHandlerStatementContext* BSLParser::addHandlerStatement() {
  AddHandlerStatementContext *_localctx = _tracker.createInstance<AddHandlerStatementContext>(_ctx, getState());
  enterRule(_localctx, 128, BSLParser::RuleAddHandlerStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(596);
    match(BSLParser::ADDHANDLER_KEYWORD);
    setState(597);
    event();
    setState(598);
    match(BSLParser::COMMA);
    setState(599);
    handler();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RemoveHandlerStatementContext ------------------------------------------------------------------

BSLParser::RemoveHandlerStatementContext::RemoveHandlerStatementContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BSLParser::RemoveHandlerStatementContext::REMOVEHANDLER_KEYWORD() {
  return getToken(BSLParser::REMOVEHANDLER_KEYWORD, 0);
}

BSLParser::EventContext* BSLParser::RemoveHandlerStatementContext::event() {
  return getRuleContext<BSLParser::EventContext>(0);
}

tree::TerminalNode* BSLParser::RemoveHandlerStatementContext::COMMA() {
  return getToken(BSLParser::COMMA, 0);
}

BSLParser::HandlerContext* BSLParser::RemoveHandlerStatementContext::handler() {
  return getRuleContext<BSLParser::HandlerContext>(0);
}


size_t BSLParser::RemoveHandlerStatementContext::getRuleIndex() const {
  return BSLParser::RuleRemoveHandlerStatement;
}

void BSLParser::RemoveHandlerStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRemoveHandlerStatement(this);
}

void BSLParser::RemoveHandlerStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRemoveHandlerStatement(this);
}

BSLParser::RemoveHandlerStatementContext* BSLParser::removeHandlerStatement() {
  RemoveHandlerStatementContext *_localctx = _tracker.createInstance<RemoveHandlerStatementContext>(_ctx, getState());
  enterRule(_localctx, 130, BSLParser::RuleRemoveHandlerStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(601);
    match(BSLParser::REMOVEHANDLER_KEYWORD);
    setState(602);
    event();
    setState(603);
    match(BSLParser::COMMA);
    setState(604);
    handler();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TernaryOperatorContext ------------------------------------------------------------------

BSLParser::TernaryOperatorContext::TernaryOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BSLParser::TernaryOperatorContext::QUESTION() {
  return getToken(BSLParser::QUESTION, 0);
}

tree::TerminalNode* BSLParser::TernaryOperatorContext::LPAREN() {
  return getToken(BSLParser::LPAREN, 0);
}

std::vector<BSLParser::ExpressionContext *> BSLParser::TernaryOperatorContext::expression() {
  return getRuleContexts<BSLParser::ExpressionContext>();
}

BSLParser::ExpressionContext* BSLParser::TernaryOperatorContext::expression(size_t i) {
  return getRuleContext<BSLParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> BSLParser::TernaryOperatorContext::COMMA() {
  return getTokens(BSLParser::COMMA);
}

tree::TerminalNode* BSLParser::TernaryOperatorContext::COMMA(size_t i) {
  return getToken(BSLParser::COMMA, i);
}

tree::TerminalNode* BSLParser::TernaryOperatorContext::RPAREN() {
  return getToken(BSLParser::RPAREN, 0);
}


size_t BSLParser::TernaryOperatorContext::getRuleIndex() const {
  return BSLParser::RuleTernaryOperator;
}

void BSLParser::TernaryOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTernaryOperator(this);
}

void BSLParser::TernaryOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTernaryOperator(this);
}

BSLParser::TernaryOperatorContext* BSLParser::ternaryOperator() {
  TernaryOperatorContext *_localctx = _tracker.createInstance<TernaryOperatorContext>(_ctx, getState());
  enterRule(_localctx, 132, BSLParser::RuleTernaryOperator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(606);
    match(BSLParser::QUESTION);
    setState(607);
    match(BSLParser::LPAREN);
    setState(608);
    expression();
    setState(609);
    match(BSLParser::COMMA);
    setState(610);
    expression();
    setState(611);
    match(BSLParser::COMMA);
    setState(612);
    expression();
    setState(613);
    match(BSLParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FileCodeBlockBeforeSubContext ------------------------------------------------------------------

BSLParser::FileCodeBlockBeforeSubContext::FileCodeBlockBeforeSubContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

BSLParser::CodeBlockContext* BSLParser::FileCodeBlockBeforeSubContext::codeBlock() {
  return getRuleContext<BSLParser::CodeBlockContext>(0);
}


size_t BSLParser::FileCodeBlockBeforeSubContext::getRuleIndex() const {
  return BSLParser::RuleFileCodeBlockBeforeSub;
}

void BSLParser::FileCodeBlockBeforeSubContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFileCodeBlockBeforeSub(this);
}

void BSLParser::FileCodeBlockBeforeSubContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFileCodeBlockBeforeSub(this);
}

BSLParser::FileCodeBlockBeforeSubContext* BSLParser::fileCodeBlockBeforeSub() {
  FileCodeBlockBeforeSubContext *_localctx = _tracker.createInstance<FileCodeBlockBeforeSubContext>(_ctx, getState());
  enterRule(_localctx, 134, BSLParser::RuleFileCodeBlockBeforeSub);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(615);
    codeBlock();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FileCodeBlockContext ------------------------------------------------------------------

BSLParser::FileCodeBlockContext::FileCodeBlockContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

BSLParser::CodeBlockContext* BSLParser::FileCodeBlockContext::codeBlock() {
  return getRuleContext<BSLParser::CodeBlockContext>(0);
}


size_t BSLParser::FileCodeBlockContext::getRuleIndex() const {
  return BSLParser::RuleFileCodeBlock;
}

void BSLParser::FileCodeBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFileCodeBlock(this);
}

void BSLParser::FileCodeBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFileCodeBlock(this);
}

BSLParser::FileCodeBlockContext* BSLParser::fileCodeBlock() {
  FileCodeBlockContext *_localctx = _tracker.createInstance<FileCodeBlockContext>(_ctx, getState());
  enterRule(_localctx, 136, BSLParser::RuleFileCodeBlock);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(617);
    codeBlock();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CodeBlockContext ------------------------------------------------------------------

BSLParser::CodeBlockContext::CodeBlockContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

std::vector<BSLParser::StatementContext *> BSLParser::CodeBlockContext::statement() {
  return getRuleContexts<BSLParser::StatementContext>();
}

BSLParser::StatementContext* BSLParser::CodeBlockContext::statement(size_t i) {
  return getRuleContext<BSLParser::StatementContext>(i);
}

std::vector<BSLParser::PreprocessorContext *> BSLParser::CodeBlockContext::preprocessor() {
  return getRuleContexts<BSLParser::PreprocessorContext>();
}

BSLParser::PreprocessorContext* BSLParser::CodeBlockContext::preprocessor(size_t i) {
  return getRuleContext<BSLParser::PreprocessorContext>(i);
}


size_t BSLParser::CodeBlockContext::getRuleIndex() const {
  return BSLParser::RuleCodeBlock;
}

void BSLParser::CodeBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCodeBlock(this);
}

void BSLParser::CodeBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCodeBlock(this);
}

BSLParser::CodeBlockContext* BSLParser::codeBlock() {
  CodeBlockContext *_localctx = _tracker.createInstance<CodeBlockContext>(_ctx, getState());
  enterRule(_localctx, 138, BSLParser::RuleCodeBlock);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(623);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 53, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(621);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 52, _ctx)) {
        case 1: {
          setState(619);
          statement();
          break;
        }

        case 2: {
          setState(620);
          preprocessor();
          break;
        }

        } 
      }
      setState(625);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 53, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumericContext ------------------------------------------------------------------

BSLParser::NumericContext::NumericContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BSLParser::NumericContext::FLOAT() {
  return getToken(BSLParser::FLOAT, 0);
}

tree::TerminalNode* BSLParser::NumericContext::DECIMAL() {
  return getToken(BSLParser::DECIMAL, 0);
}


size_t BSLParser::NumericContext::getRuleIndex() const {
  return BSLParser::RuleNumeric;
}

void BSLParser::NumericContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNumeric(this);
}

void BSLParser::NumericContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNumeric(this);
}

BSLParser::NumericContext* BSLParser::numeric() {
  NumericContext *_localctx = _tracker.createInstance<NumericContext>(_ctx, getState());
  enterRule(_localctx, 140, BSLParser::RuleNumeric);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(626);
    _la = _input->LA(1);
    if (!(_la == BSLParser::DECIMAL

    || _la == BSLParser::FLOAT)) {
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

//----------------- ParamListContext ------------------------------------------------------------------

BSLParser::ParamListContext::ParamListContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

std::vector<BSLParser::ParamContext *> BSLParser::ParamListContext::param() {
  return getRuleContexts<BSLParser::ParamContext>();
}

BSLParser::ParamContext* BSLParser::ParamListContext::param(size_t i) {
  return getRuleContext<BSLParser::ParamContext>(i);
}

std::vector<tree::TerminalNode *> BSLParser::ParamListContext::COMMA() {
  return getTokens(BSLParser::COMMA);
}

tree::TerminalNode* BSLParser::ParamListContext::COMMA(size_t i) {
  return getToken(BSLParser::COMMA, i);
}


size_t BSLParser::ParamListContext::getRuleIndex() const {
  return BSLParser::RuleParamList;
}

void BSLParser::ParamListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParamList(this);
}

void BSLParser::ParamListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParamList(this);
}

BSLParser::ParamListContext* BSLParser::paramList() {
  ParamListContext *_localctx = _tracker.createInstance<ParamListContext>(_ctx, getState());
  enterRule(_localctx, 142, BSLParser::RuleParamList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(628);
    param();
    setState(633);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BSLParser::COMMA) {
      setState(629);
      match(BSLParser::COMMA);
      setState(630);
      param();
      setState(635);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParamContext ------------------------------------------------------------------

BSLParser::ParamContext::ParamContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BSLParser::ParamContext::IDENTIFIER() {
  return getToken(BSLParser::IDENTIFIER, 0);
}

tree::TerminalNode* BSLParser::ParamContext::VAL_KEYWORD() {
  return getToken(BSLParser::VAL_KEYWORD, 0);
}

tree::TerminalNode* BSLParser::ParamContext::ASSIGN() {
  return getToken(BSLParser::ASSIGN, 0);
}

BSLParser::DefaultValueContext* BSLParser::ParamContext::defaultValue() {
  return getRuleContext<BSLParser::DefaultValueContext>(0);
}


size_t BSLParser::ParamContext::getRuleIndex() const {
  return BSLParser::RuleParam;
}

void BSLParser::ParamContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParam(this);
}

void BSLParser::ParamContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParam(this);
}

BSLParser::ParamContext* BSLParser::param() {
  ParamContext *_localctx = _tracker.createInstance<ParamContext>(_ctx, getState());
  enterRule(_localctx, 144, BSLParser::RuleParam);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(637);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BSLParser::VAL_KEYWORD) {
      setState(636);
      match(BSLParser::VAL_KEYWORD);
    }
    setState(639);
    match(BSLParser::IDENTIFIER);
    setState(642);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BSLParser::ASSIGN) {
      setState(640);
      match(BSLParser::ASSIGN);
      setState(641);
      defaultValue();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DefaultValueContext ------------------------------------------------------------------

BSLParser::DefaultValueContext::DefaultValueContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

BSLParser::ConstValueContext* BSLParser::DefaultValueContext::constValue() {
  return getRuleContext<BSLParser::ConstValueContext>(0);
}


size_t BSLParser::DefaultValueContext::getRuleIndex() const {
  return BSLParser::RuleDefaultValue;
}

void BSLParser::DefaultValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDefaultValue(this);
}

void BSLParser::DefaultValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDefaultValue(this);
}

BSLParser::DefaultValueContext* BSLParser::defaultValue() {
  DefaultValueContext *_localctx = _tracker.createInstance<DefaultValueContext>(_ctx, getState());
  enterRule(_localctx, 146, BSLParser::RuleDefaultValue);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(644);
    constValue();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstValueContext ------------------------------------------------------------------

BSLParser::ConstValueContext::ConstValueContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

BSLParser::NumericContext* BSLParser::ConstValueContext::numeric() {
  return getRuleContext<BSLParser::NumericContext>(0);
}

tree::TerminalNode* BSLParser::ConstValueContext::MINUS() {
  return getToken(BSLParser::MINUS, 0);
}

tree::TerminalNode* BSLParser::ConstValueContext::PLUS() {
  return getToken(BSLParser::PLUS, 0);
}

BSLParser::StringContext* BSLParser::ConstValueContext::string() {
  return getRuleContext<BSLParser::StringContext>(0);
}

tree::TerminalNode* BSLParser::ConstValueContext::TRUE() {
  return getToken(BSLParser::TRUE, 0);
}

tree::TerminalNode* BSLParser::ConstValueContext::FALSE() {
  return getToken(BSLParser::FALSE, 0);
}

tree::TerminalNode* BSLParser::ConstValueContext::UNDEFINED() {
  return getToken(BSLParser::UNDEFINED, 0);
}

tree::TerminalNode* BSLParser::ConstValueContext::IS_NULL() {
  return getToken(BSLParser::IS_NULL, 0);
}

tree::TerminalNode* BSLParser::ConstValueContext::DATETIME() {
  return getToken(BSLParser::DATETIME, 0);
}


size_t BSLParser::ConstValueContext::getRuleIndex() const {
  return BSLParser::RuleConstValue;
}

void BSLParser::ConstValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstValue(this);
}

void BSLParser::ConstValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstValue(this);
}

BSLParser::ConstValueContext* BSLParser::constValue() {
  ConstValueContext *_localctx = _tracker.createInstance<ConstValueContext>(_ctx, getState());
  enterRule(_localctx, 148, BSLParser::RuleConstValue);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(656);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BSLParser::PLUS:
      case BSLParser::MINUS:
      case BSLParser::DECIMAL:
      case BSLParser::FLOAT: {
        enterOuterAlt(_localctx, 1);
        setState(647);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == BSLParser::PLUS

        || _la == BSLParser::MINUS) {
          setState(646);
          _la = _input->LA(1);
          if (!(_la == BSLParser::PLUS

          || _la == BSLParser::MINUS)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
        }
        setState(649);
        numeric();
        break;
      }

      case BSLParser::STRING:
      case BSLParser::STRINGSTART: {
        enterOuterAlt(_localctx, 2);
        setState(650);
        string();
        break;
      }

      case BSLParser::TRUE: {
        enterOuterAlt(_localctx, 3);
        setState(651);
        match(BSLParser::TRUE);
        break;
      }

      case BSLParser::FALSE: {
        enterOuterAlt(_localctx, 4);
        setState(652);
        match(BSLParser::FALSE);
        break;
      }

      case BSLParser::UNDEFINED: {
        enterOuterAlt(_localctx, 5);
        setState(653);
        match(BSLParser::UNDEFINED);
        break;
      }

      case BSLParser::IS_NULL: {
        enterOuterAlt(_localctx, 6);
        setState(654);
        match(BSLParser::IS_NULL);
        break;
      }

      case BSLParser::DATETIME: {
        enterOuterAlt(_localctx, 7);
        setState(655);
        match(BSLParser::DATETIME);
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

//----------------- MultilineStringContext ------------------------------------------------------------------

BSLParser::MultilineStringContext::MultilineStringContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BSLParser::MultilineStringContext::STRINGSTART() {
  return getToken(BSLParser::STRINGSTART, 0);
}

tree::TerminalNode* BSLParser::MultilineStringContext::STRINGTAIL() {
  return getToken(BSLParser::STRINGTAIL, 0);
}

std::vector<tree::TerminalNode *> BSLParser::MultilineStringContext::STRINGPART() {
  return getTokens(BSLParser::STRINGPART);
}

tree::TerminalNode* BSLParser::MultilineStringContext::STRINGPART(size_t i) {
  return getToken(BSLParser::STRINGPART, i);
}

std::vector<tree::TerminalNode *> BSLParser::MultilineStringContext::BAR() {
  return getTokens(BSLParser::BAR);
}

tree::TerminalNode* BSLParser::MultilineStringContext::BAR(size_t i) {
  return getToken(BSLParser::BAR, i);
}

std::vector<BSLParser::PreprocessorContext *> BSLParser::MultilineStringContext::preprocessor() {
  return getRuleContexts<BSLParser::PreprocessorContext>();
}

BSLParser::PreprocessorContext* BSLParser::MultilineStringContext::preprocessor(size_t i) {
  return getRuleContext<BSLParser::PreprocessorContext>(i);
}


size_t BSLParser::MultilineStringContext::getRuleIndex() const {
  return BSLParser::RuleMultilineString;
}

void BSLParser::MultilineStringContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMultilineString(this);
}

void BSLParser::MultilineStringContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMultilineString(this);
}

BSLParser::MultilineStringContext* BSLParser::multilineString() {
  MultilineStringContext *_localctx = _tracker.createInstance<MultilineStringContext>(_ctx, getState());
  enterRule(_localctx, 150, BSLParser::RuleMultilineString);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(658);
    match(BSLParser::STRINGSTART);
    setState(664);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << BSLParser::HASH)
      | (1ULL << BSLParser::BAR)
      | (1ULL << BSLParser::STRINGPART))) != 0)) {
      setState(662);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case BSLParser::STRINGPART: {
          setState(659);
          match(BSLParser::STRINGPART);
          break;
        }

        case BSLParser::BAR: {
          setState(660);
          match(BSLParser::BAR);
          break;
        }

        case BSLParser::HASH: {
          setState(661);
          preprocessor();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(666);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(667);
    match(BSLParser::STRINGTAIL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StringContext ------------------------------------------------------------------

BSLParser::StringContext::StringContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> BSLParser::StringContext::STRING() {
  return getTokens(BSLParser::STRING);
}

tree::TerminalNode* BSLParser::StringContext::STRING(size_t i) {
  return getToken(BSLParser::STRING, i);
}

std::vector<BSLParser::MultilineStringContext *> BSLParser::StringContext::multilineString() {
  return getRuleContexts<BSLParser::MultilineStringContext>();
}

BSLParser::MultilineStringContext* BSLParser::StringContext::multilineString(size_t i) {
  return getRuleContext<BSLParser::MultilineStringContext>(i);
}


size_t BSLParser::StringContext::getRuleIndex() const {
  return BSLParser::RuleString;
}

void BSLParser::StringContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterString(this);
}

void BSLParser::StringContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitString(this);
}

BSLParser::StringContext* BSLParser::string() {
  StringContext *_localctx = _tracker.createInstance<StringContext>(_ctx, getState());
  enterRule(_localctx, 152, BSLParser::RuleString);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(671); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(671);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case BSLParser::STRING: {
          setState(669);
          match(BSLParser::STRING);
          break;
        }

        case BSLParser::STRINGSTART: {
          setState(670);
          multilineString();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(673); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == BSLParser::STRING

    || _la == BSLParser::STRINGSTART);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

BSLParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BSLParser::StatementContext::SEMICOLON() {
  return getToken(BSLParser::SEMICOLON, 0);
}

BSLParser::LabelContext* BSLParser::StatementContext::label() {
  return getRuleContext<BSLParser::LabelContext>(0);
}

BSLParser::CallStatementContext* BSLParser::StatementContext::callStatement() {
  return getRuleContext<BSLParser::CallStatementContext>(0);
}

BSLParser::WaitStatementContext* BSLParser::StatementContext::waitStatement() {
  return getRuleContext<BSLParser::WaitStatementContext>(0);
}

BSLParser::CompoundStatementContext* BSLParser::StatementContext::compoundStatement() {
  return getRuleContext<BSLParser::CompoundStatementContext>(0);
}

BSLParser::AssignmentContext* BSLParser::StatementContext::assignment() {
  return getRuleContext<BSLParser::AssignmentContext>(0);
}

BSLParser::PreprocessorContext* BSLParser::StatementContext::preprocessor() {
  return getRuleContext<BSLParser::PreprocessorContext>(0);
}


size_t BSLParser::StatementContext::getRuleIndex() const {
  return BSLParser::RuleStatement;
}

void BSLParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void BSLParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}

BSLParser::StatementContext* BSLParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 154, BSLParser::RuleStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(696);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BSLParser::HASH:
      case BSLParser::TILDA:
      case BSLParser::IF_KEYWORD:
      case BSLParser::WHILE_KEYWORD:
      case BSLParser::FOR_KEYWORD:
      case BSLParser::TRY_KEYWORD:
      case BSLParser::RETURN_KEYWORD:
      case BSLParser::CONTINUE_KEYWORD:
      case BSLParser::RAISE_KEYWORD:
      case BSLParser::GOTO_KEYWORD:
      case BSLParser::BREAK_KEYWORD:
      case BSLParser::EXECUTE_KEYWORD:
      case BSLParser::ADDHANDLER_KEYWORD:
      case BSLParser::REMOVEHANDLER_KEYWORD:
      case BSLParser::IDENTIFIER:
      case BSLParser::WAIT_KEYWORD: {
        enterOuterAlt(_localctx, 1);
        setState(690);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case BSLParser::TILDA: {
            setState(675);
            label();
            setState(681);
            _errHandler->sync(this);

            switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 63, _ctx)) {
            case 1: {
              setState(676);
              callStatement();
              break;
            }

            case 2: {
              setState(677);
              waitStatement();
              break;
            }

            case 3: {
              setState(678);
              compoundStatement();
              break;
            }

            case 4: {
              setState(679);
              assignment();
              break;
            }

            case 5: {
              setState(680);
              preprocessor();
              break;
            }

            }
            break;
          }

          case BSLParser::HASH:
          case BSLParser::IF_KEYWORD:
          case BSLParser::WHILE_KEYWORD:
          case BSLParser::FOR_KEYWORD:
          case BSLParser::TRY_KEYWORD:
          case BSLParser::RETURN_KEYWORD:
          case BSLParser::CONTINUE_KEYWORD:
          case BSLParser::RAISE_KEYWORD:
          case BSLParser::GOTO_KEYWORD:
          case BSLParser::BREAK_KEYWORD:
          case BSLParser::EXECUTE_KEYWORD:
          case BSLParser::ADDHANDLER_KEYWORD:
          case BSLParser::REMOVEHANDLER_KEYWORD:
          case BSLParser::IDENTIFIER:
          case BSLParser::WAIT_KEYWORD: {
            setState(688);
            _errHandler->sync(this);
            switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 64, _ctx)) {
            case 1: {
              setState(683);
              callStatement();
              break;
            }

            case 2: {
              setState(684);
              waitStatement();
              break;
            }

            case 3: {
              setState(685);
              compoundStatement();
              break;
            }

            case 4: {
              setState(686);
              assignment();
              break;
            }

            case 5: {
              setState(687);
              preprocessor();
              break;
            }

            }
            break;
          }

        default:
          throw NoViableAltException(this);
        }
        setState(693);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 66, _ctx)) {
        case 1: {
          setState(692);
          match(BSLParser::SEMICOLON);
          break;
        }

        }
        break;
      }

      case BSLParser::SEMICOLON: {
        enterOuterAlt(_localctx, 2);
        setState(695);
        match(BSLParser::SEMICOLON);
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

//----------------- AssignmentContext ------------------------------------------------------------------

BSLParser::AssignmentContext::AssignmentContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

BSLParser::LValueContext* BSLParser::AssignmentContext::lValue() {
  return getRuleContext<BSLParser::LValueContext>(0);
}

tree::TerminalNode* BSLParser::AssignmentContext::ASSIGN() {
  return getToken(BSLParser::ASSIGN, 0);
}

std::vector<BSLParser::PreprocessorContext *> BSLParser::AssignmentContext::preprocessor() {
  return getRuleContexts<BSLParser::PreprocessorContext>();
}

BSLParser::PreprocessorContext* BSLParser::AssignmentContext::preprocessor(size_t i) {
  return getRuleContext<BSLParser::PreprocessorContext>(i);
}

BSLParser::ExpressionContext* BSLParser::AssignmentContext::expression() {
  return getRuleContext<BSLParser::ExpressionContext>(0);
}


size_t BSLParser::AssignmentContext::getRuleIndex() const {
  return BSLParser::RuleAssignment;
}

void BSLParser::AssignmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignment(this);
}

void BSLParser::AssignmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignment(this);
}

BSLParser::AssignmentContext* BSLParser::assignment() {
  AssignmentContext *_localctx = _tracker.createInstance<AssignmentContext>(_ctx, getState());
  enterRule(_localctx, 156, BSLParser::RuleAssignment);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(698);
    lValue();
    setState(702);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BSLParser::HASH) {
      setState(699);
      preprocessor();
      setState(704);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(705);
    match(BSLParser::ASSIGN);
    setState(713);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 70, _ctx)) {
    case 1: {
      setState(709);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == BSLParser::HASH) {
        setState(706);
        preprocessor();
        setState(711);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(712);
      expression();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CallParamListContext ------------------------------------------------------------------

BSLParser::CallParamListContext::CallParamListContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

std::vector<BSLParser::CallParamContext *> BSLParser::CallParamListContext::callParam() {
  return getRuleContexts<BSLParser::CallParamContext>();
}

BSLParser::CallParamContext* BSLParser::CallParamListContext::callParam(size_t i) {
  return getRuleContext<BSLParser::CallParamContext>(i);
}

std::vector<tree::TerminalNode *> BSLParser::CallParamListContext::COMMA() {
  return getTokens(BSLParser::COMMA);
}

tree::TerminalNode* BSLParser::CallParamListContext::COMMA(size_t i) {
  return getToken(BSLParser::COMMA, i);
}


size_t BSLParser::CallParamListContext::getRuleIndex() const {
  return BSLParser::RuleCallParamList;
}

void BSLParser::CallParamListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCallParamList(this);
}

void BSLParser::CallParamListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCallParamList(this);
}

BSLParser::CallParamListContext* BSLParser::callParamList() {
  CallParamListContext *_localctx = _tracker.createInstance<CallParamListContext>(_ctx, getState());
  enterRule(_localctx, 158, BSLParser::RuleCallParamList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(715);
    callParam();
    setState(720);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BSLParser::COMMA) {
      setState(716);
      match(BSLParser::COMMA);
      setState(717);
      callParam();
      setState(722);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CallParamContext ------------------------------------------------------------------

BSLParser::CallParamContext::CallParamContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

BSLParser::ExpressionContext* BSLParser::CallParamContext::expression() {
  return getRuleContext<BSLParser::ExpressionContext>(0);
}


size_t BSLParser::CallParamContext::getRuleIndex() const {
  return BSLParser::RuleCallParam;
}

void BSLParser::CallParamContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCallParam(this);
}

void BSLParser::CallParamContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCallParam(this);
}

BSLParser::CallParamContext* BSLParser::callParam() {
  CallParamContext *_localctx = _tracker.createInstance<CallParamContext>(_ctx, getState());
  enterRule(_localctx, 160, BSLParser::RuleCallParam);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(724);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 72, _ctx)) {
    case 1: {
      setState(723);
      expression();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

BSLParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

std::vector<BSLParser::MemberContext *> BSLParser::ExpressionContext::member() {
  return getRuleContexts<BSLParser::MemberContext>();
}

BSLParser::MemberContext* BSLParser::ExpressionContext::member(size_t i) {
  return getRuleContext<BSLParser::MemberContext>(i);
}

std::vector<BSLParser::OperationContext *> BSLParser::ExpressionContext::operation() {
  return getRuleContexts<BSLParser::OperationContext>();
}

BSLParser::OperationContext* BSLParser::ExpressionContext::operation(size_t i) {
  return getRuleContext<BSLParser::OperationContext>(i);
}

std::vector<BSLParser::PreprocessorContext *> BSLParser::ExpressionContext::preprocessor() {
  return getRuleContexts<BSLParser::PreprocessorContext>();
}

BSLParser::PreprocessorContext* BSLParser::ExpressionContext::preprocessor(size_t i) {
  return getRuleContext<BSLParser::PreprocessorContext>(i);
}


size_t BSLParser::ExpressionContext::getRuleIndex() const {
  return BSLParser::RuleExpression;
}

void BSLParser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void BSLParser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}

BSLParser::ExpressionContext* BSLParser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 162, BSLParser::RuleExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(726);
    member();
    setState(749);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 76, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(730);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == BSLParser::HASH) {
          setState(727);
          preprocessor();
          setState(732);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(733);
        operation();
        setState(737);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == BSLParser::HASH) {
          setState(734);
          preprocessor();
          setState(739);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(740);
        member();
        setState(744);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 75, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(741);
            preprocessor(); 
          }
          setState(746);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 75, _ctx);
        } 
      }
      setState(751);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 76, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OperationContext ------------------------------------------------------------------

BSLParser::OperationContext::OperationContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BSLParser::OperationContext::PLUS() {
  return getToken(BSLParser::PLUS, 0);
}

tree::TerminalNode* BSLParser::OperationContext::MINUS() {
  return getToken(BSLParser::MINUS, 0);
}

tree::TerminalNode* BSLParser::OperationContext::MUL() {
  return getToken(BSLParser::MUL, 0);
}

tree::TerminalNode* BSLParser::OperationContext::QUOTIENT() {
  return getToken(BSLParser::QUOTIENT, 0);
}

tree::TerminalNode* BSLParser::OperationContext::MODULO() {
  return getToken(BSLParser::MODULO, 0);
}

BSLParser::BoolOperationContext* BSLParser::OperationContext::boolOperation() {
  return getRuleContext<BSLParser::BoolOperationContext>(0);
}

BSLParser::CompareOperationContext* BSLParser::OperationContext::compareOperation() {
  return getRuleContext<BSLParser::CompareOperationContext>(0);
}


size_t BSLParser::OperationContext::getRuleIndex() const {
  return BSLParser::RuleOperation;
}

void BSLParser::OperationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperation(this);
}

void BSLParser::OperationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperation(this);
}

BSLParser::OperationContext* BSLParser::operation() {
  OperationContext *_localctx = _tracker.createInstance<OperationContext>(_ctx, getState());
  enterRule(_localctx, 164, BSLParser::RuleOperation);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(759);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BSLParser::PLUS: {
        enterOuterAlt(_localctx, 1);
        setState(752);
        match(BSLParser::PLUS);
        break;
      }

      case BSLParser::MINUS: {
        enterOuterAlt(_localctx, 2);
        setState(753);
        match(BSLParser::MINUS);
        break;
      }

      case BSLParser::MUL: {
        enterOuterAlt(_localctx, 3);
        setState(754);
        match(BSLParser::MUL);
        break;
      }

      case BSLParser::QUOTIENT: {
        enterOuterAlt(_localctx, 4);
        setState(755);
        match(BSLParser::QUOTIENT);
        break;
      }

      case BSLParser::MODULO: {
        enterOuterAlt(_localctx, 5);
        setState(756);
        match(BSLParser::MODULO);
        break;
      }

      case BSLParser::OR_KEYWORD:
      case BSLParser::AND_KEYWORD: {
        enterOuterAlt(_localctx, 6);
        setState(757);
        boolOperation();
        break;
      }

      case BSLParser::ASSIGN:
      case BSLParser::LESS_OR_EQUAL:
      case BSLParser::NOT_EQUAL:
      case BSLParser::LESS:
      case BSLParser::GREATER_OR_EQUAL:
      case BSLParser::GREATER: {
        enterOuterAlt(_localctx, 7);
        setState(758);
        compareOperation();
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

//----------------- CompareOperationContext ------------------------------------------------------------------

BSLParser::CompareOperationContext::CompareOperationContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BSLParser::CompareOperationContext::LESS() {
  return getToken(BSLParser::LESS, 0);
}

tree::TerminalNode* BSLParser::CompareOperationContext::LESS_OR_EQUAL() {
  return getToken(BSLParser::LESS_OR_EQUAL, 0);
}

tree::TerminalNode* BSLParser::CompareOperationContext::GREATER() {
  return getToken(BSLParser::GREATER, 0);
}

tree::TerminalNode* BSLParser::CompareOperationContext::GREATER_OR_EQUAL() {
  return getToken(BSLParser::GREATER_OR_EQUAL, 0);
}

tree::TerminalNode* BSLParser::CompareOperationContext::ASSIGN() {
  return getToken(BSLParser::ASSIGN, 0);
}

tree::TerminalNode* BSLParser::CompareOperationContext::NOT_EQUAL() {
  return getToken(BSLParser::NOT_EQUAL, 0);
}


size_t BSLParser::CompareOperationContext::getRuleIndex() const {
  return BSLParser::RuleCompareOperation;
}

void BSLParser::CompareOperationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompareOperation(this);
}

void BSLParser::CompareOperationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompareOperation(this);
}

BSLParser::CompareOperationContext* BSLParser::compareOperation() {
  CompareOperationContext *_localctx = _tracker.createInstance<CompareOperationContext>(_ctx, getState());
  enterRule(_localctx, 166, BSLParser::RuleCompareOperation);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(761);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << BSLParser::ASSIGN)
      | (1ULL << BSLParser::LESS_OR_EQUAL)
      | (1ULL << BSLParser::NOT_EQUAL)
      | (1ULL << BSLParser::LESS)
      | (1ULL << BSLParser::GREATER_OR_EQUAL)
      | (1ULL << BSLParser::GREATER))) != 0))) {
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

//----------------- BoolOperationContext ------------------------------------------------------------------

BSLParser::BoolOperationContext::BoolOperationContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BSLParser::BoolOperationContext::OR_KEYWORD() {
  return getToken(BSLParser::OR_KEYWORD, 0);
}

tree::TerminalNode* BSLParser::BoolOperationContext::AND_KEYWORD() {
  return getToken(BSLParser::AND_KEYWORD, 0);
}


size_t BSLParser::BoolOperationContext::getRuleIndex() const {
  return BSLParser::RuleBoolOperation;
}

void BSLParser::BoolOperationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBoolOperation(this);
}

void BSLParser::BoolOperationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBoolOperation(this);
}

BSLParser::BoolOperationContext* BSLParser::boolOperation() {
  BoolOperationContext *_localctx = _tracker.createInstance<BoolOperationContext>(_ctx, getState());
  enterRule(_localctx, 168, BSLParser::RuleBoolOperation);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(763);
    _la = _input->LA(1);
    if (!(_la == BSLParser::OR_KEYWORD

    || _la == BSLParser::AND_KEYWORD)) {
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

//----------------- UnaryModifierContext ------------------------------------------------------------------

BSLParser::UnaryModifierContext::UnaryModifierContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BSLParser::UnaryModifierContext::NOT_KEYWORD() {
  return getToken(BSLParser::NOT_KEYWORD, 0);
}

tree::TerminalNode* BSLParser::UnaryModifierContext::MINUS() {
  return getToken(BSLParser::MINUS, 0);
}

tree::TerminalNode* BSLParser::UnaryModifierContext::PLUS() {
  return getToken(BSLParser::PLUS, 0);
}


size_t BSLParser::UnaryModifierContext::getRuleIndex() const {
  return BSLParser::RuleUnaryModifier;
}

void BSLParser::UnaryModifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnaryModifier(this);
}

void BSLParser::UnaryModifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnaryModifier(this);
}

BSLParser::UnaryModifierContext* BSLParser::unaryModifier() {
  UnaryModifierContext *_localctx = _tracker.createInstance<UnaryModifierContext>(_ctx, getState());
  enterRule(_localctx, 170, BSLParser::RuleUnaryModifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(765);
    _la = _input->LA(1);
    if (!(((((_la - 12) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 12)) & ((1ULL << (BSLParser::PLUS - 12))
      | (1ULL << (BSLParser::MINUS - 12))
      | (1ULL << (BSLParser::NOT_KEYWORD - 12)))) != 0))) {
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

//----------------- MemberContext ------------------------------------------------------------------

BSLParser::MemberContext::MemberContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

BSLParser::ConstValueContext* BSLParser::MemberContext::constValue() {
  return getRuleContext<BSLParser::ConstValueContext>(0);
}

BSLParser::ComplexIdentifierContext* BSLParser::MemberContext::complexIdentifier() {
  return getRuleContext<BSLParser::ComplexIdentifierContext>(0);
}

BSLParser::UnaryModifierContext* BSLParser::MemberContext::unaryModifier() {
  return getRuleContext<BSLParser::UnaryModifierContext>(0);
}

tree::TerminalNode* BSLParser::MemberContext::WAIT_KEYWORD() {
  return getToken(BSLParser::WAIT_KEYWORD, 0);
}

tree::TerminalNode* BSLParser::MemberContext::LPAREN() {
  return getToken(BSLParser::LPAREN, 0);
}

BSLParser::ExpressionContext* BSLParser::MemberContext::expression() {
  return getRuleContext<BSLParser::ExpressionContext>(0);
}

tree::TerminalNode* BSLParser::MemberContext::RPAREN() {
  return getToken(BSLParser::RPAREN, 0);
}

tree::TerminalNode* BSLParser::MemberContext::IDENTIFIER() {
  return getToken(BSLParser::IDENTIFIER, 0);
}

BSLParser::GlobalMethodCallContext* BSLParser::MemberContext::globalMethodCall() {
  return getRuleContext<BSLParser::GlobalMethodCallContext>(0);
}

std::vector<BSLParser::ModifierContext *> BSLParser::MemberContext::modifier() {
  return getRuleContexts<BSLParser::ModifierContext>();
}

BSLParser::ModifierContext* BSLParser::MemberContext::modifier(size_t i) {
  return getRuleContext<BSLParser::ModifierContext>(i);
}


size_t BSLParser::MemberContext::getRuleIndex() const {
  return BSLParser::RuleMember;
}

void BSLParser::MemberContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMember(this);
}

void BSLParser::MemberContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMember(this);
}

BSLParser::MemberContext* BSLParser::member() {
  MemberContext *_localctx = _tracker.createInstance<MemberContext>(_ctx, getState());
  enterRule(_localctx, 172, BSLParser::RuleMember);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(768);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 78, _ctx)) {
    case 1: {
      setState(767);
      unaryModifier();
      break;
    }

    }
    setState(787);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BSLParser::PLUS:
      case BSLParser::MINUS:
      case BSLParser::TRUE:
      case BSLParser::FALSE:
      case BSLParser::UNDEFINED:
      case BSLParser::IS_NULL:
      case BSLParser::DECIMAL:
      case BSLParser::DATETIME:
      case BSLParser::FLOAT:
      case BSLParser::STRING:
      case BSLParser::STRINGSTART: {
        setState(770);
        constValue();
        break;
      }

      case BSLParser::QUESTION:
      case BSLParser::NEW_KEYWORD:
      case BSLParser::IDENTIFIER: {
        setState(771);
        complexIdentifier();
        break;
      }

      case BSLParser::LPAREN: {
        setState(772);
        match(BSLParser::LPAREN);
        setState(773);
        expression();
        setState(774);
        match(BSLParser::RPAREN);
        setState(779);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == BSLParser::DOT

        || _la == BSLParser::LBRACK) {
          setState(776);
          modifier();
          setState(781);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        break;
      }

      case BSLParser::WAIT_KEYWORD: {
        setState(782);
        match(BSLParser::WAIT_KEYWORD);
        setState(785);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 80, _ctx)) {
        case 1: {
          setState(783);
          match(BSLParser::IDENTIFIER);
          break;
        }

        case 2: {
          setState(784);
          globalMethodCall();
          break;
        }

        }
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

//----------------- NewExpressionContext ------------------------------------------------------------------

BSLParser::NewExpressionContext::NewExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BSLParser::NewExpressionContext::NEW_KEYWORD() {
  return getToken(BSLParser::NEW_KEYWORD, 0);
}

BSLParser::TypeNameContext* BSLParser::NewExpressionContext::typeName() {
  return getRuleContext<BSLParser::TypeNameContext>(0);
}

BSLParser::DoCallContext* BSLParser::NewExpressionContext::doCall() {
  return getRuleContext<BSLParser::DoCallContext>(0);
}


size_t BSLParser::NewExpressionContext::getRuleIndex() const {
  return BSLParser::RuleNewExpression;
}

void BSLParser::NewExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNewExpression(this);
}

void BSLParser::NewExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNewExpression(this);
}

BSLParser::NewExpressionContext* BSLParser::newExpression() {
  NewExpressionContext *_localctx = _tracker.createInstance<NewExpressionContext>(_ctx, getState());
  enterRule(_localctx, 174, BSLParser::RuleNewExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(796);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 83, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(789);
      match(BSLParser::NEW_KEYWORD);
      setState(790);
      typeName();
      setState(792);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == BSLParser::LPAREN) {
        setState(791);
        doCall();
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(794);
      match(BSLParser::NEW_KEYWORD);
      setState(795);
      doCall();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeNameContext ------------------------------------------------------------------

BSLParser::TypeNameContext::TypeNameContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BSLParser::TypeNameContext::IDENTIFIER() {
  return getToken(BSLParser::IDENTIFIER, 0);
}


size_t BSLParser::TypeNameContext::getRuleIndex() const {
  return BSLParser::RuleTypeName;
}

void BSLParser::TypeNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeName(this);
}

void BSLParser::TypeNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeName(this);
}

BSLParser::TypeNameContext* BSLParser::typeName() {
  TypeNameContext *_localctx = _tracker.createInstance<TypeNameContext>(_ctx, getState());
  enterRule(_localctx, 176, BSLParser::RuleTypeName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(798);
    match(BSLParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MethodCallContext ------------------------------------------------------------------

BSLParser::MethodCallContext::MethodCallContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

BSLParser::MethodNameContext* BSLParser::MethodCallContext::methodName() {
  return getRuleContext<BSLParser::MethodNameContext>(0);
}

BSLParser::DoCallContext* BSLParser::MethodCallContext::doCall() {
  return getRuleContext<BSLParser::DoCallContext>(0);
}


size_t BSLParser::MethodCallContext::getRuleIndex() const {
  return BSLParser::RuleMethodCall;
}

void BSLParser::MethodCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethodCall(this);
}

void BSLParser::MethodCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethodCall(this);
}

BSLParser::MethodCallContext* BSLParser::methodCall() {
  MethodCallContext *_localctx = _tracker.createInstance<MethodCallContext>(_ctx, getState());
  enterRule(_localctx, 178, BSLParser::RuleMethodCall);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(800);
    methodName();
    setState(801);
    doCall();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GlobalMethodCallContext ------------------------------------------------------------------

BSLParser::GlobalMethodCallContext::GlobalMethodCallContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

BSLParser::MethodNameContext* BSLParser::GlobalMethodCallContext::methodName() {
  return getRuleContext<BSLParser::MethodNameContext>(0);
}

BSLParser::DoCallContext* BSLParser::GlobalMethodCallContext::doCall() {
  return getRuleContext<BSLParser::DoCallContext>(0);
}


size_t BSLParser::GlobalMethodCallContext::getRuleIndex() const {
  return BSLParser::RuleGlobalMethodCall;
}

void BSLParser::GlobalMethodCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGlobalMethodCall(this);
}

void BSLParser::GlobalMethodCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGlobalMethodCall(this);
}

BSLParser::GlobalMethodCallContext* BSLParser::globalMethodCall() {
  GlobalMethodCallContext *_localctx = _tracker.createInstance<GlobalMethodCallContext>(_ctx, getState());
  enterRule(_localctx, 180, BSLParser::RuleGlobalMethodCall);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(803);
    methodName();
    setState(804);
    doCall();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MethodNameContext ------------------------------------------------------------------

BSLParser::MethodNameContext::MethodNameContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BSLParser::MethodNameContext::IDENTIFIER() {
  return getToken(BSLParser::IDENTIFIER, 0);
}


size_t BSLParser::MethodNameContext::getRuleIndex() const {
  return BSLParser::RuleMethodName;
}

void BSLParser::MethodNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethodName(this);
}

void BSLParser::MethodNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethodName(this);
}

BSLParser::MethodNameContext* BSLParser::methodName() {
  MethodNameContext *_localctx = _tracker.createInstance<MethodNameContext>(_ctx, getState());
  enterRule(_localctx, 182, BSLParser::RuleMethodName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(806);
    match(BSLParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ComplexIdentifierContext ------------------------------------------------------------------

BSLParser::ComplexIdentifierContext::ComplexIdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BSLParser::ComplexIdentifierContext::IDENTIFIER() {
  return getToken(BSLParser::IDENTIFIER, 0);
}

BSLParser::NewExpressionContext* BSLParser::ComplexIdentifierContext::newExpression() {
  return getRuleContext<BSLParser::NewExpressionContext>(0);
}

BSLParser::TernaryOperatorContext* BSLParser::ComplexIdentifierContext::ternaryOperator() {
  return getRuleContext<BSLParser::TernaryOperatorContext>(0);
}

BSLParser::GlobalMethodCallContext* BSLParser::ComplexIdentifierContext::globalMethodCall() {
  return getRuleContext<BSLParser::GlobalMethodCallContext>(0);
}

std::vector<BSLParser::ModifierContext *> BSLParser::ComplexIdentifierContext::modifier() {
  return getRuleContexts<BSLParser::ModifierContext>();
}

BSLParser::ModifierContext* BSLParser::ComplexIdentifierContext::modifier(size_t i) {
  return getRuleContext<BSLParser::ModifierContext>(i);
}


size_t BSLParser::ComplexIdentifierContext::getRuleIndex() const {
  return BSLParser::RuleComplexIdentifier;
}

void BSLParser::ComplexIdentifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComplexIdentifier(this);
}

void BSLParser::ComplexIdentifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComplexIdentifier(this);
}

BSLParser::ComplexIdentifierContext* BSLParser::complexIdentifier() {
  ComplexIdentifierContext *_localctx = _tracker.createInstance<ComplexIdentifierContext>(_ctx, getState());
  enterRule(_localctx, 184, BSLParser::RuleComplexIdentifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(812);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 84, _ctx)) {
    case 1: {
      setState(808);
      match(BSLParser::IDENTIFIER);
      break;
    }

    case 2: {
      setState(809);
      newExpression();
      break;
    }

    case 3: {
      setState(810);
      ternaryOperator();
      break;
    }

    case 4: {
      setState(811);
      globalMethodCall();
      break;
    }

    }
    setState(817);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BSLParser::DOT

    || _la == BSLParser::LBRACK) {
      setState(814);
      modifier();
      setState(819);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ModifierContext ------------------------------------------------------------------

BSLParser::ModifierContext::ModifierContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

BSLParser::AccessPropertyContext* BSLParser::ModifierContext::accessProperty() {
  return getRuleContext<BSLParser::AccessPropertyContext>(0);
}

BSLParser::AccessIndexContext* BSLParser::ModifierContext::accessIndex() {
  return getRuleContext<BSLParser::AccessIndexContext>(0);
}

BSLParser::AccessCallContext* BSLParser::ModifierContext::accessCall() {
  return getRuleContext<BSLParser::AccessCallContext>(0);
}


size_t BSLParser::ModifierContext::getRuleIndex() const {
  return BSLParser::RuleModifier;
}

void BSLParser::ModifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterModifier(this);
}

void BSLParser::ModifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitModifier(this);
}

BSLParser::ModifierContext* BSLParser::modifier() {
  ModifierContext *_localctx = _tracker.createInstance<ModifierContext>(_ctx, getState());
  enterRule(_localctx, 186, BSLParser::RuleModifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(823);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 86, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(820);
      accessProperty();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(821);
      accessIndex();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(822);
      accessCall();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AcceptorContext ------------------------------------------------------------------

BSLParser::AcceptorContext::AcceptorContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

BSLParser::AccessPropertyContext* BSLParser::AcceptorContext::accessProperty() {
  return getRuleContext<BSLParser::AccessPropertyContext>(0);
}

BSLParser::AccessIndexContext* BSLParser::AcceptorContext::accessIndex() {
  return getRuleContext<BSLParser::AccessIndexContext>(0);
}

std::vector<BSLParser::ModifierContext *> BSLParser::AcceptorContext::modifier() {
  return getRuleContexts<BSLParser::ModifierContext>();
}

BSLParser::ModifierContext* BSLParser::AcceptorContext::modifier(size_t i) {
  return getRuleContext<BSLParser::ModifierContext>(i);
}


size_t BSLParser::AcceptorContext::getRuleIndex() const {
  return BSLParser::RuleAcceptor;
}

void BSLParser::AcceptorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAcceptor(this);
}

void BSLParser::AcceptorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAcceptor(this);
}

BSLParser::AcceptorContext* BSLParser::acceptor() {
  AcceptorContext *_localctx = _tracker.createInstance<AcceptorContext>(_ctx, getState());
  enterRule(_localctx, 188, BSLParser::RuleAcceptor);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(828);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 87, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(825);
        modifier(); 
      }
      setState(830);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 87, _ctx);
    }
    setState(833);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BSLParser::DOT: {
        setState(831);
        accessProperty();
        break;
      }

      case BSLParser::LBRACK: {
        setState(832);
        accessIndex();
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

//----------------- LValueContext ------------------------------------------------------------------

BSLParser::LValueContext::LValueContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BSLParser::LValueContext::IDENTIFIER() {
  return getToken(BSLParser::IDENTIFIER, 0);
}

BSLParser::GlobalMethodCallContext* BSLParser::LValueContext::globalMethodCall() {
  return getRuleContext<BSLParser::GlobalMethodCallContext>(0);
}

BSLParser::AcceptorContext* BSLParser::LValueContext::acceptor() {
  return getRuleContext<BSLParser::AcceptorContext>(0);
}


size_t BSLParser::LValueContext::getRuleIndex() const {
  return BSLParser::RuleLValue;
}

void BSLParser::LValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLValue(this);
}

void BSLParser::LValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLValue(this);
}

BSLParser::LValueContext* BSLParser::lValue() {
  LValueContext *_localctx = _tracker.createInstance<LValueContext>(_ctx, getState());
  enterRule(_localctx, 190, BSLParser::RuleLValue);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(837);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 89, _ctx)) {
    case 1: {
      setState(835);
      match(BSLParser::IDENTIFIER);
      break;
    }

    case 2: {
      setState(836);
      globalMethodCall();
      break;
    }

    }
    setState(840);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BSLParser::DOT

    || _la == BSLParser::LBRACK) {
      setState(839);
      acceptor();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AccessCallContext ------------------------------------------------------------------

BSLParser::AccessCallContext::AccessCallContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BSLParser::AccessCallContext::DOT() {
  return getToken(BSLParser::DOT, 0);
}

BSLParser::MethodCallContext* BSLParser::AccessCallContext::methodCall() {
  return getRuleContext<BSLParser::MethodCallContext>(0);
}


size_t BSLParser::AccessCallContext::getRuleIndex() const {
  return BSLParser::RuleAccessCall;
}

void BSLParser::AccessCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAccessCall(this);
}

void BSLParser::AccessCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAccessCall(this);
}

BSLParser::AccessCallContext* BSLParser::accessCall() {
  AccessCallContext *_localctx = _tracker.createInstance<AccessCallContext>(_ctx, getState());
  enterRule(_localctx, 192, BSLParser::RuleAccessCall);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(842);
    match(BSLParser::DOT);
    setState(843);
    methodCall();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AccessIndexContext ------------------------------------------------------------------

BSLParser::AccessIndexContext::AccessIndexContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BSLParser::AccessIndexContext::LBRACK() {
  return getToken(BSLParser::LBRACK, 0);
}

BSLParser::ExpressionContext* BSLParser::AccessIndexContext::expression() {
  return getRuleContext<BSLParser::ExpressionContext>(0);
}

tree::TerminalNode* BSLParser::AccessIndexContext::RBRACK() {
  return getToken(BSLParser::RBRACK, 0);
}


size_t BSLParser::AccessIndexContext::getRuleIndex() const {
  return BSLParser::RuleAccessIndex;
}

void BSLParser::AccessIndexContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAccessIndex(this);
}

void BSLParser::AccessIndexContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAccessIndex(this);
}

BSLParser::AccessIndexContext* BSLParser::accessIndex() {
  AccessIndexContext *_localctx = _tracker.createInstance<AccessIndexContext>(_ctx, getState());
  enterRule(_localctx, 194, BSLParser::RuleAccessIndex);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(845);
    match(BSLParser::LBRACK);
    setState(846);
    expression();
    setState(847);
    match(BSLParser::RBRACK);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AccessPropertyContext ------------------------------------------------------------------

BSLParser::AccessPropertyContext::AccessPropertyContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BSLParser::AccessPropertyContext::DOT() {
  return getToken(BSLParser::DOT, 0);
}

tree::TerminalNode* BSLParser::AccessPropertyContext::IDENTIFIER() {
  return getToken(BSLParser::IDENTIFIER, 0);
}


size_t BSLParser::AccessPropertyContext::getRuleIndex() const {
  return BSLParser::RuleAccessProperty;
}

void BSLParser::AccessPropertyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAccessProperty(this);
}

void BSLParser::AccessPropertyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAccessProperty(this);
}

BSLParser::AccessPropertyContext* BSLParser::accessProperty() {
  AccessPropertyContext *_localctx = _tracker.createInstance<AccessPropertyContext>(_ctx, getState());
  enterRule(_localctx, 196, BSLParser::RuleAccessProperty);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(849);
    match(BSLParser::DOT);
    setState(850);
    match(BSLParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DoCallContext ------------------------------------------------------------------

BSLParser::DoCallContext::DoCallContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BSLParser::DoCallContext::LPAREN() {
  return getToken(BSLParser::LPAREN, 0);
}

BSLParser::CallParamListContext* BSLParser::DoCallContext::callParamList() {
  return getRuleContext<BSLParser::CallParamListContext>(0);
}

tree::TerminalNode* BSLParser::DoCallContext::RPAREN() {
  return getToken(BSLParser::RPAREN, 0);
}


size_t BSLParser::DoCallContext::getRuleIndex() const {
  return BSLParser::RuleDoCall;
}

void BSLParser::DoCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDoCall(this);
}

void BSLParser::DoCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDoCall(this);
}

BSLParser::DoCallContext* BSLParser::doCall() {
  DoCallContext *_localctx = _tracker.createInstance<DoCallContext>(_ctx, getState());
  enterRule(_localctx, 198, BSLParser::RuleDoCall);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(852);
    match(BSLParser::LPAREN);
    setState(853);
    callParamList();
    setState(854);
    match(BSLParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CompoundStatementContext ------------------------------------------------------------------

BSLParser::CompoundStatementContext::CompoundStatementContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

BSLParser::IfStatementContext* BSLParser::CompoundStatementContext::ifStatement() {
  return getRuleContext<BSLParser::IfStatementContext>(0);
}

BSLParser::WhileStatementContext* BSLParser::CompoundStatementContext::whileStatement() {
  return getRuleContext<BSLParser::WhileStatementContext>(0);
}

BSLParser::ForStatementContext* BSLParser::CompoundStatementContext::forStatement() {
  return getRuleContext<BSLParser::ForStatementContext>(0);
}

BSLParser::ForEachStatementContext* BSLParser::CompoundStatementContext::forEachStatement() {
  return getRuleContext<BSLParser::ForEachStatementContext>(0);
}

BSLParser::TryStatementContext* BSLParser::CompoundStatementContext::tryStatement() {
  return getRuleContext<BSLParser::TryStatementContext>(0);
}

BSLParser::ReturnStatementContext* BSLParser::CompoundStatementContext::returnStatement() {
  return getRuleContext<BSLParser::ReturnStatementContext>(0);
}

BSLParser::ContinueStatementContext* BSLParser::CompoundStatementContext::continueStatement() {
  return getRuleContext<BSLParser::ContinueStatementContext>(0);
}

BSLParser::BreakStatementContext* BSLParser::CompoundStatementContext::breakStatement() {
  return getRuleContext<BSLParser::BreakStatementContext>(0);
}

BSLParser::RaiseStatementContext* BSLParser::CompoundStatementContext::raiseStatement() {
  return getRuleContext<BSLParser::RaiseStatementContext>(0);
}

BSLParser::ExecuteStatementContext* BSLParser::CompoundStatementContext::executeStatement() {
  return getRuleContext<BSLParser::ExecuteStatementContext>(0);
}

BSLParser::GotoStatementContext* BSLParser::CompoundStatementContext::gotoStatement() {
  return getRuleContext<BSLParser::GotoStatementContext>(0);
}

BSLParser::AddHandlerStatementContext* BSLParser::CompoundStatementContext::addHandlerStatement() {
  return getRuleContext<BSLParser::AddHandlerStatementContext>(0);
}

BSLParser::RemoveHandlerStatementContext* BSLParser::CompoundStatementContext::removeHandlerStatement() {
  return getRuleContext<BSLParser::RemoveHandlerStatementContext>(0);
}


size_t BSLParser::CompoundStatementContext::getRuleIndex() const {
  return BSLParser::RuleCompoundStatement;
}

void BSLParser::CompoundStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompoundStatement(this);
}

void BSLParser::CompoundStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompoundStatement(this);
}

BSLParser::CompoundStatementContext* BSLParser::compoundStatement() {
  CompoundStatementContext *_localctx = _tracker.createInstance<CompoundStatementContext>(_ctx, getState());
  enterRule(_localctx, 200, BSLParser::RuleCompoundStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(869);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 91, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(856);
      ifStatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(857);
      whileStatement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(858);
      forStatement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(859);
      forEachStatement();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(860);
      tryStatement();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(861);
      returnStatement();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(862);
      continueStatement();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(863);
      breakStatement();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(864);
      raiseStatement();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(865);
      executeStatement();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(866);
      gotoStatement();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(867);
      addHandlerStatement();
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(868);
      removeHandlerStatement();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> BSLParser::_decisionToDFA;
atn::PredictionContextCache BSLParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN BSLParser::_atn;
std::vector<uint16_t> BSLParser::_serializedATN;

std::vector<std::string> BSLParser::_ruleNames = {
  "file", "shebang", "usedLib", "use", "regionStart", "regionEnd", "regionName", 
  "preproc_if", "preproc_elsif", "preproc_else", "preproc_endif", "preproc_expression", 
  "preproc_logicalOperand", "preproc_logicalExpression", "preproc_symbol", 
  "preproc_unknownSymbol", "preproc_boolOperation", "preprocessor", "compilerDirectiveSymbol", 
  "compilerDirective", "annotationName", "annotationParamName", "annotation", 
  "annotationParams", "annotationParam", "var_name", "moduleVars", "moduleVar", 
  "moduleVarsList", "moduleVarDeclaration", "subVars", "subVar", "subVarsList", 
  "subVarDeclaration", "subName", "subs", "sub", "procedure", "function", 
  "procDeclaration", "funcDeclaration", "subCodeBlock", "continueStatement", 
  "breakStatement", "raiseStatement", "ifStatement", "ifBranch", "elsifBranch", 
  "elseBranch", "whileStatement", "forStatement", "forEachStatement", "tryStatement", 
  "returnStatement", "executeStatement", "callStatement", "waitStatement", 
  "labelName", "label", "gotoStatement", "tryCodeBlock", "exceptCodeBlock", 
  "event", "handler", "addHandlerStatement", "removeHandlerStatement", "ternaryOperator", 
  "fileCodeBlockBeforeSub", "fileCodeBlock", "codeBlock", "numeric", "paramList", 
  "param", "defaultValue", "constValue", "multilineString", "string", "statement", 
  "assignment", "callParamList", "callParam", "expression", "operation", 
  "compareOperation", "boolOperation", "unaryModifier", "member", "newExpression", 
  "typeName", "methodCall", "globalMethodCall", "methodName", "complexIdentifier", 
  "modifier", "acceptor", "lValue", "accessCall", "accessIndex", "accessProperty", 
  "doCall", "compoundStatement"
};

std::vector<std::string> BSLParser::_literalNames = {
  "", "", "", "'.'", "'['", "']'", "", "", "':'", "';'", "','", "'='", "'+'", 
  "'-'", "'<='", "'<>'", "'<'", "'>='", "'>'", "'*'", "'/'", "'%'", "'?'", 
  "'&'", "", "", "", "'#'", "'|'", "'~'", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "'!'"
};

std::vector<std::string> BSLParser::_symbolicNames = {
  "", "LINE_COMMENT", "WHITE_SPACE", "DOT", "LBRACK", "RBRACK", "LPAREN", 
  "RPAREN", "COLON", "SEMICOLON", "COMMA", "ASSIGN", "PLUS", "MINUS", "LESS_OR_EQUAL", 
  "NOT_EQUAL", "LESS", "GREATER_OR_EQUAL", "GREATER", "MUL", "QUOTIENT", 
  "MODULO", "QUESTION", "AMPERSAND", "PREPROC_DELETE", "PREPROC_INSERT", 
  "PREPROC_ENDINSERT", "HASH", "BAR", "TILDA", "TRUE", "FALSE", "UNDEFINED", 
  "IS_NULL", "DECIMAL", "DATETIME", "FLOAT", "STRING", "STRINGSTART", "STRINGTAIL", 
  "STRINGPART", "PROCEDURE_KEYWORD", "FUNCTION_KEYWORD", "ENDPROCEDURE_KEYWORD", 
  "ENDFUNCTION_KEYWORD", "EXPORT_KEYWORD", "VAL_KEYWORD", "ENDIF_KEYWORD", 
  "ENDDO_KEYWORD", "IF_KEYWORD", "ELSIF_KEYWORD", "ELSE_KEYWORD", "THEN_KEYWORD", 
  "WHILE_KEYWORD", "DO_KEYWORD", "FOR_KEYWORD", "TO_KEYWORD", "EACH_KEYWORD", 
  "IN_KEYWORD", "TRY_KEYWORD", "EXCEPT_KEYWORD", "ENDTRY_KEYWORD", "RETURN_KEYWORD", 
  "CONTINUE_KEYWORD", "RAISE_KEYWORD", "VAR_KEYWORD", "NOT_KEYWORD", "OR_KEYWORD", 
  "AND_KEYWORD", "NEW_KEYWORD", "GOTO_KEYWORD", "BREAK_KEYWORD", "EXECUTE_KEYWORD", 
  "ADDHANDLER_KEYWORD", "REMOVEHANDLER_KEYWORD", "ASYNC_KEYWORD", "IDENTIFIER", 
  "UNKNOWN", "PREPROC_EXCLAMATION_MARK", "PREPROC_LPAREN", "PREPROC_RPAREN", 
  "PREPROC_STRING", "PREPROC_USE_KEYWORD", "PREPROC_REGION", "PREPROC_END_REGION", 
  "PREPROC_NOT_KEYWORD", "PREPROC_OR_KEYWORD", "PREPROC_AND_KEYWORD", "PREPROC_IF_KEYWORD", 
  "PREPROC_THEN_KEYWORD", "PREPROC_ELSIF_KEYWORD", "PREPROC_ENDIF_KEYWORD", 
  "PREPROC_ELSE_KEYWORD", "PREPROC_MOBILEAPPCLIENT_SYMBOL", "PREPROC_MOBILEAPPSERVER_SYMBOL", 
  "PREPROC_MOBILECLIENT_SYMBOL", "PREPROC_THICKCLIENTORDINARYAPPLICATION_SYMBOL", 
  "PREPROC_THICKCLIENTMANAGEDAPPLICATION_SYMBOL", "PREPROC_EXTERNALCONNECTION_SYMBOL", 
  "PREPROC_THINCLIENT_SYMBOL", "PREPROC_WEBCLIENT_SYMBOL", "PREPROC_ATCLIENT_SYMBOL", 
  "PREPROC_CLIENT_SYMBOL", "PREPROC_ATSERVER_SYMBOL", "PREPROC_SERVER_SYMBOL", 
  "PREPROC_LINUX", "PREPROC_WINDOWS", "PREPROC_MACOS", "PREPROC_IDENTIFIER", 
  "PREPROC_LINE_COMMENT", "PREPROC_NEWLINE", "PREPROC_ANY", "ANNOTATION_ATSERVERNOCONTEXT_SYMBOL", 
  "ANNOTATION_ATCLIENTATSERVERNOCONTEXT_SYMBOL", "ANNOTATION_ATCLIENTATSERVER_SYMBOL", 
  "ANNOTATION_ATCLIENT_SYMBOL", "ANNOTATION_ATSERVER_SYMBOL", "ANNOTATION_BEFORE_SYMBOL", 
  "ANNOTATION_AFTER_SYMBOL", "ANNOTATION_AROUND_SYMBOL", "ANNOTATION_CHANGEANDVALIDATE_SYMBOL", 
  "ANNOTATION_CUSTOM_SYMBOL", "ANNOTATION_UNKNOWN", "PREPROC_ENDDELETE", 
  "PREPROC_DELETE_ANY", "WAIT_KEYWORD"
};

dfa::Vocabulary BSLParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> BSLParser::_tokenNames;

BSLParser::Initializer::Initializer() {
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
    0x3, 0x7f, 0x36a, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 
    0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 
    0x9, 0x22, 0x4, 0x23, 0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 
    0x25, 0x4, 0x26, 0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x4, 0x28, 0x9, 0x28, 
    0x4, 0x29, 0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x4, 0x2b, 0x9, 0x2b, 0x4, 
    0x2c, 0x9, 0x2c, 0x4, 0x2d, 0x9, 0x2d, 0x4, 0x2e, 0x9, 0x2e, 0x4, 0x2f, 
    0x9, 0x2f, 0x4, 0x30, 0x9, 0x30, 0x4, 0x31, 0x9, 0x31, 0x4, 0x32, 0x9, 
    0x32, 0x4, 0x33, 0x9, 0x33, 0x4, 0x34, 0x9, 0x34, 0x4, 0x35, 0x9, 0x35, 
    0x4, 0x36, 0x9, 0x36, 0x4, 0x37, 0x9, 0x37, 0x4, 0x38, 0x9, 0x38, 0x4, 
    0x39, 0x9, 0x39, 0x4, 0x3a, 0x9, 0x3a, 0x4, 0x3b, 0x9, 0x3b, 0x4, 0x3c, 
    0x9, 0x3c, 0x4, 0x3d, 0x9, 0x3d, 0x4, 0x3e, 0x9, 0x3e, 0x4, 0x3f, 0x9, 
    0x3f, 0x4, 0x40, 0x9, 0x40, 0x4, 0x41, 0x9, 0x41, 0x4, 0x42, 0x9, 0x42, 
    0x4, 0x43, 0x9, 0x43, 0x4, 0x44, 0x9, 0x44, 0x4, 0x45, 0x9, 0x45, 0x4, 
    0x46, 0x9, 0x46, 0x4, 0x47, 0x9, 0x47, 0x4, 0x48, 0x9, 0x48, 0x4, 0x49, 
    0x9, 0x49, 0x4, 0x4a, 0x9, 0x4a, 0x4, 0x4b, 0x9, 0x4b, 0x4, 0x4c, 0x9, 
    0x4c, 0x4, 0x4d, 0x9, 0x4d, 0x4, 0x4e, 0x9, 0x4e, 0x4, 0x4f, 0x9, 0x4f, 
    0x4, 0x50, 0x9, 0x50, 0x4, 0x51, 0x9, 0x51, 0x4, 0x52, 0x9, 0x52, 0x4, 
    0x53, 0x9, 0x53, 0x4, 0x54, 0x9, 0x54, 0x4, 0x55, 0x9, 0x55, 0x4, 0x56, 
    0x9, 0x56, 0x4, 0x57, 0x9, 0x57, 0x4, 0x58, 0x9, 0x58, 0x4, 0x59, 0x9, 
    0x59, 0x4, 0x5a, 0x9, 0x5a, 0x4, 0x5b, 0x9, 0x5b, 0x4, 0x5c, 0x9, 0x5c, 
    0x4, 0x5d, 0x9, 0x5d, 0x4, 0x5e, 0x9, 0x5e, 0x4, 0x5f, 0x9, 0x5f, 0x4, 
    0x60, 0x9, 0x60, 0x4, 0x61, 0x9, 0x61, 0x4, 0x62, 0x9, 0x62, 0x4, 0x63, 
    0x9, 0x63, 0x4, 0x64, 0x9, 0x64, 0x4, 0x65, 0x9, 0x65, 0x4, 0x66, 0x9, 
    0x66, 0x3, 0x2, 0x5, 0x2, 0xce, 0xa, 0x2, 0x3, 0x2, 0x7, 0x2, 0xd1, 
    0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0xd4, 0xb, 0x2, 0x3, 0x2, 0x5, 0x2, 0xd7, 
    0xa, 0x2, 0x3, 0x2, 0x7, 0x2, 0xda, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0xdd, 
    0xb, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x5, 0x2, 0xe2, 0xa, 0x2, 0x3, 
    0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0xea, 
    0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0xed, 0xb, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 
    0xc, 0x3, 0xd, 0x5, 0xd, 0x108, 0xa, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 
    0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0x10f, 0xa, 0xd, 0x3, 0xe, 0x3, 0xe, 0x5, 
    0xe, 0x113, 0xa, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 
    0x119, 0xa, 0xe, 0x3, 0xe, 0x5, 0xe, 0x11c, 0xa, 0xe, 0x3, 0xf, 0x3, 
    0xf, 0x3, 0xf, 0x3, 0xf, 0x7, 0xf, 0x122, 0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 
    0x125, 0xb, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 
    0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 
    0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0x137, 
    0xa, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 0x3, 
    0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 
    0x5, 0x13, 0x145, 0xa, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x15, 0x3, 0x15, 
    0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x18, 0x3, 
    0x18, 0x3, 0x18, 0x5, 0x18, 0x153, 0xa, 0x18, 0x3, 0x19, 0x3, 0x19, 
    0x3, 0x19, 0x3, 0x19, 0x7, 0x19, 0x159, 0xa, 0x19, 0xc, 0x19, 0xe, 0x19, 
    0x15c, 0xb, 0x19, 0x5, 0x19, 0x15e, 0xa, 0x19, 0x3, 0x19, 0x3, 0x19, 
    0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x5, 0x1a, 0x165, 0xa, 0x1a, 0x3, 0x1a, 
    0x5, 0x1a, 0x168, 0xa, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1c, 0x6, 0x1c, 
    0x16d, 0xa, 0x1c, 0xd, 0x1c, 0xe, 0x1c, 0x16e, 0x3, 0x1d, 0x3, 0x1d, 
    0x3, 0x1d, 0x7, 0x1d, 0x174, 0xa, 0x1d, 0xc, 0x1d, 0xe, 0x1d, 0x177, 
    0xb, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x5, 0x1d, 0x17c, 0xa, 0x1d, 
    0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x7, 0x1e, 0x181, 0xa, 0x1e, 0xc, 0x1e, 
    0xe, 0x1e, 0x184, 0xb, 0x1e, 0x3, 0x1f, 0x3, 0x1f, 0x5, 0x1f, 0x188, 
    0xa, 0x1f, 0x3, 0x20, 0x6, 0x20, 0x18b, 0xa, 0x20, 0xd, 0x20, 0xe, 0x20, 
    0x18c, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x7, 0x21, 0x192, 0xa, 0x21, 
    0xc, 0x21, 0xe, 0x21, 0x195, 0xb, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 
    0x5, 0x21, 0x19a, 0xa, 0x21, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x7, 0x22, 
    0x19f, 0xa, 0x22, 0xc, 0x22, 0xe, 0x22, 0x1a2, 0xb, 0x22, 0x3, 0x23, 
    0x3, 0x23, 0x3, 0x24, 0x3, 0x24, 0x3, 0x25, 0x6, 0x25, 0x1a9, 0xa, 0x25, 
    0xd, 0x25, 0xe, 0x25, 0x1aa, 0x3, 0x26, 0x3, 0x26, 0x5, 0x26, 0x1af, 
    0xa, 0x26, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x28, 0x3, 
    0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x7, 0x29, 
    0x1bc, 0xa, 0x29, 0xc, 0x29, 0xe, 0x29, 0x1bf, 0xb, 0x29, 0x3, 0x29, 
    0x5, 0x29, 0x1c2, 0xa, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 
    0x5, 0x29, 0x1c8, 0xa, 0x29, 0x3, 0x29, 0x3, 0x29, 0x5, 0x29, 0x1cc, 
    0xa, 0x29, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x7, 0x2a, 0x1d1, 0xa, 0x2a, 
    0xc, 0x2a, 0xe, 0x2a, 0x1d4, 0xb, 0x2a, 0x3, 0x2a, 0x5, 0x2a, 0x1d7, 
    0xa, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x5, 0x2a, 0x1dd, 
    0xa, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x5, 0x2a, 0x1e1, 0xa, 0x2a, 0x3, 0x2b, 
    0x5, 0x2b, 0x1e4, 0xa, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2c, 0x3, 0x2c, 
    0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2e, 0x3, 0x2e, 0x5, 0x2e, 0x1ee, 0xa, 0x2e, 
    0x3, 0x2f, 0x3, 0x2f, 0x7, 0x2f, 0x1f2, 0xa, 0x2f, 0xc, 0x2f, 0xe, 0x2f, 
    0x1f5, 0xb, 0x2f, 0x3, 0x2f, 0x5, 0x2f, 0x1f8, 0xa, 0x2f, 0x3, 0x2f, 
    0x3, 0x2f, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 
    0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x32, 0x3, 0x32, 
    0x3, 0x32, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 
    0x33, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 
    0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x35, 0x3, 0x35, 0x3, 
    0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 
    0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 
    0x37, 0x3, 0x37, 0x5, 0x37, 0x22a, 0xa, 0x37, 0x3, 0x38, 0x3, 0x38, 
    0x3, 0x38, 0x5, 0x38, 0x22f, 0xa, 0x38, 0x3, 0x39, 0x5, 0x39, 0x232, 
    0xa, 0x39, 0x3, 0x39, 0x3, 0x39, 0x5, 0x39, 0x236, 0xa, 0x39, 0x3, 0x39, 
    0x7, 0x39, 0x239, 0xa, 0x39, 0xc, 0x39, 0xe, 0x39, 0x23c, 0xb, 0x39, 
    0x3, 0x39, 0x3, 0x39, 0x5, 0x39, 0x240, 0xa, 0x39, 0x3, 0x3a, 0x3, 0x3a, 
    0x3, 0x3a, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 
    0x3c, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3e, 0x3, 0x3e, 
    0x3, 0x3f, 0x3, 0x3f, 0x3, 0x40, 0x3, 0x40, 0x3, 0x41, 0x3, 0x41, 0x3, 
    0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x43, 0x3, 0x43, 
    0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 
    0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x45, 
    0x3, 0x45, 0x3, 0x46, 0x3, 0x46, 0x3, 0x47, 0x3, 0x47, 0x7, 0x47, 0x270, 
    0xa, 0x47, 0xc, 0x47, 0xe, 0x47, 0x273, 0xb, 0x47, 0x3, 0x48, 0x3, 0x48, 
    0x3, 0x49, 0x3, 0x49, 0x3, 0x49, 0x7, 0x49, 0x27a, 0xa, 0x49, 0xc, 0x49, 
    0xe, 0x49, 0x27d, 0xb, 0x49, 0x3, 0x4a, 0x5, 0x4a, 0x280, 0xa, 0x4a, 
    0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x5, 0x4a, 0x285, 0xa, 0x4a, 0x3, 0x4b, 
    0x3, 0x4b, 0x3, 0x4c, 0x5, 0x4c, 0x28a, 0xa, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 
    0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x5, 0x4c, 0x293, 
    0xa, 0x4c, 0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 0x7, 0x4d, 0x299, 
    0xa, 0x4d, 0xc, 0x4d, 0xe, 0x4d, 0x29c, 0xb, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 
    0x3, 0x4e, 0x3, 0x4e, 0x6, 0x4e, 0x2a2, 0xa, 0x4e, 0xd, 0x4e, 0xe, 0x4e, 
    0x2a3, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 
    0x5, 0x4f, 0x2ac, 0xa, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 
    0x3, 0x4f, 0x5, 0x4f, 0x2b3, 0xa, 0x4f, 0x5, 0x4f, 0x2b5, 0xa, 0x4f, 
    0x3, 0x4f, 0x5, 0x4f, 0x2b8, 0xa, 0x4f, 0x3, 0x4f, 0x5, 0x4f, 0x2bb, 
    0xa, 0x4f, 0x3, 0x50, 0x3, 0x50, 0x7, 0x50, 0x2bf, 0xa, 0x50, 0xc, 0x50, 
    0xe, 0x50, 0x2c2, 0xb, 0x50, 0x3, 0x50, 0x3, 0x50, 0x7, 0x50, 0x2c6, 
    0xa, 0x50, 0xc, 0x50, 0xe, 0x50, 0x2c9, 0xb, 0x50, 0x3, 0x50, 0x5, 0x50, 
    0x2cc, 0xa, 0x50, 0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 0x7, 0x51, 0x2d1, 
    0xa, 0x51, 0xc, 0x51, 0xe, 0x51, 0x2d4, 0xb, 0x51, 0x3, 0x52, 0x5, 0x52, 
    0x2d7, 0xa, 0x52, 0x3, 0x53, 0x3, 0x53, 0x7, 0x53, 0x2db, 0xa, 0x53, 
    0xc, 0x53, 0xe, 0x53, 0x2de, 0xb, 0x53, 0x3, 0x53, 0x3, 0x53, 0x7, 0x53, 
    0x2e2, 0xa, 0x53, 0xc, 0x53, 0xe, 0x53, 0x2e5, 0xb, 0x53, 0x3, 0x53, 
    0x3, 0x53, 0x7, 0x53, 0x2e9, 0xa, 0x53, 0xc, 0x53, 0xe, 0x53, 0x2ec, 
    0xb, 0x53, 0x7, 0x53, 0x2ee, 0xa, 0x53, 0xc, 0x53, 0xe, 0x53, 0x2f1, 
    0xb, 0x53, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 
    0x54, 0x3, 0x54, 0x5, 0x54, 0x2fa, 0xa, 0x54, 0x3, 0x55, 0x3, 0x55, 
    0x3, 0x56, 0x3, 0x56, 0x3, 0x57, 0x3, 0x57, 0x3, 0x58, 0x5, 0x58, 0x303, 
    0xa, 0x58, 0x3, 0x58, 0x3, 0x58, 0x3, 0x58, 0x3, 0x58, 0x3, 0x58, 0x3, 
    0x58, 0x3, 0x58, 0x7, 0x58, 0x30c, 0xa, 0x58, 0xc, 0x58, 0xe, 0x58, 
    0x30f, 0xb, 0x58, 0x3, 0x58, 0x3, 0x58, 0x3, 0x58, 0x5, 0x58, 0x314, 
    0xa, 0x58, 0x5, 0x58, 0x316, 0xa, 0x58, 0x3, 0x59, 0x3, 0x59, 0x3, 0x59, 
    0x5, 0x59, 0x31b, 0xa, 0x59, 0x3, 0x59, 0x3, 0x59, 0x5, 0x59, 0x31f, 
    0xa, 0x59, 0x3, 0x5a, 0x3, 0x5a, 0x3, 0x5b, 0x3, 0x5b, 0x3, 0x5b, 0x3, 
    0x5c, 0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5d, 0x3, 0x5d, 0x3, 0x5e, 0x3, 0x5e, 
    0x3, 0x5e, 0x3, 0x5e, 0x5, 0x5e, 0x32f, 0xa, 0x5e, 0x3, 0x5e, 0x7, 0x5e, 
    0x332, 0xa, 0x5e, 0xc, 0x5e, 0xe, 0x5e, 0x335, 0xb, 0x5e, 0x3, 0x5f, 
    0x3, 0x5f, 0x3, 0x5f, 0x5, 0x5f, 0x33a, 0xa, 0x5f, 0x3, 0x60, 0x7, 0x60, 
    0x33d, 0xa, 0x60, 0xc, 0x60, 0xe, 0x60, 0x340, 0xb, 0x60, 0x3, 0x60, 
    0x3, 0x60, 0x5, 0x60, 0x344, 0xa, 0x60, 0x3, 0x61, 0x3, 0x61, 0x5, 0x61, 
    0x348, 0xa, 0x61, 0x3, 0x61, 0x5, 0x61, 0x34b, 0xa, 0x61, 0x3, 0x62, 
    0x3, 0x62, 0x3, 0x62, 0x3, 0x63, 0x3, 0x63, 0x3, 0x63, 0x3, 0x63, 0x3, 
    0x64, 0x3, 0x64, 0x3, 0x64, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 
    0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 
    0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 
    0x5, 0x66, 0x368, 0xa, 0x66, 0x3, 0x66, 0x2, 0x2, 0x67, 0x2, 0x4, 0x6, 
    0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 
    0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 
    0x38, 0x3a, 0x3c, 0x3e, 0x40, 0x42, 0x44, 0x46, 0x48, 0x4a, 0x4c, 0x4e, 
    0x50, 0x52, 0x54, 0x56, 0x58, 0x5a, 0x5c, 0x5e, 0x60, 0x62, 0x64, 0x66, 
    0x68, 0x6a, 0x6c, 0x6e, 0x70, 0x72, 0x74, 0x76, 0x78, 0x7a, 0x7c, 0x7e, 
    0x80, 0x82, 0x84, 0x86, 0x88, 0x8a, 0x8c, 0x8e, 0x90, 0x92, 0x94, 0x96, 
    0x98, 0x9a, 0x9c, 0x9e, 0xa0, 0xa2, 0xa4, 0xa6, 0xa8, 0xaa, 0xac, 0xae, 
    0xb0, 0xb2, 0xb4, 0xb6, 0xb8, 0xba, 0xbc, 0xbe, 0xc0, 0xc2, 0xc4, 0xc6, 
    0xc8, 0xca, 0x2, 0xc, 0x4, 0x2, 0x6e, 0x6e, 0x71, 0x71, 0x4, 0x2, 0x53, 
    0x53, 0x6e, 0x6e, 0x3, 0x2, 0x58, 0x59, 0x3, 0x2, 0x72, 0x76, 0x3, 0x2, 
    0x77, 0x7b, 0x4, 0x2, 0x24, 0x24, 0x26, 0x26, 0x3, 0x2, 0xe, 0xf, 0x4, 
    0x2, 0xd, 0xd, 0x10, 0x14, 0x3, 0x2, 0x45, 0x46, 0x4, 0x2, 0xe, 0xf, 
    0x44, 0x44, 0x2, 0x399, 0x2, 0xcd, 0x3, 0x2, 0x2, 0x2, 0x4, 0xe6, 0x3, 
    0x2, 0x2, 0x2, 0x6, 0xee, 0x3, 0x2, 0x2, 0x2, 0x8, 0xf0, 0x3, 0x2, 0x2, 
    0x2, 0xa, 0xf3, 0x3, 0x2, 0x2, 0x2, 0xc, 0xf6, 0x3, 0x2, 0x2, 0x2, 0xe, 
    0xf8, 0x3, 0x2, 0x2, 0x2, 0x10, 0xfa, 0x3, 0x2, 0x2, 0x2, 0x12, 0xfe, 
    0x3, 0x2, 0x2, 0x2, 0x14, 0x102, 0x3, 0x2, 0x2, 0x2, 0x16, 0x104, 0x3, 
    0x2, 0x2, 0x2, 0x18, 0x10e, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x11b, 0x3, 0x2, 
    0x2, 0x2, 0x1c, 0x11d, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x136, 0x3, 0x2, 0x2, 
    0x2, 0x20, 0x138, 0x3, 0x2, 0x2, 0x2, 0x22, 0x13a, 0x3, 0x2, 0x2, 0x2, 
    0x24, 0x13c, 0x3, 0x2, 0x2, 0x2, 0x26, 0x146, 0x3, 0x2, 0x2, 0x2, 0x28, 
    0x148, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x14b, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x14d, 
    0x3, 0x2, 0x2, 0x2, 0x2e, 0x14f, 0x3, 0x2, 0x2, 0x2, 0x30, 0x154, 0x3, 
    0x2, 0x2, 0x2, 0x32, 0x167, 0x3, 0x2, 0x2, 0x2, 0x34, 0x169, 0x3, 0x2, 
    0x2, 0x2, 0x36, 0x16c, 0x3, 0x2, 0x2, 0x2, 0x38, 0x175, 0x3, 0x2, 0x2, 
    0x2, 0x3a, 0x17d, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x185, 0x3, 0x2, 0x2, 0x2, 
    0x3e, 0x18a, 0x3, 0x2, 0x2, 0x2, 0x40, 0x193, 0x3, 0x2, 0x2, 0x2, 0x42, 
    0x19b, 0x3, 0x2, 0x2, 0x2, 0x44, 0x1a3, 0x3, 0x2, 0x2, 0x2, 0x46, 0x1a5, 
    0x3, 0x2, 0x2, 0x2, 0x48, 0x1a8, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x1ae, 0x3, 
    0x2, 0x2, 0x2, 0x4c, 0x1b0, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x1b4, 0x3, 0x2, 
    0x2, 0x2, 0x50, 0x1bd, 0x3, 0x2, 0x2, 0x2, 0x52, 0x1d2, 0x3, 0x2, 0x2, 
    0x2, 0x54, 0x1e3, 0x3, 0x2, 0x2, 0x2, 0x56, 0x1e7, 0x3, 0x2, 0x2, 0x2, 
    0x58, 0x1e9, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x1eb, 0x3, 0x2, 0x2, 0x2, 0x5c, 
    0x1ef, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x1fb, 0x3, 0x2, 0x2, 0x2, 0x60, 0x200, 
    0x3, 0x2, 0x2, 0x2, 0x62, 0x205, 0x3, 0x2, 0x2, 0x2, 0x64, 0x208, 0x3, 
    0x2, 0x2, 0x2, 0x66, 0x20e, 0x3, 0x2, 0x2, 0x2, 0x68, 0x218, 0x3, 0x2, 
    0x2, 0x2, 0x6a, 0x221, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x227, 0x3, 0x2, 0x2, 
    0x2, 0x6e, 0x22b, 0x3, 0x2, 0x2, 0x2, 0x70, 0x231, 0x3, 0x2, 0x2, 0x2, 
    0x72, 0x241, 0x3, 0x2, 0x2, 0x2, 0x74, 0x244, 0x3, 0x2, 0x2, 0x2, 0x76, 
    0x246, 0x3, 0x2, 0x2, 0x2, 0x78, 0x24a, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x24e, 
    0x3, 0x2, 0x2, 0x2, 0x7c, 0x250, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x252, 0x3, 
    0x2, 0x2, 0x2, 0x80, 0x254, 0x3, 0x2, 0x2, 0x2, 0x82, 0x256, 0x3, 0x2, 
    0x2, 0x2, 0x84, 0x25b, 0x3, 0x2, 0x2, 0x2, 0x86, 0x260, 0x3, 0x2, 0x2, 
    0x2, 0x88, 0x269, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x26b, 0x3, 0x2, 0x2, 0x2, 
    0x8c, 0x271, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x274, 0x3, 0x2, 0x2, 0x2, 0x90, 
    0x276, 0x3, 0x2, 0x2, 0x2, 0x92, 0x27f, 0x3, 0x2, 0x2, 0x2, 0x94, 0x286, 
    0x3, 0x2, 0x2, 0x2, 0x96, 0x292, 0x3, 0x2, 0x2, 0x2, 0x98, 0x294, 0x3, 
    0x2, 0x2, 0x2, 0x9a, 0x2a1, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x2ba, 0x3, 0x2, 
    0x2, 0x2, 0x9e, 0x2bc, 0x3, 0x2, 0x2, 0x2, 0xa0, 0x2cd, 0x3, 0x2, 0x2, 
    0x2, 0xa2, 0x2d6, 0x3, 0x2, 0x2, 0x2, 0xa4, 0x2d8, 0x3, 0x2, 0x2, 0x2, 
    0xa6, 0x2f9, 0x3, 0x2, 0x2, 0x2, 0xa8, 0x2fb, 0x3, 0x2, 0x2, 0x2, 0xaa, 
    0x2fd, 0x3, 0x2, 0x2, 0x2, 0xac, 0x2ff, 0x3, 0x2, 0x2, 0x2, 0xae, 0x302, 
    0x3, 0x2, 0x2, 0x2, 0xb0, 0x31e, 0x3, 0x2, 0x2, 0x2, 0xb2, 0x320, 0x3, 
    0x2, 0x2, 0x2, 0xb4, 0x322, 0x3, 0x2, 0x2, 0x2, 0xb6, 0x325, 0x3, 0x2, 
    0x2, 0x2, 0xb8, 0x328, 0x3, 0x2, 0x2, 0x2, 0xba, 0x32e, 0x3, 0x2, 0x2, 
    0x2, 0xbc, 0x339, 0x3, 0x2, 0x2, 0x2, 0xbe, 0x33e, 0x3, 0x2, 0x2, 0x2, 
    0xc0, 0x347, 0x3, 0x2, 0x2, 0x2, 0xc2, 0x34c, 0x3, 0x2, 0x2, 0x2, 0xc4, 
    0x34f, 0x3, 0x2, 0x2, 0x2, 0xc6, 0x353, 0x3, 0x2, 0x2, 0x2, 0xc8, 0x356, 
    0x3, 0x2, 0x2, 0x2, 0xca, 0x367, 0x3, 0x2, 0x2, 0x2, 0xcc, 0xce, 0x5, 
    0x4, 0x3, 0x2, 0xcd, 0xcc, 0x3, 0x2, 0x2, 0x2, 0xcd, 0xce, 0x3, 0x2, 
    0x2, 0x2, 0xce, 0xd2, 0x3, 0x2, 0x2, 0x2, 0xcf, 0xd1, 0x5, 0x24, 0x13, 
    0x2, 0xd0, 0xcf, 0x3, 0x2, 0x2, 0x2, 0xd1, 0xd4, 0x3, 0x2, 0x2, 0x2, 
    0xd2, 0xd0, 0x3, 0x2, 0x2, 0x2, 0xd2, 0xd3, 0x3, 0x2, 0x2, 0x2, 0xd3, 
    0xd6, 0x3, 0x2, 0x2, 0x2, 0xd4, 0xd2, 0x3, 0x2, 0x2, 0x2, 0xd5, 0xd7, 
    0x5, 0x36, 0x1c, 0x2, 0xd6, 0xd5, 0x3, 0x2, 0x2, 0x2, 0xd6, 0xd7, 0x3, 
    0x2, 0x2, 0x2, 0xd7, 0xdb, 0x3, 0x2, 0x2, 0x2, 0xd8, 0xda, 0x5, 0x24, 
    0x13, 0x2, 0xd9, 0xd8, 0x3, 0x2, 0x2, 0x2, 0xda, 0xdd, 0x3, 0x2, 0x2, 
    0x2, 0xdb, 0xd9, 0x3, 0x2, 0x2, 0x2, 0xdb, 0xdc, 0x3, 0x2, 0x2, 0x2, 
    0xdc, 0xe1, 0x3, 0x2, 0x2, 0x2, 0xdd, 0xdb, 0x3, 0x2, 0x2, 0x2, 0xde, 
    0xdf, 0x5, 0x88, 0x45, 0x2, 0xdf, 0xe0, 0x5, 0x48, 0x25, 0x2, 0xe0, 
    0xe2, 0x3, 0x2, 0x2, 0x2, 0xe1, 0xde, 0x3, 0x2, 0x2, 0x2, 0xe1, 0xe2, 
    0x3, 0x2, 0x2, 0x2, 0xe2, 0xe3, 0x3, 0x2, 0x2, 0x2, 0xe3, 0xe4, 0x5, 
    0x8a, 0x46, 0x2, 0xe4, 0xe5, 0x7, 0x2, 0x2, 0x3, 0xe5, 0x3, 0x3, 0x2, 
    0x2, 0x2, 0xe6, 0xe7, 0x7, 0x1d, 0x2, 0x2, 0xe7, 0xeb, 0x7, 0x50, 0x2, 
    0x2, 0xe8, 0xea, 0x9, 0x2, 0x2, 0x2, 0xe9, 0xe8, 0x3, 0x2, 0x2, 0x2, 
    0xea, 0xed, 0x3, 0x2, 0x2, 0x2, 0xeb, 0xe9, 0x3, 0x2, 0x2, 0x2, 0xeb, 
    0xec, 0x3, 0x2, 0x2, 0x2, 0xec, 0x5, 0x3, 0x2, 0x2, 0x2, 0xed, 0xeb, 
    0x3, 0x2, 0x2, 0x2, 0xee, 0xef, 0x9, 0x3, 0x2, 0x2, 0xef, 0x7, 0x3, 
    0x2, 0x2, 0x2, 0xf0, 0xf1, 0x7, 0x54, 0x2, 0x2, 0xf1, 0xf2, 0x5, 0x6, 
    0x4, 0x2, 0xf2, 0x9, 0x3, 0x2, 0x2, 0x2, 0xf3, 0xf4, 0x7, 0x55, 0x2, 
    0x2, 0xf4, 0xf5, 0x5, 0xe, 0x8, 0x2, 0xf5, 0xb, 0x3, 0x2, 0x2, 0x2, 
    0xf6, 0xf7, 0x7, 0x56, 0x2, 0x2, 0xf7, 0xd, 0x3, 0x2, 0x2, 0x2, 0xf8, 
    0xf9, 0x7, 0x6e, 0x2, 0x2, 0xf9, 0xf, 0x3, 0x2, 0x2, 0x2, 0xfa, 0xfb, 
    0x7, 0x5a, 0x2, 0x2, 0xfb, 0xfc, 0x5, 0x18, 0xd, 0x2, 0xfc, 0xfd, 0x7, 
    0x5b, 0x2, 0x2, 0xfd, 0x11, 0x3, 0x2, 0x2, 0x2, 0xfe, 0xff, 0x7, 0x5c, 
    0x2, 0x2, 0xff, 0x100, 0x5, 0x18, 0xd, 0x2, 0x100, 0x101, 0x7, 0x5b, 
    0x2, 0x2, 0x101, 0x13, 0x3, 0x2, 0x2, 0x2, 0x102, 0x103, 0x7, 0x5e, 
    0x2, 0x2, 0x103, 0x15, 0x3, 0x2, 0x2, 0x2, 0x104, 0x105, 0x7, 0x5d, 
    0x2, 0x2, 0x105, 0x17, 0x3, 0x2, 0x2, 0x2, 0x106, 0x108, 0x7, 0x57, 
    0x2, 0x2, 0x107, 0x106, 0x3, 0x2, 0x2, 0x2, 0x107, 0x108, 0x3, 0x2, 
    0x2, 0x2, 0x108, 0x109, 0x3, 0x2, 0x2, 0x2, 0x109, 0x10a, 0x7, 0x51, 
    0x2, 0x2, 0x10a, 0x10b, 0x5, 0x18, 0xd, 0x2, 0x10b, 0x10c, 0x7, 0x52, 
    0x2, 0x2, 0x10c, 0x10f, 0x3, 0x2, 0x2, 0x2, 0x10d, 0x10f, 0x5, 0x1c, 
    0xf, 0x2, 0x10e, 0x107, 0x3, 0x2, 0x2, 0x2, 0x10e, 0x10d, 0x3, 0x2, 
    0x2, 0x2, 0x10f, 0x19, 0x3, 0x2, 0x2, 0x2, 0x110, 0x112, 0x7, 0x51, 
    0x2, 0x2, 0x111, 0x113, 0x7, 0x57, 0x2, 0x2, 0x112, 0x111, 0x3, 0x2, 
    0x2, 0x2, 0x112, 0x113, 0x3, 0x2, 0x2, 0x2, 0x113, 0x114, 0x3, 0x2, 
    0x2, 0x2, 0x114, 0x115, 0x5, 0x1a, 0xe, 0x2, 0x115, 0x116, 0x7, 0x52, 
    0x2, 0x2, 0x116, 0x11c, 0x3, 0x2, 0x2, 0x2, 0x117, 0x119, 0x7, 0x57, 
    0x2, 0x2, 0x118, 0x117, 0x3, 0x2, 0x2, 0x2, 0x118, 0x119, 0x3, 0x2, 
    0x2, 0x2, 0x119, 0x11a, 0x3, 0x2, 0x2, 0x2, 0x11a, 0x11c, 0x5, 0x1e, 
    0x10, 0x2, 0x11b, 0x110, 0x3, 0x2, 0x2, 0x2, 0x11b, 0x118, 0x3, 0x2, 
    0x2, 0x2, 0x11c, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x11d, 0x123, 0x5, 0x1a, 
    0xe, 0x2, 0x11e, 0x11f, 0x5, 0x22, 0x12, 0x2, 0x11f, 0x120, 0x5, 0x1a, 
    0xe, 0x2, 0x120, 0x122, 0x3, 0x2, 0x2, 0x2, 0x121, 0x11e, 0x3, 0x2, 
    0x2, 0x2, 0x122, 0x125, 0x3, 0x2, 0x2, 0x2, 0x123, 0x121, 0x3, 0x2, 
    0x2, 0x2, 0x123, 0x124, 0x3, 0x2, 0x2, 0x2, 0x124, 0x1d, 0x3, 0x2, 0x2, 
    0x2, 0x125, 0x123, 0x3, 0x2, 0x2, 0x2, 0x126, 0x137, 0x7, 0x68, 0x2, 
    0x2, 0x127, 0x137, 0x7, 0x67, 0x2, 0x2, 0x128, 0x137, 0x7, 0x6a, 0x2, 
    0x2, 0x129, 0x137, 0x7, 0x69, 0x2, 0x2, 0x12a, 0x137, 0x7, 0x5f, 0x2, 
    0x2, 0x12b, 0x137, 0x7, 0x60, 0x2, 0x2, 0x12c, 0x137, 0x7, 0x61, 0x2, 
    0x2, 0x12d, 0x137, 0x7, 0x62, 0x2, 0x2, 0x12e, 0x137, 0x7, 0x63, 0x2, 
    0x2, 0x12f, 0x137, 0x7, 0x64, 0x2, 0x2, 0x130, 0x137, 0x7, 0x65, 0x2, 
    0x2, 0x131, 0x137, 0x7, 0x66, 0x2, 0x2, 0x132, 0x137, 0x7, 0x6b, 0x2, 
    0x2, 0x133, 0x137, 0x7, 0x6c, 0x2, 0x2, 0x134, 0x137, 0x7, 0x6d, 0x2, 
    0x2, 0x135, 0x137, 0x5, 0x20, 0x11, 0x2, 0x136, 0x126, 0x3, 0x2, 0x2, 
    0x2, 0x136, 0x127, 0x3, 0x2, 0x2, 0x2, 0x136, 0x128, 0x3, 0x2, 0x2, 
    0x2, 0x136, 0x129, 0x3, 0x2, 0x2, 0x2, 0x136, 0x12a, 0x3, 0x2, 0x2, 
    0x2, 0x136, 0x12b, 0x3, 0x2, 0x2, 0x2, 0x136, 0x12c, 0x3, 0x2, 0x2, 
    0x2, 0x136, 0x12d, 0x3, 0x2, 0x2, 0x2, 0x136, 0x12e, 0x3, 0x2, 0x2, 
    0x2, 0x136, 0x12f, 0x3, 0x2, 0x2, 0x2, 0x136, 0x130, 0x3, 0x2, 0x2, 
    0x2, 0x136, 0x131, 0x3, 0x2, 0x2, 0x2, 0x136, 0x132, 0x3, 0x2, 0x2, 
    0x2, 0x136, 0x133, 0x3, 0x2, 0x2, 0x2, 0x136, 0x134, 0x3, 0x2, 0x2, 
    0x2, 0x136, 0x135, 0x3, 0x2, 0x2, 0x2, 0x137, 0x1f, 0x3, 0x2, 0x2, 0x2, 
    0x138, 0x139, 0x7, 0x6e, 0x2, 0x2, 0x139, 0x21, 0x3, 0x2, 0x2, 0x2, 
    0x13a, 0x13b, 0x9, 0x4, 0x2, 0x2, 0x13b, 0x23, 0x3, 0x2, 0x2, 0x2, 0x13c, 
    0x144, 0x7, 0x1d, 0x2, 0x2, 0x13d, 0x145, 0x5, 0xa, 0x6, 0x2, 0x13e, 
    0x145, 0x5, 0xc, 0x7, 0x2, 0x13f, 0x145, 0x5, 0x10, 0x9, 0x2, 0x140, 
    0x145, 0x5, 0x12, 0xa, 0x2, 0x141, 0x145, 0x5, 0x14, 0xb, 0x2, 0x142, 
    0x145, 0x5, 0x16, 0xc, 0x2, 0x143, 0x145, 0x5, 0x8, 0x5, 0x2, 0x144, 
    0x13d, 0x3, 0x2, 0x2, 0x2, 0x144, 0x13e, 0x3, 0x2, 0x2, 0x2, 0x144, 
    0x13f, 0x3, 0x2, 0x2, 0x2, 0x144, 0x140, 0x3, 0x2, 0x2, 0x2, 0x144, 
    0x141, 0x3, 0x2, 0x2, 0x2, 0x144, 0x142, 0x3, 0x2, 0x2, 0x2, 0x144, 
    0x143, 0x3, 0x2, 0x2, 0x2, 0x145, 0x25, 0x3, 0x2, 0x2, 0x2, 0x146, 0x147, 
    0x9, 0x5, 0x2, 0x2, 0x147, 0x27, 0x3, 0x2, 0x2, 0x2, 0x148, 0x149, 0x7, 
    0x19, 0x2, 0x2, 0x149, 0x14a, 0x5, 0x26, 0x14, 0x2, 0x14a, 0x29, 0x3, 
    0x2, 0x2, 0x2, 0x14b, 0x14c, 0x9, 0x6, 0x2, 0x2, 0x14c, 0x2b, 0x3, 0x2, 
    0x2, 0x2, 0x14d, 0x14e, 0x7, 0x4e, 0x2, 0x2, 0x14e, 0x2d, 0x3, 0x2, 
    0x2, 0x2, 0x14f, 0x150, 0x7, 0x19, 0x2, 0x2, 0x150, 0x152, 0x5, 0x2a, 
    0x16, 0x2, 0x151, 0x153, 0x5, 0x30, 0x19, 0x2, 0x152, 0x151, 0x3, 0x2, 
    0x2, 0x2, 0x152, 0x153, 0x3, 0x2, 0x2, 0x2, 0x153, 0x2f, 0x3, 0x2, 0x2, 
    0x2, 0x154, 0x15d, 0x7, 0x8, 0x2, 0x2, 0x155, 0x15a, 0x5, 0x32, 0x1a, 
    0x2, 0x156, 0x157, 0x7, 0xc, 0x2, 0x2, 0x157, 0x159, 0x5, 0x32, 0x1a, 
    0x2, 0x158, 0x156, 0x3, 0x2, 0x2, 0x2, 0x159, 0x15c, 0x3, 0x2, 0x2, 
    0x2, 0x15a, 0x158, 0x3, 0x2, 0x2, 0x2, 0x15a, 0x15b, 0x3, 0x2, 0x2, 
    0x2, 0x15b, 0x15e, 0x3, 0x2, 0x2, 0x2, 0x15c, 0x15a, 0x3, 0x2, 0x2, 
    0x2, 0x15d, 0x155, 0x3, 0x2, 0x2, 0x2, 0x15d, 0x15e, 0x3, 0x2, 0x2, 
    0x2, 0x15e, 0x15f, 0x3, 0x2, 0x2, 0x2, 0x15f, 0x160, 0x7, 0x9, 0x2, 
    0x2, 0x160, 0x31, 0x3, 0x2, 0x2, 0x2, 0x161, 0x164, 0x5, 0x2c, 0x17, 
    0x2, 0x162, 0x163, 0x7, 0xd, 0x2, 0x2, 0x163, 0x165, 0x5, 0x96, 0x4c, 
    0x2, 0x164, 0x162, 0x3, 0x2, 0x2, 0x2, 0x164, 0x165, 0x3, 0x2, 0x2, 
    0x2, 0x165, 0x168, 0x3, 0x2, 0x2, 0x2, 0x166, 0x168, 0x5, 0x96, 0x4c, 
    0x2, 0x167, 0x161, 0x3, 0x2, 0x2, 0x2, 0x167, 0x166, 0x3, 0x2, 0x2, 
    0x2, 0x168, 0x33, 0x3, 0x2, 0x2, 0x2, 0x169, 0x16a, 0x7, 0x4e, 0x2, 
    0x2, 0x16a, 0x35, 0x3, 0x2, 0x2, 0x2, 0x16b, 0x16d, 0x5, 0x38, 0x1d, 
    0x2, 0x16c, 0x16b, 0x3, 0x2, 0x2, 0x2, 0x16d, 0x16e, 0x3, 0x2, 0x2, 
    0x2, 0x16e, 0x16c, 0x3, 0x2, 0x2, 0x2, 0x16e, 0x16f, 0x3, 0x2, 0x2, 
    0x2, 0x16f, 0x37, 0x3, 0x2, 0x2, 0x2, 0x170, 0x174, 0x5, 0x24, 0x13, 
    0x2, 0x171, 0x174, 0x5, 0x28, 0x15, 0x2, 0x172, 0x174, 0x5, 0x2e, 0x18, 
    0x2, 0x173, 0x170, 0x3, 0x2, 0x2, 0x2, 0x173, 0x171, 0x3, 0x2, 0x2, 
    0x2, 0x173, 0x172, 0x3, 0x2, 0x2, 0x2, 0x174, 0x177, 0x3, 0x2, 0x2, 
    0x2, 0x175, 0x173, 0x3, 0x2, 0x2, 0x2, 0x175, 0x176, 0x3, 0x2, 0x2, 
    0x2, 0x176, 0x178, 0x3, 0x2, 0x2, 0x2, 0x177, 0x175, 0x3, 0x2, 0x2, 
    0x2, 0x178, 0x179, 0x7, 0x43, 0x2, 0x2, 0x179, 0x17b, 0x5, 0x3a, 0x1e, 
    0x2, 0x17a, 0x17c, 0x7, 0xb, 0x2, 0x2, 0x17b, 0x17a, 0x3, 0x2, 0x2, 
    0x2, 0x17b, 0x17c, 0x3, 0x2, 0x2, 0x2, 0x17c, 0x39, 0x3, 0x2, 0x2, 0x2, 
    0x17d, 0x182, 0x5, 0x3c, 0x1f, 0x2, 0x17e, 0x17f, 0x7, 0xc, 0x2, 0x2, 
    0x17f, 0x181, 0x5, 0x3c, 0x1f, 0x2, 0x180, 0x17e, 0x3, 0x2, 0x2, 0x2, 
    0x181, 0x184, 0x3, 0x2, 0x2, 0x2, 0x182, 0x180, 0x3, 0x2, 0x2, 0x2, 
    0x182, 0x183, 0x3, 0x2, 0x2, 0x2, 0x183, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x184, 
    0x182, 0x3, 0x2, 0x2, 0x2, 0x185, 0x187, 0x5, 0x34, 0x1b, 0x2, 0x186, 
    0x188, 0x7, 0x2f, 0x2, 0x2, 0x187, 0x186, 0x3, 0x2, 0x2, 0x2, 0x187, 
    0x188, 0x3, 0x2, 0x2, 0x2, 0x188, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x189, 0x18b, 
    0x5, 0x40, 0x21, 0x2, 0x18a, 0x189, 0x3, 0x2, 0x2, 0x2, 0x18b, 0x18c, 
    0x3, 0x2, 0x2, 0x2, 0x18c, 0x18a, 0x3, 0x2, 0x2, 0x2, 0x18c, 0x18d, 
    0x3, 0x2, 0x2, 0x2, 0x18d, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x18e, 0x192, 0x5, 
    0x24, 0x13, 0x2, 0x18f, 0x192, 0x5, 0x28, 0x15, 0x2, 0x190, 0x192, 0x5, 
    0x2e, 0x18, 0x2, 0x191, 0x18e, 0x3, 0x2, 0x2, 0x2, 0x191, 0x18f, 0x3, 
    0x2, 0x2, 0x2, 0x191, 0x190, 0x3, 0x2, 0x2, 0x2, 0x192, 0x195, 0x3, 
    0x2, 0x2, 0x2, 0x193, 0x191, 0x3, 0x2, 0x2, 0x2, 0x193, 0x194, 0x3, 
    0x2, 0x2, 0x2, 0x194, 0x196, 0x3, 0x2, 0x2, 0x2, 0x195, 0x193, 0x3, 
    0x2, 0x2, 0x2, 0x196, 0x197, 0x7, 0x43, 0x2, 0x2, 0x197, 0x199, 0x5, 
    0x42, 0x22, 0x2, 0x198, 0x19a, 0x7, 0xb, 0x2, 0x2, 0x199, 0x198, 0x3, 
    0x2, 0x2, 0x2, 0x199, 0x19a, 0x3, 0x2, 0x2, 0x2, 0x19a, 0x41, 0x3, 0x2, 
    0x2, 0x2, 0x19b, 0x1a0, 0x5, 0x44, 0x23, 0x2, 0x19c, 0x19d, 0x7, 0xc, 
    0x2, 0x2, 0x19d, 0x19f, 0x5, 0x44, 0x23, 0x2, 0x19e, 0x19c, 0x3, 0x2, 
    0x2, 0x2, 0x19f, 0x1a2, 0x3, 0x2, 0x2, 0x2, 0x1a0, 0x19e, 0x3, 0x2, 
    0x2, 0x2, 0x1a0, 0x1a1, 0x3, 0x2, 0x2, 0x2, 0x1a1, 0x43, 0x3, 0x2, 0x2, 
    0x2, 0x1a2, 0x1a0, 0x3, 0x2, 0x2, 0x2, 0x1a3, 0x1a4, 0x5, 0x34, 0x1b, 
    0x2, 0x1a4, 0x45, 0x3, 0x2, 0x2, 0x2, 0x1a5, 0x1a6, 0x7, 0x4e, 0x2, 
    0x2, 0x1a6, 0x47, 0x3, 0x2, 0x2, 0x2, 0x1a7, 0x1a9, 0x5, 0x4a, 0x26, 
    0x2, 0x1a8, 0x1a7, 0x3, 0x2, 0x2, 0x2, 0x1a9, 0x1aa, 0x3, 0x2, 0x2, 
    0x2, 0x1aa, 0x1a8, 0x3, 0x2, 0x2, 0x2, 0x1aa, 0x1ab, 0x3, 0x2, 0x2, 
    0x2, 0x1ab, 0x49, 0x3, 0x2, 0x2, 0x2, 0x1ac, 0x1af, 0x5, 0x4c, 0x27, 
    0x2, 0x1ad, 0x1af, 0x5, 0x4e, 0x28, 0x2, 0x1ae, 0x1ac, 0x3, 0x2, 0x2, 
    0x2, 0x1ae, 0x1ad, 0x3, 0x2, 0x2, 0x2, 0x1af, 0x4b, 0x3, 0x2, 0x2, 0x2, 
    0x1b0, 0x1b1, 0x5, 0x50, 0x29, 0x2, 0x1b1, 0x1b2, 0x5, 0x54, 0x2b, 0x2, 
    0x1b2, 0x1b3, 0x7, 0x2d, 0x2, 0x2, 0x1b3, 0x4d, 0x3, 0x2, 0x2, 0x2, 
    0x1b4, 0x1b5, 0x5, 0x52, 0x2a, 0x2, 0x1b5, 0x1b6, 0x5, 0x54, 0x2b, 0x2, 
    0x1b6, 0x1b7, 0x7, 0x2e, 0x2, 0x2, 0x1b7, 0x4f, 0x3, 0x2, 0x2, 0x2, 
    0x1b8, 0x1bc, 0x5, 0x24, 0x13, 0x2, 0x1b9, 0x1bc, 0x5, 0x28, 0x15, 0x2, 
    0x1ba, 0x1bc, 0x5, 0x2e, 0x18, 0x2, 0x1bb, 0x1b8, 0x3, 0x2, 0x2, 0x2, 
    0x1bb, 0x1b9, 0x3, 0x2, 0x2, 0x2, 0x1bb, 0x1ba, 0x3, 0x2, 0x2, 0x2, 
    0x1bc, 0x1bf, 0x3, 0x2, 0x2, 0x2, 0x1bd, 0x1bb, 0x3, 0x2, 0x2, 0x2, 
    0x1bd, 0x1be, 0x3, 0x2, 0x2, 0x2, 0x1be, 0x1c1, 0x3, 0x2, 0x2, 0x2, 
    0x1bf, 0x1bd, 0x3, 0x2, 0x2, 0x2, 0x1c0, 0x1c2, 0x7, 0x4d, 0x2, 0x2, 
    0x1c1, 0x1c0, 0x3, 0x2, 0x2, 0x2, 0x1c1, 0x1c2, 0x3, 0x2, 0x2, 0x2, 
    0x1c2, 0x1c3, 0x3, 0x2, 0x2, 0x2, 0x1c3, 0x1c4, 0x7, 0x2b, 0x2, 0x2, 
    0x1c4, 0x1c5, 0x5, 0x46, 0x24, 0x2, 0x1c5, 0x1c7, 0x7, 0x8, 0x2, 0x2, 
    0x1c6, 0x1c8, 0x5, 0x90, 0x49, 0x2, 0x1c7, 0x1c6, 0x3, 0x2, 0x2, 0x2, 
    0x1c7, 0x1c8, 0x3, 0x2, 0x2, 0x2, 0x1c8, 0x1c9, 0x3, 0x2, 0x2, 0x2, 
    0x1c9, 0x1cb, 0x7, 0x9, 0x2, 0x2, 0x1ca, 0x1cc, 0x7, 0x2f, 0x2, 0x2, 
    0x1cb, 0x1ca, 0x3, 0x2, 0x2, 0x2, 0x1cb, 0x1cc, 0x3, 0x2, 0x2, 0x2, 
    0x1cc, 0x51, 0x3, 0x2, 0x2, 0x2, 0x1cd, 0x1d1, 0x5, 0x24, 0x13, 0x2, 
    0x1ce, 0x1d1, 0x5, 0x28, 0x15, 0x2, 0x1cf, 0x1d1, 0x5, 0x2e, 0x18, 0x2, 
    0x1d0, 0x1cd, 0x3, 0x2, 0x2, 0x2, 0x1d0, 0x1ce, 0x3, 0x2, 0x2, 0x2, 
    0x1d0, 0x1cf, 0x3, 0x2, 0x2, 0x2, 0x1d1, 0x1d4, 0x3, 0x2, 0x2, 0x2, 
    0x1d2, 0x1d0, 0x3, 0x2, 0x2, 0x2, 0x1d2, 0x1d3, 0x3, 0x2, 0x2, 0x2, 
    0x1d3, 0x1d6, 0x3, 0x2, 0x2, 0x2, 0x1d4, 0x1d2, 0x3, 0x2, 0x2, 0x2, 
    0x1d5, 0x1d7, 0x7, 0x4d, 0x2, 0x2, 0x1d6, 0x1d5, 0x3, 0x2, 0x2, 0x2, 
    0x1d6, 0x1d7, 0x3, 0x2, 0x2, 0x2, 0x1d7, 0x1d8, 0x3, 0x2, 0x2, 0x2, 
    0x1d8, 0x1d9, 0x7, 0x2c, 0x2, 0x2, 0x1d9, 0x1da, 0x5, 0x46, 0x24, 0x2, 
    0x1da, 0x1dc, 0x7, 0x8, 0x2, 0x2, 0x1db, 0x1dd, 0x5, 0x90, 0x49, 0x2, 
    0x1dc, 0x1db, 0x3, 0x2, 0x2, 0x2, 0x1dc, 0x1dd, 0x3, 0x2, 0x2, 0x2, 
    0x1dd, 0x1de, 0x3, 0x2, 0x2, 0x2, 0x1de, 0x1e0, 0x7, 0x9, 0x2, 0x2, 
    0x1df, 0x1e1, 0x7, 0x2f, 0x2, 0x2, 0x1e0, 0x1df, 0x3, 0x2, 0x2, 0x2, 
    0x1e0, 0x1e1, 0x3, 0x2, 0x2, 0x2, 0x1e1, 0x53, 0x3, 0x2, 0x2, 0x2, 0x1e2, 
    0x1e4, 0x5, 0x3e, 0x20, 0x2, 0x1e3, 0x1e2, 0x3, 0x2, 0x2, 0x2, 0x1e3, 
    0x1e4, 0x3, 0x2, 0x2, 0x2, 0x1e4, 0x1e5, 0x3, 0x2, 0x2, 0x2, 0x1e5, 
    0x1e6, 0x5, 0x8c, 0x47, 0x2, 0x1e6, 0x55, 0x3, 0x2, 0x2, 0x2, 0x1e7, 
    0x1e8, 0x7, 0x41, 0x2, 0x2, 0x1e8, 0x57, 0x3, 0x2, 0x2, 0x2, 0x1e9, 
    0x1ea, 0x7, 0x49, 0x2, 0x2, 0x1ea, 0x59, 0x3, 0x2, 0x2, 0x2, 0x1eb, 
    0x1ed, 0x7, 0x42, 0x2, 0x2, 0x1ec, 0x1ee, 0x5, 0xa4, 0x53, 0x2, 0x1ed, 
    0x1ec, 0x3, 0x2, 0x2, 0x2, 0x1ed, 0x1ee, 0x3, 0x2, 0x2, 0x2, 0x1ee, 
    0x5b, 0x3, 0x2, 0x2, 0x2, 0x1ef, 0x1f3, 0x5, 0x5e, 0x30, 0x2, 0x1f0, 
    0x1f2, 0x5, 0x60, 0x31, 0x2, 0x1f1, 0x1f0, 0x3, 0x2, 0x2, 0x2, 0x1f2, 
    0x1f5, 0x3, 0x2, 0x2, 0x2, 0x1f3, 0x1f1, 0x3, 0x2, 0x2, 0x2, 0x1f3, 
    0x1f4, 0x3, 0x2, 0x2, 0x2, 0x1f4, 0x1f7, 0x3, 0x2, 0x2, 0x2, 0x1f5, 
    0x1f3, 0x3, 0x2, 0x2, 0x2, 0x1f6, 0x1f8, 0x5, 0x62, 0x32, 0x2, 0x1f7, 
    0x1f6, 0x3, 0x2, 0x2, 0x2, 0x1f7, 0x1f8, 0x3, 0x2, 0x2, 0x2, 0x1f8, 
    0x1f9, 0x3, 0x2, 0x2, 0x2, 0x1f9, 0x1fa, 0x7, 0x31, 0x2, 0x2, 0x1fa, 
    0x5d, 0x3, 0x2, 0x2, 0x2, 0x1fb, 0x1fc, 0x7, 0x33, 0x2, 0x2, 0x1fc, 
    0x1fd, 0x5, 0xa4, 0x53, 0x2, 0x1fd, 0x1fe, 0x7, 0x36, 0x2, 0x2, 0x1fe, 
    0x1ff, 0x5, 0x8c, 0x47, 0x2, 0x1ff, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x200, 
    0x201, 0x7, 0x34, 0x2, 0x2, 0x201, 0x202, 0x5, 0xa4, 0x53, 0x2, 0x202, 
    0x203, 0x7, 0x36, 0x2, 0x2, 0x203, 0x204, 0x5, 0x8c, 0x47, 0x2, 0x204, 
    0x61, 0x3, 0x2, 0x2, 0x2, 0x205, 0x206, 0x7, 0x35, 0x2, 0x2, 0x206, 
    0x207, 0x5, 0x8c, 0x47, 0x2, 0x207, 0x63, 0x3, 0x2, 0x2, 0x2, 0x208, 
    0x209, 0x7, 0x37, 0x2, 0x2, 0x209, 0x20a, 0x5, 0xa4, 0x53, 0x2, 0x20a, 
    0x20b, 0x7, 0x38, 0x2, 0x2, 0x20b, 0x20c, 0x5, 0x8c, 0x47, 0x2, 0x20c, 
    0x20d, 0x7, 0x32, 0x2, 0x2, 0x20d, 0x65, 0x3, 0x2, 0x2, 0x2, 0x20e, 
    0x20f, 0x7, 0x39, 0x2, 0x2, 0x20f, 0x210, 0x7, 0x4e, 0x2, 0x2, 0x210, 
    0x211, 0x7, 0xd, 0x2, 0x2, 0x211, 0x212, 0x5, 0xa4, 0x53, 0x2, 0x212, 
    0x213, 0x7, 0x3a, 0x2, 0x2, 0x213, 0x214, 0x5, 0xa4, 0x53, 0x2, 0x214, 
    0x215, 0x7, 0x38, 0x2, 0x2, 0x215, 0x216, 0x5, 0x8c, 0x47, 0x2, 0x216, 
    0x217, 0x7, 0x32, 0x2, 0x2, 0x217, 0x67, 0x3, 0x2, 0x2, 0x2, 0x218, 
    0x219, 0x7, 0x39, 0x2, 0x2, 0x219, 0x21a, 0x7, 0x3b, 0x2, 0x2, 0x21a, 
    0x21b, 0x7, 0x4e, 0x2, 0x2, 0x21b, 0x21c, 0x7, 0x3c, 0x2, 0x2, 0x21c, 
    0x21d, 0x5, 0xa4, 0x53, 0x2, 0x21d, 0x21e, 0x7, 0x38, 0x2, 0x2, 0x21e, 
    0x21f, 0x5, 0x8c, 0x47, 0x2, 0x21f, 0x220, 0x7, 0x32, 0x2, 0x2, 0x220, 
    0x69, 0x3, 0x2, 0x2, 0x2, 0x221, 0x222, 0x7, 0x3d, 0x2, 0x2, 0x222, 
    0x223, 0x5, 0x7a, 0x3e, 0x2, 0x223, 0x224, 0x7, 0x3e, 0x2, 0x2, 0x224, 
    0x225, 0x5, 0x7c, 0x3f, 0x2, 0x225, 0x226, 0x7, 0x3f, 0x2, 0x2, 0x226, 
    0x6b, 0x3, 0x2, 0x2, 0x2, 0x227, 0x229, 0x7, 0x40, 0x2, 0x2, 0x228, 
    0x22a, 0x5, 0xa4, 0x53, 0x2, 0x229, 0x228, 0x3, 0x2, 0x2, 0x2, 0x229, 
    0x22a, 0x3, 0x2, 0x2, 0x2, 0x22a, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x22b, 0x22e, 
    0x7, 0x4a, 0x2, 0x2, 0x22c, 0x22f, 0x5, 0xc8, 0x65, 0x2, 0x22d, 0x22f, 
    0x5, 0xa0, 0x51, 0x2, 0x22e, 0x22c, 0x3, 0x2, 0x2, 0x2, 0x22e, 0x22d, 
    0x3, 0x2, 0x2, 0x2, 0x22f, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x230, 0x232, 0x7, 
    0x7f, 0x2, 0x2, 0x231, 0x230, 0x3, 0x2, 0x2, 0x2, 0x231, 0x232, 0x3, 
    0x2, 0x2, 0x2, 0x232, 0x23f, 0x3, 0x2, 0x2, 0x2, 0x233, 0x236, 0x7, 
    0x4e, 0x2, 0x2, 0x234, 0x236, 0x5, 0xb6, 0x5c, 0x2, 0x235, 0x233, 0x3, 
    0x2, 0x2, 0x2, 0x235, 0x234, 0x3, 0x2, 0x2, 0x2, 0x236, 0x23a, 0x3, 
    0x2, 0x2, 0x2, 0x237, 0x239, 0x5, 0xbc, 0x5f, 0x2, 0x238, 0x237, 0x3, 
    0x2, 0x2, 0x2, 0x239, 0x23c, 0x3, 0x2, 0x2, 0x2, 0x23a, 0x238, 0x3, 
    0x2, 0x2, 0x2, 0x23a, 0x23b, 0x3, 0x2, 0x2, 0x2, 0x23b, 0x23d, 0x3, 
    0x2, 0x2, 0x2, 0x23c, 0x23a, 0x3, 0x2, 0x2, 0x2, 0x23d, 0x240, 0x5, 
    0xc2, 0x62, 0x2, 0x23e, 0x240, 0x5, 0xb6, 0x5c, 0x2, 0x23f, 0x235, 0x3, 
    0x2, 0x2, 0x2, 0x23f, 0x23e, 0x3, 0x2, 0x2, 0x2, 0x240, 0x71, 0x3, 0x2, 
    0x2, 0x2, 0x241, 0x242, 0x7, 0x7f, 0x2, 0x2, 0x242, 0x243, 0x7, 0x4e, 
    0x2, 0x2, 0x243, 0x73, 0x3, 0x2, 0x2, 0x2, 0x244, 0x245, 0x7, 0x4e, 
    0x2, 0x2, 0x245, 0x75, 0x3, 0x2, 0x2, 0x2, 0x246, 0x247, 0x7, 0x1f, 
    0x2, 0x2, 0x247, 0x248, 0x5, 0x74, 0x3b, 0x2, 0x248, 0x249, 0x7, 0xa, 
    0x2, 0x2, 0x249, 0x77, 0x3, 0x2, 0x2, 0x2, 0x24a, 0x24b, 0x7, 0x48, 
    0x2, 0x2, 0x24b, 0x24c, 0x7, 0x1f, 0x2, 0x2, 0x24c, 0x24d, 0x5, 0x74, 
    0x3b, 0x2, 0x24d, 0x79, 0x3, 0x2, 0x2, 0x2, 0x24e, 0x24f, 0x5, 0x8c, 
    0x47, 0x2, 0x24f, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x250, 0x251, 0x5, 0x8c, 
    0x47, 0x2, 0x251, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x252, 0x253, 0x5, 0xa4, 
    0x53, 0x2, 0x253, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x254, 0x255, 0x5, 0xa4, 
    0x53, 0x2, 0x255, 0x81, 0x3, 0x2, 0x2, 0x2, 0x256, 0x257, 0x7, 0x4b, 
    0x2, 0x2, 0x257, 0x258, 0x5, 0x7e, 0x40, 0x2, 0x258, 0x259, 0x7, 0xc, 
    0x2, 0x2, 0x259, 0x25a, 0x5, 0x80, 0x41, 0x2, 0x25a, 0x83, 0x3, 0x2, 
    0x2, 0x2, 0x25b, 0x25c, 0x7, 0x4c, 0x2, 0x2, 0x25c, 0x25d, 0x5, 0x7e, 
    0x40, 0x2, 0x25d, 0x25e, 0x7, 0xc, 0x2, 0x2, 0x25e, 0x25f, 0x5, 0x80, 
    0x41, 0x2, 0x25f, 0x85, 0x3, 0x2, 0x2, 0x2, 0x260, 0x261, 0x7, 0x18, 
    0x2, 0x2, 0x261, 0x262, 0x7, 0x8, 0x2, 0x2, 0x262, 0x263, 0x5, 0xa4, 
    0x53, 0x2, 0x263, 0x264, 0x7, 0xc, 0x2, 0x2, 0x264, 0x265, 0x5, 0xa4, 
    0x53, 0x2, 0x265, 0x266, 0x7, 0xc, 0x2, 0x2, 0x266, 0x267, 0x5, 0xa4, 
    0x53, 0x2, 0x267, 0x268, 0x7, 0x9, 0x2, 0x2, 0x268, 0x87, 0x3, 0x2, 
    0x2, 0x2, 0x269, 0x26a, 0x5, 0x8c, 0x47, 0x2, 0x26a, 0x89, 0x3, 0x2, 
    0x2, 0x2, 0x26b, 0x26c, 0x5, 0x8c, 0x47, 0x2, 0x26c, 0x8b, 0x3, 0x2, 
    0x2, 0x2, 0x26d, 0x270, 0x5, 0x9c, 0x4f, 0x2, 0x26e, 0x270, 0x5, 0x24, 
    0x13, 0x2, 0x26f, 0x26d, 0x3, 0x2, 0x2, 0x2, 0x26f, 0x26e, 0x3, 0x2, 
    0x2, 0x2, 0x270, 0x273, 0x3, 0x2, 0x2, 0x2, 0x271, 0x26f, 0x3, 0x2, 
    0x2, 0x2, 0x271, 0x272, 0x3, 0x2, 0x2, 0x2, 0x272, 0x8d, 0x3, 0x2, 0x2, 
    0x2, 0x273, 0x271, 0x3, 0x2, 0x2, 0x2, 0x274, 0x275, 0x9, 0x7, 0x2, 
    0x2, 0x275, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x276, 0x27b, 0x5, 0x92, 0x4a, 
    0x2, 0x277, 0x278, 0x7, 0xc, 0x2, 0x2, 0x278, 0x27a, 0x5, 0x92, 0x4a, 
    0x2, 0x279, 0x277, 0x3, 0x2, 0x2, 0x2, 0x27a, 0x27d, 0x3, 0x2, 0x2, 
    0x2, 0x27b, 0x279, 0x3, 0x2, 0x2, 0x2, 0x27b, 0x27c, 0x3, 0x2, 0x2, 
    0x2, 0x27c, 0x91, 0x3, 0x2, 0x2, 0x2, 0x27d, 0x27b, 0x3, 0x2, 0x2, 0x2, 
    0x27e, 0x280, 0x7, 0x30, 0x2, 0x2, 0x27f, 0x27e, 0x3, 0x2, 0x2, 0x2, 
    0x27f, 0x280, 0x3, 0x2, 0x2, 0x2, 0x280, 0x281, 0x3, 0x2, 0x2, 0x2, 
    0x281, 0x284, 0x7, 0x4e, 0x2, 0x2, 0x282, 0x283, 0x7, 0xd, 0x2, 0x2, 
    0x283, 0x285, 0x5, 0x94, 0x4b, 0x2, 0x284, 0x282, 0x3, 0x2, 0x2, 0x2, 
    0x284, 0x285, 0x3, 0x2, 0x2, 0x2, 0x285, 0x93, 0x3, 0x2, 0x2, 0x2, 0x286, 
    0x287, 0x5, 0x96, 0x4c, 0x2, 0x287, 0x95, 0x3, 0x2, 0x2, 0x2, 0x288, 
    0x28a, 0x9, 0x8, 0x2, 0x2, 0x289, 0x288, 0x3, 0x2, 0x2, 0x2, 0x289, 
    0x28a, 0x3, 0x2, 0x2, 0x2, 0x28a, 0x28b, 0x3, 0x2, 0x2, 0x2, 0x28b, 
    0x293, 0x5, 0x8e, 0x48, 0x2, 0x28c, 0x293, 0x5, 0x9a, 0x4e, 0x2, 0x28d, 
    0x293, 0x7, 0x20, 0x2, 0x2, 0x28e, 0x293, 0x7, 0x21, 0x2, 0x2, 0x28f, 
    0x293, 0x7, 0x22, 0x2, 0x2, 0x290, 0x293, 0x7, 0x23, 0x2, 0x2, 0x291, 
    0x293, 0x7, 0x25, 0x2, 0x2, 0x292, 0x289, 0x3, 0x2, 0x2, 0x2, 0x292, 
    0x28c, 0x3, 0x2, 0x2, 0x2, 0x292, 0x28d, 0x3, 0x2, 0x2, 0x2, 0x292, 
    0x28e, 0x3, 0x2, 0x2, 0x2, 0x292, 0x28f, 0x3, 0x2, 0x2, 0x2, 0x292, 
    0x290, 0x3, 0x2, 0x2, 0x2, 0x292, 0x291, 0x3, 0x2, 0x2, 0x2, 0x293, 
    0x97, 0x3, 0x2, 0x2, 0x2, 0x294, 0x29a, 0x7, 0x28, 0x2, 0x2, 0x295, 
    0x299, 0x7, 0x2a, 0x2, 0x2, 0x296, 0x299, 0x7, 0x1e, 0x2, 0x2, 0x297, 
    0x299, 0x5, 0x24, 0x13, 0x2, 0x298, 0x295, 0x3, 0x2, 0x2, 0x2, 0x298, 
    0x296, 0x3, 0x2, 0x2, 0x2, 0x298, 0x297, 0x3, 0x2, 0x2, 0x2, 0x299, 
    0x29c, 0x3, 0x2, 0x2, 0x2, 0x29a, 0x298, 0x3, 0x2, 0x2, 0x2, 0x29a, 
    0x29b, 0x3, 0x2, 0x2, 0x2, 0x29b, 0x29d, 0x3, 0x2, 0x2, 0x2, 0x29c, 
    0x29a, 0x3, 0x2, 0x2, 0x2, 0x29d, 0x29e, 0x7, 0x29, 0x2, 0x2, 0x29e, 
    0x99, 0x3, 0x2, 0x2, 0x2, 0x29f, 0x2a2, 0x7, 0x27, 0x2, 0x2, 0x2a0, 
    0x2a2, 0x5, 0x98, 0x4d, 0x2, 0x2a1, 0x29f, 0x3, 0x2, 0x2, 0x2, 0x2a1, 
    0x2a0, 0x3, 0x2, 0x2, 0x2, 0x2a2, 0x2a3, 0x3, 0x2, 0x2, 0x2, 0x2a3, 
    0x2a1, 0x3, 0x2, 0x2, 0x2, 0x2a3, 0x2a4, 0x3, 0x2, 0x2, 0x2, 0x2a4, 
    0x9b, 0x3, 0x2, 0x2, 0x2, 0x2a5, 0x2ab, 0x5, 0x76, 0x3c, 0x2, 0x2a6, 
    0x2ac, 0x5, 0x70, 0x39, 0x2, 0x2a7, 0x2ac, 0x5, 0x72, 0x3a, 0x2, 0x2a8, 
    0x2ac, 0x5, 0xca, 0x66, 0x2, 0x2a9, 0x2ac, 0x5, 0x9e, 0x50, 0x2, 0x2aa, 
    0x2ac, 0x5, 0x24, 0x13, 0x2, 0x2ab, 0x2a6, 0x3, 0x2, 0x2, 0x2, 0x2ab, 
    0x2a7, 0x3, 0x2, 0x2, 0x2, 0x2ab, 0x2a8, 0x3, 0x2, 0x2, 0x2, 0x2ab, 
    0x2a9, 0x3, 0x2, 0x2, 0x2, 0x2ab, 0x2aa, 0x3, 0x2, 0x2, 0x2, 0x2ab, 
    0x2ac, 0x3, 0x2, 0x2, 0x2, 0x2ac, 0x2b5, 0x3, 0x2, 0x2, 0x2, 0x2ad, 
    0x2b3, 0x5, 0x70, 0x39, 0x2, 0x2ae, 0x2b3, 0x5, 0x72, 0x3a, 0x2, 0x2af, 
    0x2b3, 0x5, 0xca, 0x66, 0x2, 0x2b0, 0x2b3, 0x5, 0x9e, 0x50, 0x2, 0x2b1, 
    0x2b3, 0x5, 0x24, 0x13, 0x2, 0x2b2, 0x2ad, 0x3, 0x2, 0x2, 0x2, 0x2b2, 
    0x2ae, 0x3, 0x2, 0x2, 0x2, 0x2b2, 0x2af, 0x3, 0x2, 0x2, 0x2, 0x2b2, 
    0x2b0, 0x3, 0x2, 0x2, 0x2, 0x2b2, 0x2b1, 0x3, 0x2, 0x2, 0x2, 0x2b3, 
    0x2b5, 0x3, 0x2, 0x2, 0x2, 0x2b4, 0x2a5, 0x3, 0x2, 0x2, 0x2, 0x2b4, 
    0x2b2, 0x3, 0x2, 0x2, 0x2, 0x2b5, 0x2b7, 0x3, 0x2, 0x2, 0x2, 0x2b6, 
    0x2b8, 0x7, 0xb, 0x2, 0x2, 0x2b7, 0x2b6, 0x3, 0x2, 0x2, 0x2, 0x2b7, 
    0x2b8, 0x3, 0x2, 0x2, 0x2, 0x2b8, 0x2bb, 0x3, 0x2, 0x2, 0x2, 0x2b9, 
    0x2bb, 0x7, 0xb, 0x2, 0x2, 0x2ba, 0x2b4, 0x3, 0x2, 0x2, 0x2, 0x2ba, 
    0x2b9, 0x3, 0x2, 0x2, 0x2, 0x2bb, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x2bc, 0x2c0, 
    0x5, 0xc0, 0x61, 0x2, 0x2bd, 0x2bf, 0x5, 0x24, 0x13, 0x2, 0x2be, 0x2bd, 
    0x3, 0x2, 0x2, 0x2, 0x2bf, 0x2c2, 0x3, 0x2, 0x2, 0x2, 0x2c0, 0x2be, 
    0x3, 0x2, 0x2, 0x2, 0x2c0, 0x2c1, 0x3, 0x2, 0x2, 0x2, 0x2c1, 0x2c3, 
    0x3, 0x2, 0x2, 0x2, 0x2c2, 0x2c0, 0x3, 0x2, 0x2, 0x2, 0x2c3, 0x2cb, 
    0x7, 0xd, 0x2, 0x2, 0x2c4, 0x2c6, 0x5, 0x24, 0x13, 0x2, 0x2c5, 0x2c4, 
    0x3, 0x2, 0x2, 0x2, 0x2c6, 0x2c9, 0x3, 0x2, 0x2, 0x2, 0x2c7, 0x2c5, 
    0x3, 0x2, 0x2, 0x2, 0x2c7, 0x2c8, 0x3, 0x2, 0x2, 0x2, 0x2c8, 0x2ca, 
    0x3, 0x2, 0x2, 0x2, 0x2c9, 0x2c7, 0x3, 0x2, 0x2, 0x2, 0x2ca, 0x2cc, 
    0x5, 0xa4, 0x53, 0x2, 0x2cb, 0x2c7, 0x3, 0x2, 0x2, 0x2, 0x2cb, 0x2cc, 
    0x3, 0x2, 0x2, 0x2, 0x2cc, 0x9f, 0x3, 0x2, 0x2, 0x2, 0x2cd, 0x2d2, 0x5, 
    0xa2, 0x52, 0x2, 0x2ce, 0x2cf, 0x7, 0xc, 0x2, 0x2, 0x2cf, 0x2d1, 0x5, 
    0xa2, 0x52, 0x2, 0x2d0, 0x2ce, 0x3, 0x2, 0x2, 0x2, 0x2d1, 0x2d4, 0x3, 
    0x2, 0x2, 0x2, 0x2d2, 0x2d0, 0x3, 0x2, 0x2, 0x2, 0x2d2, 0x2d3, 0x3, 
    0x2, 0x2, 0x2, 0x2d3, 0xa1, 0x3, 0x2, 0x2, 0x2, 0x2d4, 0x2d2, 0x3, 0x2, 
    0x2, 0x2, 0x2d5, 0x2d7, 0x5, 0xa4, 0x53, 0x2, 0x2d6, 0x2d5, 0x3, 0x2, 
    0x2, 0x2, 0x2d6, 0x2d7, 0x3, 0x2, 0x2, 0x2, 0x2d7, 0xa3, 0x3, 0x2, 0x2, 
    0x2, 0x2d8, 0x2ef, 0x5, 0xae, 0x58, 0x2, 0x2d9, 0x2db, 0x5, 0x24, 0x13, 
    0x2, 0x2da, 0x2d9, 0x3, 0x2, 0x2, 0x2, 0x2db, 0x2de, 0x3, 0x2, 0x2, 
    0x2, 0x2dc, 0x2da, 0x3, 0x2, 0x2, 0x2, 0x2dc, 0x2dd, 0x3, 0x2, 0x2, 
    0x2, 0x2dd, 0x2df, 0x3, 0x2, 0x2, 0x2, 0x2de, 0x2dc, 0x3, 0x2, 0x2, 
    0x2, 0x2df, 0x2e3, 0x5, 0xa6, 0x54, 0x2, 0x2e0, 0x2e2, 0x5, 0x24, 0x13, 
    0x2, 0x2e1, 0x2e0, 0x3, 0x2, 0x2, 0x2, 0x2e2, 0x2e5, 0x3, 0x2, 0x2, 
    0x2, 0x2e3, 0x2e1, 0x3, 0x2, 0x2, 0x2, 0x2e3, 0x2e4, 0x3, 0x2, 0x2, 
    0x2, 0x2e4, 0x2e6, 0x3, 0x2, 0x2, 0x2, 0x2e5, 0x2e3, 0x3, 0x2, 0x2, 
    0x2, 0x2e6, 0x2ea, 0x5, 0xae, 0x58, 0x2, 0x2e7, 0x2e9, 0x5, 0x24, 0x13, 
    0x2, 0x2e8, 0x2e7, 0x3, 0x2, 0x2, 0x2, 0x2e9, 0x2ec, 0x3, 0x2, 0x2, 
    0x2, 0x2ea, 0x2e8, 0x3, 0x2, 0x2, 0x2, 0x2ea, 0x2eb, 0x3, 0x2, 0x2, 
    0x2, 0x2eb, 0x2ee, 0x3, 0x2, 0x2, 0x2, 0x2ec, 0x2ea, 0x3, 0x2, 0x2, 
    0x2, 0x2ed, 0x2dc, 0x3, 0x2, 0x2, 0x2, 0x2ee, 0x2f1, 0x3, 0x2, 0x2, 
    0x2, 0x2ef, 0x2ed, 0x3, 0x2, 0x2, 0x2, 0x2ef, 0x2f0, 0x3, 0x2, 0x2, 
    0x2, 0x2f0, 0xa5, 0x3, 0x2, 0x2, 0x2, 0x2f1, 0x2ef, 0x3, 0x2, 0x2, 0x2, 
    0x2f2, 0x2fa, 0x7, 0xe, 0x2, 0x2, 0x2f3, 0x2fa, 0x7, 0xf, 0x2, 0x2, 
    0x2f4, 0x2fa, 0x7, 0x15, 0x2, 0x2, 0x2f5, 0x2fa, 0x7, 0x16, 0x2, 0x2, 
    0x2f6, 0x2fa, 0x7, 0x17, 0x2, 0x2, 0x2f7, 0x2fa, 0x5, 0xaa, 0x56, 0x2, 
    0x2f8, 0x2fa, 0x5, 0xa8, 0x55, 0x2, 0x2f9, 0x2f2, 0x3, 0x2, 0x2, 0x2, 
    0x2f9, 0x2f3, 0x3, 0x2, 0x2, 0x2, 0x2f9, 0x2f4, 0x3, 0x2, 0x2, 0x2, 
    0x2f9, 0x2f5, 0x3, 0x2, 0x2, 0x2, 0x2f9, 0x2f6, 0x3, 0x2, 0x2, 0x2, 
    0x2f9, 0x2f7, 0x3, 0x2, 0x2, 0x2, 0x2f9, 0x2f8, 0x3, 0x2, 0x2, 0x2, 
    0x2fa, 0xa7, 0x3, 0x2, 0x2, 0x2, 0x2fb, 0x2fc, 0x9, 0x9, 0x2, 0x2, 0x2fc, 
    0xa9, 0x3, 0x2, 0x2, 0x2, 0x2fd, 0x2fe, 0x9, 0xa, 0x2, 0x2, 0x2fe, 0xab, 
    0x3, 0x2, 0x2, 0x2, 0x2ff, 0x300, 0x9, 0xb, 0x2, 0x2, 0x300, 0xad, 0x3, 
    0x2, 0x2, 0x2, 0x301, 0x303, 0x5, 0xac, 0x57, 0x2, 0x302, 0x301, 0x3, 
    0x2, 0x2, 0x2, 0x302, 0x303, 0x3, 0x2, 0x2, 0x2, 0x303, 0x315, 0x3, 
    0x2, 0x2, 0x2, 0x304, 0x316, 0x5, 0x96, 0x4c, 0x2, 0x305, 0x316, 0x5, 
    0xba, 0x5e, 0x2, 0x306, 0x307, 0x7, 0x8, 0x2, 0x2, 0x307, 0x308, 0x5, 
    0xa4, 0x53, 0x2, 0x308, 0x309, 0x7, 0x9, 0x2, 0x2, 0x309, 0x30d, 0x3, 
    0x2, 0x2, 0x2, 0x30a, 0x30c, 0x5, 0xbc, 0x5f, 0x2, 0x30b, 0x30a, 0x3, 
    0x2, 0x2, 0x2, 0x30c, 0x30f, 0x3, 0x2, 0x2, 0x2, 0x30d, 0x30b, 0x3, 
    0x2, 0x2, 0x2, 0x30d, 0x30e, 0x3, 0x2, 0x2, 0x2, 0x30e, 0x316, 0x3, 
    0x2, 0x2, 0x2, 0x30f, 0x30d, 0x3, 0x2, 0x2, 0x2, 0x310, 0x313, 0x7, 
    0x7f, 0x2, 0x2, 0x311, 0x314, 0x7, 0x4e, 0x2, 0x2, 0x312, 0x314, 0x5, 
    0xb6, 0x5c, 0x2, 0x313, 0x311, 0x3, 0x2, 0x2, 0x2, 0x313, 0x312, 0x3, 
    0x2, 0x2, 0x2, 0x314, 0x316, 0x3, 0x2, 0x2, 0x2, 0x315, 0x304, 0x3, 
    0x2, 0x2, 0x2, 0x315, 0x305, 0x3, 0x2, 0x2, 0x2, 0x315, 0x306, 0x3, 
    0x2, 0x2, 0x2, 0x315, 0x310, 0x3, 0x2, 0x2, 0x2, 0x316, 0xaf, 0x3, 0x2, 
    0x2, 0x2, 0x317, 0x318, 0x7, 0x47, 0x2, 0x2, 0x318, 0x31a, 0x5, 0xb2, 
    0x5a, 0x2, 0x319, 0x31b, 0x5, 0xc8, 0x65, 0x2, 0x31a, 0x319, 0x3, 0x2, 
    0x2, 0x2, 0x31a, 0x31b, 0x3, 0x2, 0x2, 0x2, 0x31b, 0x31f, 0x3, 0x2, 
    0x2, 0x2, 0x31c, 0x31d, 0x7, 0x47, 0x2, 0x2, 0x31d, 0x31f, 0x5, 0xc8, 
    0x65, 0x2, 0x31e, 0x317, 0x3, 0x2, 0x2, 0x2, 0x31e, 0x31c, 0x3, 0x2, 
    0x2, 0x2, 0x31f, 0xb1, 0x3, 0x2, 0x2, 0x2, 0x320, 0x321, 0x7, 0x4e, 
    0x2, 0x2, 0x321, 0xb3, 0x3, 0x2, 0x2, 0x2, 0x322, 0x323, 0x5, 0xb8, 
    0x5d, 0x2, 0x323, 0x324, 0x5, 0xc8, 0x65, 0x2, 0x324, 0xb5, 0x3, 0x2, 
    0x2, 0x2, 0x325, 0x326, 0x5, 0xb8, 0x5d, 0x2, 0x326, 0x327, 0x5, 0xc8, 
    0x65, 0x2, 0x327, 0xb7, 0x3, 0x2, 0x2, 0x2, 0x328, 0x329, 0x7, 0x4e, 
    0x2, 0x2, 0x329, 0xb9, 0x3, 0x2, 0x2, 0x2, 0x32a, 0x32f, 0x7, 0x4e, 
    0x2, 0x2, 0x32b, 0x32f, 0x5, 0xb0, 0x59, 0x2, 0x32c, 0x32f, 0x5, 0x86, 
    0x44, 0x2, 0x32d, 0x32f, 0x5, 0xb6, 0x5c, 0x2, 0x32e, 0x32a, 0x3, 0x2, 
    0x2, 0x2, 0x32e, 0x32b, 0x3, 0x2, 0x2, 0x2, 0x32e, 0x32c, 0x3, 0x2, 
    0x2, 0x2, 0x32e, 0x32d, 0x3, 0x2, 0x2, 0x2, 0x32f, 0x333, 0x3, 0x2, 
    0x2, 0x2, 0x330, 0x332, 0x5, 0xbc, 0x5f, 0x2, 0x331, 0x330, 0x3, 0x2, 
    0x2, 0x2, 0x332, 0x335, 0x3, 0x2, 0x2, 0x2, 0x333, 0x331, 0x3, 0x2, 
    0x2, 0x2, 0x333, 0x334, 0x3, 0x2, 0x2, 0x2, 0x334, 0xbb, 0x3, 0x2, 0x2, 
    0x2, 0x335, 0x333, 0x3, 0x2, 0x2, 0x2, 0x336, 0x33a, 0x5, 0xc6, 0x64, 
    0x2, 0x337, 0x33a, 0x5, 0xc4, 0x63, 0x2, 0x338, 0x33a, 0x5, 0xc2, 0x62, 
    0x2, 0x339, 0x336, 0x3, 0x2, 0x2, 0x2, 0x339, 0x337, 0x3, 0x2, 0x2, 
    0x2, 0x339, 0x338, 0x3, 0x2, 0x2, 0x2, 0x33a, 0xbd, 0x3, 0x2, 0x2, 0x2, 
    0x33b, 0x33d, 0x5, 0xbc, 0x5f, 0x2, 0x33c, 0x33b, 0x3, 0x2, 0x2, 0x2, 
    0x33d, 0x340, 0x3, 0x2, 0x2, 0x2, 0x33e, 0x33c, 0x3, 0x2, 0x2, 0x2, 
    0x33e, 0x33f, 0x3, 0x2, 0x2, 0x2, 0x33f, 0x343, 0x3, 0x2, 0x2, 0x2, 
    0x340, 0x33e, 0x3, 0x2, 0x2, 0x2, 0x341, 0x344, 0x5, 0xc6, 0x64, 0x2, 
    0x342, 0x344, 0x5, 0xc4, 0x63, 0x2, 0x343, 0x341, 0x3, 0x2, 0x2, 0x2, 
    0x343, 0x342, 0x3, 0x2, 0x2, 0x2, 0x344, 0xbf, 0x3, 0x2, 0x2, 0x2, 0x345, 
    0x348, 0x7, 0x4e, 0x2, 0x2, 0x346, 0x348, 0x5, 0xb6, 0x5c, 0x2, 0x347, 
    0x345, 0x3, 0x2, 0x2, 0x2, 0x347, 0x346, 0x3, 0x2, 0x2, 0x2, 0x348, 
    0x34a, 0x3, 0x2, 0x2, 0x2, 0x349, 0x34b, 0x5, 0xbe, 0x60, 0x2, 0x34a, 
    0x349, 0x3, 0x2, 0x2, 0x2, 0x34a, 0x34b, 0x3, 0x2, 0x2, 0x2, 0x34b, 
    0xc1, 0x3, 0x2, 0x2, 0x2, 0x34c, 0x34d, 0x7, 0x5, 0x2, 0x2, 0x34d, 0x34e, 
    0x5, 0xb4, 0x5b, 0x2, 0x34e, 0xc3, 0x3, 0x2, 0x2, 0x2, 0x34f, 0x350, 
    0x7, 0x6, 0x2, 0x2, 0x350, 0x351, 0x5, 0xa4, 0x53, 0x2, 0x351, 0x352, 
    0x7, 0x7, 0x2, 0x2, 0x352, 0xc5, 0x3, 0x2, 0x2, 0x2, 0x353, 0x354, 0x7, 
    0x5, 0x2, 0x2, 0x354, 0x355, 0x7, 0x4e, 0x2, 0x2, 0x355, 0xc7, 0x3, 
    0x2, 0x2, 0x2, 0x356, 0x357, 0x7, 0x8, 0x2, 0x2, 0x357, 0x358, 0x5, 
    0xa0, 0x51, 0x2, 0x358, 0x359, 0x7, 0x9, 0x2, 0x2, 0x359, 0xc9, 0x3, 
    0x2, 0x2, 0x2, 0x35a, 0x368, 0x5, 0x5c, 0x2f, 0x2, 0x35b, 0x368, 0x5, 
    0x64, 0x33, 0x2, 0x35c, 0x368, 0x5, 0x66, 0x34, 0x2, 0x35d, 0x368, 0x5, 
    0x68, 0x35, 0x2, 0x35e, 0x368, 0x5, 0x6a, 0x36, 0x2, 0x35f, 0x368, 0x5, 
    0x6c, 0x37, 0x2, 0x360, 0x368, 0x5, 0x56, 0x2c, 0x2, 0x361, 0x368, 0x5, 
    0x58, 0x2d, 0x2, 0x362, 0x368, 0x5, 0x5a, 0x2e, 0x2, 0x363, 0x368, 0x5, 
    0x6e, 0x38, 0x2, 0x364, 0x368, 0x5, 0x78, 0x3d, 0x2, 0x365, 0x368, 0x5, 
    0x82, 0x42, 0x2, 0x366, 0x368, 0x5, 0x84, 0x43, 0x2, 0x367, 0x35a, 0x3, 
    0x2, 0x2, 0x2, 0x367, 0x35b, 0x3, 0x2, 0x2, 0x2, 0x367, 0x35c, 0x3, 
    0x2, 0x2, 0x2, 0x367, 0x35d, 0x3, 0x2, 0x2, 0x2, 0x367, 0x35e, 0x3, 
    0x2, 0x2, 0x2, 0x367, 0x35f, 0x3, 0x2, 0x2, 0x2, 0x367, 0x360, 0x3, 
    0x2, 0x2, 0x2, 0x367, 0x361, 0x3, 0x2, 0x2, 0x2, 0x367, 0x362, 0x3, 
    0x2, 0x2, 0x2, 0x367, 0x363, 0x3, 0x2, 0x2, 0x2, 0x367, 0x364, 0x3, 
    0x2, 0x2, 0x2, 0x367, 0x365, 0x3, 0x2, 0x2, 0x2, 0x367, 0x366, 0x3, 
    0x2, 0x2, 0x2, 0x368, 0xcb, 0x3, 0x2, 0x2, 0x2, 0x5e, 0xcd, 0xd2, 0xd6, 
    0xdb, 0xe1, 0xeb, 0x107, 0x10e, 0x112, 0x118, 0x11b, 0x123, 0x136, 0x144, 
    0x152, 0x15a, 0x15d, 0x164, 0x167, 0x16e, 0x173, 0x175, 0x17b, 0x182, 
    0x187, 0x18c, 0x191, 0x193, 0x199, 0x1a0, 0x1aa, 0x1ae, 0x1bb, 0x1bd, 
    0x1c1, 0x1c7, 0x1cb, 0x1d0, 0x1d2, 0x1d6, 0x1dc, 0x1e0, 0x1e3, 0x1ed, 
    0x1f3, 0x1f7, 0x229, 0x22e, 0x231, 0x235, 0x23a, 0x23f, 0x26f, 0x271, 
    0x27b, 0x27f, 0x284, 0x289, 0x292, 0x298, 0x29a, 0x2a1, 0x2a3, 0x2ab, 
    0x2b2, 0x2b4, 0x2b7, 0x2ba, 0x2c0, 0x2c7, 0x2cb, 0x2d2, 0x2d6, 0x2dc, 
    0x2e3, 0x2ea, 0x2ef, 0x2f9, 0x302, 0x30d, 0x313, 0x315, 0x31a, 0x31e, 
    0x32e, 0x333, 0x339, 0x33e, 0x343, 0x347, 0x34a, 0x367, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

BSLParser::Initializer BSLParser::_init;
