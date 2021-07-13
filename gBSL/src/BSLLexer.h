
// Generated from d:\cpp\AddInNative\gBSL\src\BSLLexer.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"




class  BSLLexer : public antlr4::Lexer {
public:
  enum {
    LINE_COMMENT = 1, WHITE_SPACE = 2, DOT = 3, LBRACK = 4, RBRACK = 5, 
    LPAREN = 6, RPAREN = 7, COLON = 8, SEMICOLON = 9, COMMA = 10, ASSIGN = 11, 
    PLUS = 12, MINUS = 13, LESS_OR_EQUAL = 14, NOT_EQUAL = 15, LESS = 16, 
    GREATER_OR_EQUAL = 17, GREATER = 18, MUL = 19, QUOTIENT = 20, MODULO = 21, 
    QUESTION = 22, AMPERSAND = 23, PREPROC_DELETE = 24, PREPROC_INSERT = 25, 
    PREPROC_ENDINSERT = 26, HASH = 27, SQUOTE = 28, BAR = 29, TILDA = 30, 
    TRUE = 31, FALSE = 32, UNDEFINED = 33, NULL_VALUE = 34, DECIMAL = 35, 
    DATETIME = 36, FLOAT = 37, STRING = 38, STRINGSTART = 39, STRINGTAIL = 40, 
    STRINGPART = 41, PROCEDURE_KEYWORD = 42, FUNCTION_KEYWORD = 43, ENDPROCEDURE_KEYWORD = 44, 
    ENDFUNCTION_KEYWORD = 45, EXPORT_KEYWORD = 46, VAL_KEYWORD = 47, ENDIF_KEYWORD = 48, 
    ENDDO_KEYWORD = 49, IF_KEYWORD = 50, ELSIF_KEYWORD = 51, ELSE_KEYWORD = 52, 
    THEN_KEYWORD = 53, WHILE_KEYWORD = 54, DO_KEYWORD = 55, FOR_KEYWORD = 56, 
    TO_KEYWORD = 57, EACH_KEYWORD = 58, IN_KEYWORD = 59, TRY_KEYWORD = 60, 
    EXCEPT_KEYWORD = 61, ENDTRY_KEYWORD = 62, RETURN_KEYWORD = 63, CONTINUE_KEYWORD = 64, 
    RAISE_KEYWORD = 65, VAR_KEYWORD = 66, NOT_KEYWORD = 67, OR_KEYWORD = 68, 
    AND_KEYWORD = 69, NEW_KEYWORD = 70, GOTO_KEYWORD = 71, BREAK_KEYWORD = 72, 
    EXECUTE_KEYWORD = 73, ADDHANDLER_KEYWORD = 74, REMOVEHANDLER_KEYWORD = 75, 
    ASYNC_KEYWORD = 76, WAIT_KEYWORD = 77, IDENTIFIER = 78, UNKNOWN = 79, 
    PREPROC_EXCLAMATION_MARK = 80, PREPROC_LPAREN = 81, PREPROC_RPAREN = 82, 
    PREPROC_STRINGSTART = 83, PREPROC_STRING = 84, PREPROC_STRINGTAIL = 85, 
    PREPROC_STRINGPART = 86, PREPROC_USE_KEYWORD = 87, PREPROC_REGION = 88, 
    PREPROC_END_REGION = 89, PREPROC_NOT_KEYWORD = 90, PREPROC_OR_KEYWORD = 91, 
    PREPROC_AND_KEYWORD = 92, PREPROC_IF_KEYWORD = 93, PREPROC_THEN_KEYWORD = 94, 
    PREPROC_ELSIF_KEYWORD = 95, PREPROC_ENDIF_KEYWORD = 96, PREPROC_ELSE_KEYWORD = 97, 
    PREPROC_MOBILEAPPCLIENT_SYMBOL = 98, PREPROC_MOBILEAPPSERVER_SYMBOL = 99, 
    PREPROC_MOBILECLIENT_SYMBOL = 100, PREPROC_THICKCLIENTORDINARYAPPLICATION_SYMBOL = 101, 
    PREPROC_THICKCLIENTMANAGEDAPPLICATION_SYMBOL = 102, PREPROC_EXTERNALCONNECTION_SYMBOL = 103, 
    PREPROC_THINCLIENT_SYMBOL = 104, PREPROC_WEBCLIENT_SYMBOL = 105, PREPROC_ATCLIENT_SYMBOL = 106, 
    PREPROC_CLIENT_SYMBOL = 107, PREPROC_ATSERVER_SYMBOL = 108, PREPROC_SERVER_SYMBOL = 109, 
    PREPROC_LINUX = 110, PREPROC_WINDOWS = 111, PREPROC_MACOS = 112, PREPROC_IDENTIFIER = 113, 
    PREPROC_LINE_COMMENT = 114, PREPROC_NEWLINE = 115, PREPROC_ANY = 116, 
    ANNOTATION_ATSERVERNOCONTEXT_SYMBOL = 117, ANNOTATION_ATCLIENTATSERVERNOCONTEXT_SYMBOL = 118, 
    ANNOTATION_ATCLIENTATSERVER_SYMBOL = 119, ANNOTATION_ATCLIENT_SYMBOL = 120, 
    ANNOTATION_ATSERVER_SYMBOL = 121, ANNOTATION_BEFORE_SYMBOL = 122, ANNOTATION_AFTER_SYMBOL = 123, 
    ANNOTATION_AROUND_SYMBOL = 124, ANNOTATION_CHANGEANDVALIDATE_SYMBOL = 125, 
    ANNOTATION_CUSTOM_SYMBOL = 126, ANNOTATION_UNKNOWN = 127, PREPROC_ENDDELETE = 128, 
    PREPROC_DELETE_ANY = 129
  };

  enum {
    COMMENT = 2, PREPROC_DELETE_CHANNEL = 3
  };

  enum {
    PREPROCESSOR_MODE = 1, ANNOTATION_MODE = 2, LABEL_MODE = 3, REGION_MODE = 4, 
    USE_MODE = 5, DOT_MODE = 6, PREPROC_DELETE_MODE = 7
  };

  BSLLexer(antlr4::CharStream *input);
  ~BSLLexer();

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

