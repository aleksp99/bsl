
// Generated from .\BSLParser.g4 by ANTLR 4.12.0


#include "BSLParserListener.h"

#include "BSLParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct BSLParserStaticData final {
  BSLParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  BSLParserStaticData(const BSLParserStaticData&) = delete;
  BSLParserStaticData(BSLParserStaticData&&) = delete;
  BSLParserStaticData& operator=(const BSLParserStaticData&) = delete;
  BSLParserStaticData& operator=(BSLParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag bslparserParserOnceFlag;
BSLParserStaticData *bslparserParserStaticData = nullptr;

void bslparserParserInitialize() {
  assert(bslparserParserStaticData == nullptr);
  auto staticData = std::make_unique<BSLParserStaticData>(
    std::vector<std::string>{
      "file", "shebang", "usedLib", "use", "regionStart", "regionEnd", "regionName", 
      "preproc_if", "preproc_elsif", "preproc_else", "preproc_endif", "preproc_expression", 
      "preproc_logicalOperand", "preproc_logicalExpression", "preproc_symbol", 
      "preproc_unknownSymbol", "preproc_boolOperation", "preprocessor", 
      "compilerDirectiveSymbol", "compilerDirective", "annotationName", 
      "annotationParamName", "annotation", "annotationParams", "annotationParam", 
      "var_name", "moduleVars", "moduleVar", "moduleVarsList", "moduleVarDeclaration", 
      "subVars", "subVar", "subVarsList", "subVarDeclaration", "subName", 
      "subs", "sub", "procedure", "function", "procDeclaration", "funcDeclaration", 
      "subCodeBlock", "continueStatement", "breakStatement", "raiseStatement", 
      "ifStatement", "ifBranch", "elsifBranch", "elseBranch", "whileStatement", 
      "forStatement", "forEachStatement", "tryStatement", "returnStatement", 
      "executeStatement", "callStatement", "waitStatement", "labelName", 
      "label", "gotoStatement", "tryCodeBlock", "exceptCodeBlock", "event", 
      "handler", "addHandlerStatement", "removeHandlerStatement", "ternaryOperator", 
      "waitExpression", "fileCodeBlockBeforeSub", "fileCodeBlock", "codeBlock", 
      "numeric", "paramList", "param", "defaultValue", "constValue", "multilineString", 
      "string", "statement", "assignment", "callParamList", "callParam", 
      "expression", "operation", "compareOperation", "boolOperation", "unaryModifier", 
      "member", "newExpression", "typeName", "methodCall", "globalMethodCall", 
      "methodName", "complexIdentifier", "modifier", "acceptor", "lValue", 
      "accessCall", "accessIndex", "accessProperty", "doCall", "compoundStatement"
    },
    std::vector<std::string>{
      "", "", "", "'.'", "'['", "']'", "", "", "':'", "';'", "','", "'='", 
      "'+'", "'-'", "'<='", "'<>'", "'<'", "'>='", "'>'", "'*'", "'/'", 
      "'%'", "'\\u003F'", "'&'", "", "", "", "'#'", "'|'", "'~'", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "'!'"
    },
    std::vector<std::string>{
      "", "LINE_COMMENT", "WHITE_SPACE", "DOT", "LBRACK", "RBRACK", "LPAREN", 
      "RPAREN", "COLON", "SEMICOLON", "COMMA", "ASSIGN", "PLUS", "MINUS", 
      "LESS_OR_EQUAL", "NOT_EQUAL", "LESS", "GREATER_OR_EQUAL", "GREATER", 
      "MUL", "QUOTIENT", "MODULO", "QUESTION", "AMPERSAND", "PREPROC_DELETE", 
      "PREPROC_INSERT", "PREPROC_ENDINSERT", "HASH", "BAR", "TILDA", "TRUE", 
      "FALSE", "UNDEFINED", "IS_NULL", "DECIMAL", "DATETIME", "FLOAT", "STRING", 
      "STRINGSTART", "STRINGTAIL", "STRINGPART", "PROCEDURE_KEYWORD", "FUNCTION_KEYWORD", 
      "ENDPROCEDURE_KEYWORD", "ENDFUNCTION_KEYWORD", "EXPORT_KEYWORD", "VAL_KEYWORD", 
      "ENDIF_KEYWORD", "ENDDO_KEYWORD", "IF_KEYWORD", "ELSIF_KEYWORD", "ELSE_KEYWORD", 
      "THEN_KEYWORD", "WHILE_KEYWORD", "DO_KEYWORD", "FOR_KEYWORD", "TO_KEYWORD", 
      "EACH_KEYWORD", "IN_KEYWORD", "TRY_KEYWORD", "EXCEPT_KEYWORD", "ENDTRY_KEYWORD", 
      "RETURN_KEYWORD", "CONTINUE_KEYWORD", "RAISE_KEYWORD", "VAR_KEYWORD", 
      "NOT_KEYWORD", "OR_KEYWORD", "AND_KEYWORD", "NEW_KEYWORD", "GOTO_KEYWORD", 
      "BREAK_KEYWORD", "EXECUTE_KEYWORD", "ADDHANDLER_KEYWORD", "REMOVEHANDLER_KEYWORD", 
      "ASYNC_KEYWORD", "IDENTIFIER", "UNKNOWN", "PREPROC_EXCLAMATION_MARK", 
      "PREPROC_LPAREN", "PREPROC_RPAREN", "PREPROC_STRING", "PREPROC_USE_KEYWORD", 
      "PREPROC_REGION", "PREPROC_END_REGION", "PREPROC_NOT_KEYWORD", "PREPROC_OR_KEYWORD", 
      "PREPROC_AND_KEYWORD", "PREPROC_IF_KEYWORD", "PREPROC_THEN_KEYWORD", 
      "PREPROC_ELSIF_KEYWORD", "PREPROC_ENDIF_KEYWORD", "PREPROC_ELSE_KEYWORD", 
      "PREPROC_MOBILEAPPCLIENT_SYMBOL", "PREPROC_MOBILEAPPSERVER_SYMBOL", 
      "PREPROC_MOBILECLIENT_SYMBOL", "PREPROC_THICKCLIENTORDINARYAPPLICATION_SYMBOL", 
      "PREPROC_THICKCLIENTMANAGEDAPPLICATION_SYMBOL", "PREPROC_EXTERNALCONNECTION_SYMBOL", 
      "PREPROC_THINCLIENT_SYMBOL", "PREPROC_WEBCLIENT_SYMBOL", "PREPROC_ATCLIENT_SYMBOL", 
      "PREPROC_CLIENT_SYMBOL", "PREPROC_ATSERVER_SYMBOL", "PREPROC_SERVER_SYMBOL", 
      "PREPROC_MOBILE_STANDALONE_SERVER", "PREPROC_LINUX", "PREPROC_WINDOWS", 
      "PREPROC_MACOS", "PREPROC_IDENTIFIER", "PREPROC_NEWLINE", "PREPROC_ANY", 
      "ANNOTATION_ATSERVERNOCONTEXT_SYMBOL", "ANNOTATION_ATCLIENTATSERVERNOCONTEXT_SYMBOL", 
      "ANNOTATION_ATCLIENTATSERVER_SYMBOL", "ANNOTATION_ATCLIENT_SYMBOL", 
      "ANNOTATION_ATSERVER_SYMBOL", "ANNOTATION_BEFORE_SYMBOL", "ANNOTATION_AFTER_SYMBOL", 
      "ANNOTATION_AROUND_SYMBOL", "ANNOTATION_CHANGEANDVALIDATE_SYMBOL", 
      "ANNOTATION_CUSTOM_SYMBOL", "ANNOTATION_UNKNOWN", "PREPROC_ENDDELETE", 
      "PREPROC_DELETE_ANY", "AWAIT_KEYWORD"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,125,886,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,7,
  	35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,7,
  	42,2,43,7,43,2,44,7,44,2,45,7,45,2,46,7,46,2,47,7,47,2,48,7,48,2,49,7,
  	49,2,50,7,50,2,51,7,51,2,52,7,52,2,53,7,53,2,54,7,54,2,55,7,55,2,56,7,
  	56,2,57,7,57,2,58,7,58,2,59,7,59,2,60,7,60,2,61,7,61,2,62,7,62,2,63,7,
  	63,2,64,7,64,2,65,7,65,2,66,7,66,2,67,7,67,2,68,7,68,2,69,7,69,2,70,7,
  	70,2,71,7,71,2,72,7,72,2,73,7,73,2,74,7,74,2,75,7,75,2,76,7,76,2,77,7,
  	77,2,78,7,78,2,79,7,79,2,80,7,80,2,81,7,81,2,82,7,82,2,83,7,83,2,84,7,
  	84,2,85,7,85,2,86,7,86,2,87,7,87,2,88,7,88,2,89,7,89,2,90,7,90,2,91,7,
  	91,2,92,7,92,2,93,7,93,2,94,7,94,2,95,7,95,2,96,7,96,2,97,7,97,2,98,7,
  	98,2,99,7,99,2,100,7,100,2,101,7,101,1,0,3,0,206,8,0,1,0,5,0,209,8,0,
  	10,0,12,0,212,9,0,1,0,3,0,215,8,0,1,0,5,0,218,8,0,10,0,12,0,221,9,0,1,
  	0,1,0,1,0,3,0,226,8,0,1,0,1,0,1,0,1,1,1,1,1,1,5,1,234,8,1,10,1,12,1,237,
  	9,1,1,2,1,2,1,3,1,3,1,3,1,4,1,4,1,4,1,5,1,5,1,6,1,6,1,7,1,7,1,7,1,7,1,
  	8,1,8,1,8,1,8,1,9,1,9,1,10,1,10,1,11,3,11,264,8,11,1,11,1,11,1,11,1,11,
  	1,11,3,11,271,8,11,1,12,1,12,3,12,275,8,12,1,12,1,12,1,12,1,12,3,12,281,
  	8,12,1,12,1,12,1,12,1,12,1,12,3,12,288,8,12,1,13,1,13,1,13,1,13,5,13,
  	294,8,13,10,13,12,13,297,9,13,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,
  	1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,3,14,316,8,14,1,15,1,15,
  	1,16,1,16,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,3,17,330,8,17,1,18,
  	1,18,1,19,1,19,1,19,1,20,1,20,1,21,1,21,1,22,1,22,1,22,3,22,344,8,22,
  	1,23,1,23,1,23,1,23,5,23,350,8,23,10,23,12,23,353,9,23,3,23,355,8,23,
  	1,23,1,23,1,24,1,24,1,24,3,24,362,8,24,1,24,3,24,365,8,24,1,25,1,25,1,
  	26,4,26,370,8,26,11,26,12,26,371,1,27,1,27,1,27,5,27,377,8,27,10,27,12,
  	27,380,9,27,1,27,1,27,1,27,3,27,385,8,27,1,28,1,28,1,28,5,28,390,8,28,
  	10,28,12,28,393,9,28,1,29,1,29,3,29,397,8,29,1,30,4,30,400,8,30,11,30,
  	12,30,401,1,31,1,31,1,31,5,31,407,8,31,10,31,12,31,410,9,31,1,31,1,31,
  	1,31,3,31,415,8,31,1,32,1,32,1,32,5,32,420,8,32,10,32,12,32,423,9,32,
  	1,33,1,33,1,34,1,34,1,35,4,35,430,8,35,11,35,12,35,431,1,36,1,36,3,36,
  	436,8,36,1,37,1,37,1,37,1,37,1,38,1,38,1,38,1,38,1,39,1,39,1,39,5,39,
  	449,8,39,10,39,12,39,452,9,39,1,39,3,39,455,8,39,1,39,1,39,1,39,1,39,
  	3,39,461,8,39,1,39,1,39,3,39,465,8,39,1,40,1,40,1,40,5,40,470,8,40,10,
  	40,12,40,473,9,40,1,40,3,40,476,8,40,1,40,1,40,1,40,1,40,3,40,482,8,40,
  	1,40,1,40,3,40,486,8,40,1,41,3,41,489,8,41,1,41,1,41,1,42,1,42,1,43,1,
  	43,1,44,1,44,3,44,499,8,44,1,44,3,44,502,8,44,1,45,1,45,5,45,506,8,45,
  	10,45,12,45,509,9,45,1,45,3,45,512,8,45,1,45,1,45,1,46,1,46,1,46,1,46,
  	1,46,1,47,1,47,1,47,1,47,1,47,1,48,1,48,1,48,1,49,1,49,1,49,1,49,1,49,
  	1,49,1,50,1,50,1,50,1,50,1,50,1,50,1,50,1,50,1,50,1,50,1,51,1,51,1,51,
  	1,51,1,51,1,51,1,51,1,51,1,51,1,52,1,52,1,52,1,52,1,52,1,52,1,53,1,53,
  	3,53,562,8,53,1,54,1,54,1,54,3,54,567,8,54,1,55,1,55,3,55,571,8,55,1,
  	55,5,55,574,8,55,10,55,12,55,577,9,55,1,55,1,55,3,55,581,8,55,1,56,1,
  	56,1,57,1,57,1,58,1,58,1,58,1,58,1,59,1,59,1,59,1,59,1,60,1,60,1,61,1,
  	61,1,62,1,62,1,63,1,63,1,64,1,64,1,64,1,64,1,64,1,65,1,65,1,65,1,65,1,
  	65,1,66,1,66,1,66,1,66,1,66,1,66,1,66,1,66,1,66,1,67,1,67,1,67,1,68,1,
  	68,1,69,1,69,1,70,1,70,5,70,631,8,70,10,70,12,70,634,9,70,1,71,1,71,1,
  	72,1,72,1,72,5,72,641,8,72,10,72,12,72,644,9,72,1,73,5,73,647,8,73,10,
  	73,12,73,650,9,73,1,73,3,73,653,8,73,1,73,1,73,1,73,3,73,658,8,73,1,74,
  	1,74,1,75,3,75,663,8,75,1,75,1,75,1,75,1,75,1,75,1,75,1,75,3,75,672,8,
  	75,1,76,1,76,1,76,1,76,5,76,678,8,76,10,76,12,76,681,9,76,1,76,1,76,1,
  	77,1,77,4,77,687,8,77,11,77,12,77,688,1,78,1,78,1,78,1,78,1,78,1,78,3,
  	78,697,8,78,1,78,1,78,1,78,1,78,1,78,3,78,704,8,78,3,78,706,8,78,1,78,
  	3,78,709,8,78,1,78,3,78,712,8,78,1,79,1,79,5,79,716,8,79,10,79,12,79,
  	719,9,79,1,79,1,79,5,79,723,8,79,10,79,12,79,726,9,79,1,79,1,79,1,80,
  	1,80,1,80,5,80,733,8,80,10,80,12,80,736,9,80,1,81,3,81,739,8,81,1,82,
  	1,82,5,82,743,8,82,10,82,12,82,746,9,82,1,82,1,82,5,82,750,8,82,10,82,
  	12,82,753,9,82,1,82,1,82,5,82,757,8,82,10,82,12,82,760,9,82,5,82,762,
  	8,82,10,82,12,82,765,9,82,1,83,1,83,1,83,1,83,1,83,1,83,1,83,3,83,774,
  	8,83,1,84,1,84,1,85,1,85,1,86,1,86,1,87,3,87,783,8,87,1,87,1,87,1,87,
  	1,87,1,87,1,87,1,87,5,87,792,8,87,10,87,12,87,795,9,87,1,87,1,87,3,87,
  	799,8,87,1,87,3,87,802,8,87,1,88,1,88,1,88,3,88,807,8,88,1,88,1,88,3,
  	88,811,8,88,1,89,1,89,1,90,1,90,1,90,1,91,1,91,1,91,1,92,1,92,1,93,1,
  	93,1,93,1,93,3,93,827,8,93,1,93,5,93,830,8,93,10,93,12,93,833,9,93,1,
  	94,1,94,1,94,3,94,838,8,94,1,95,5,95,841,8,95,10,95,12,95,844,9,95,1,
  	95,1,95,3,95,848,8,95,1,96,1,96,3,96,852,8,96,1,96,3,96,855,8,96,1,97,
  	1,97,1,97,1,98,1,98,1,98,1,98,1,99,1,99,1,99,1,100,1,100,1,100,1,100,
  	1,101,1,101,1,101,1,101,1,101,1,101,1,101,1,101,1,101,1,101,1,101,1,101,
  	1,101,3,101,884,8,101,1,101,0,0,102,0,2,4,6,8,10,12,14,16,18,20,22,24,
  	26,28,30,32,34,36,38,40,42,44,46,48,50,52,54,56,58,60,62,64,66,68,70,
  	72,74,76,78,80,82,84,86,88,90,92,94,96,98,100,102,104,106,108,110,112,
  	114,116,118,120,122,124,126,128,130,132,134,136,138,140,142,144,146,148,
  	150,152,154,156,158,160,162,164,166,168,170,172,174,176,178,180,182,184,
  	186,188,190,192,194,196,198,200,202,0,10,2,0,109,109,111,111,2,0,81,81,
  	109,109,1,0,86,87,1,0,112,116,1,0,117,121,2,0,34,34,36,36,1,0,12,13,2,
  	0,11,11,14,18,1,0,67,68,2,0,12,13,66,66,935,0,205,1,0,0,0,2,230,1,0,0,
  	0,4,238,1,0,0,0,6,240,1,0,0,0,8,243,1,0,0,0,10,246,1,0,0,0,12,248,1,0,
  	0,0,14,250,1,0,0,0,16,254,1,0,0,0,18,258,1,0,0,0,20,260,1,0,0,0,22,270,
  	1,0,0,0,24,287,1,0,0,0,26,289,1,0,0,0,28,315,1,0,0,0,30,317,1,0,0,0,32,
  	319,1,0,0,0,34,321,1,0,0,0,36,331,1,0,0,0,38,333,1,0,0,0,40,336,1,0,0,
  	0,42,338,1,0,0,0,44,340,1,0,0,0,46,345,1,0,0,0,48,364,1,0,0,0,50,366,
  	1,0,0,0,52,369,1,0,0,0,54,378,1,0,0,0,56,386,1,0,0,0,58,394,1,0,0,0,60,
  	399,1,0,0,0,62,408,1,0,0,0,64,416,1,0,0,0,66,424,1,0,0,0,68,426,1,0,0,
  	0,70,429,1,0,0,0,72,435,1,0,0,0,74,437,1,0,0,0,76,441,1,0,0,0,78,450,
  	1,0,0,0,80,471,1,0,0,0,82,488,1,0,0,0,84,492,1,0,0,0,86,494,1,0,0,0,88,
  	496,1,0,0,0,90,503,1,0,0,0,92,515,1,0,0,0,94,520,1,0,0,0,96,525,1,0,0,
  	0,98,528,1,0,0,0,100,534,1,0,0,0,102,544,1,0,0,0,104,553,1,0,0,0,106,
  	559,1,0,0,0,108,563,1,0,0,0,110,580,1,0,0,0,112,582,1,0,0,0,114,584,1,
  	0,0,0,116,586,1,0,0,0,118,590,1,0,0,0,120,594,1,0,0,0,122,596,1,0,0,0,
  	124,598,1,0,0,0,126,600,1,0,0,0,128,602,1,0,0,0,130,607,1,0,0,0,132,612,
  	1,0,0,0,134,621,1,0,0,0,136,624,1,0,0,0,138,626,1,0,0,0,140,632,1,0,0,
  	0,142,635,1,0,0,0,144,637,1,0,0,0,146,648,1,0,0,0,148,659,1,0,0,0,150,
  	671,1,0,0,0,152,673,1,0,0,0,154,686,1,0,0,0,156,711,1,0,0,0,158,713,1,
  	0,0,0,160,729,1,0,0,0,162,738,1,0,0,0,164,740,1,0,0,0,166,773,1,0,0,0,
  	168,775,1,0,0,0,170,777,1,0,0,0,172,779,1,0,0,0,174,782,1,0,0,0,176,810,
  	1,0,0,0,178,812,1,0,0,0,180,814,1,0,0,0,182,817,1,0,0,0,184,820,1,0,0,
  	0,186,826,1,0,0,0,188,837,1,0,0,0,190,842,1,0,0,0,192,851,1,0,0,0,194,
  	856,1,0,0,0,196,859,1,0,0,0,198,863,1,0,0,0,200,866,1,0,0,0,202,883,1,
  	0,0,0,204,206,3,2,1,0,205,204,1,0,0,0,205,206,1,0,0,0,206,210,1,0,0,0,
  	207,209,3,34,17,0,208,207,1,0,0,0,209,212,1,0,0,0,210,208,1,0,0,0,210,
  	211,1,0,0,0,211,214,1,0,0,0,212,210,1,0,0,0,213,215,3,52,26,0,214,213,
  	1,0,0,0,214,215,1,0,0,0,215,219,1,0,0,0,216,218,3,34,17,0,217,216,1,0,
  	0,0,218,221,1,0,0,0,219,217,1,0,0,0,219,220,1,0,0,0,220,225,1,0,0,0,221,
  	219,1,0,0,0,222,223,3,136,68,0,223,224,3,70,35,0,224,226,1,0,0,0,225,
  	222,1,0,0,0,225,226,1,0,0,0,226,227,1,0,0,0,227,228,3,138,69,0,228,229,
  	5,0,0,1,229,1,1,0,0,0,230,231,5,27,0,0,231,235,5,78,0,0,232,234,7,0,0,
  	0,233,232,1,0,0,0,234,237,1,0,0,0,235,233,1,0,0,0,235,236,1,0,0,0,236,
  	3,1,0,0,0,237,235,1,0,0,0,238,239,7,1,0,0,239,5,1,0,0,0,240,241,5,82,
  	0,0,241,242,3,4,2,0,242,7,1,0,0,0,243,244,5,83,0,0,244,245,3,12,6,0,245,
  	9,1,0,0,0,246,247,5,84,0,0,247,11,1,0,0,0,248,249,5,109,0,0,249,13,1,
  	0,0,0,250,251,5,88,0,0,251,252,3,22,11,0,252,253,5,89,0,0,253,15,1,0,
  	0,0,254,255,5,90,0,0,255,256,3,22,11,0,256,257,5,89,0,0,257,17,1,0,0,
  	0,258,259,5,92,0,0,259,19,1,0,0,0,260,261,5,91,0,0,261,21,1,0,0,0,262,
  	264,5,85,0,0,263,262,1,0,0,0,263,264,1,0,0,0,264,265,1,0,0,0,265,266,
  	5,79,0,0,266,267,3,22,11,0,267,268,5,80,0,0,268,271,1,0,0,0,269,271,3,
  	26,13,0,270,263,1,0,0,0,270,269,1,0,0,0,271,23,1,0,0,0,272,274,5,79,0,
  	0,273,275,5,85,0,0,274,273,1,0,0,0,274,275,1,0,0,0,275,276,1,0,0,0,276,
  	277,3,24,12,0,277,278,5,80,0,0,278,288,1,0,0,0,279,281,5,85,0,0,280,279,
  	1,0,0,0,280,281,1,0,0,0,281,282,1,0,0,0,282,288,3,28,14,0,283,284,5,79,
  	0,0,284,285,3,26,13,0,285,286,5,80,0,0,286,288,1,0,0,0,287,272,1,0,0,
  	0,287,280,1,0,0,0,287,283,1,0,0,0,288,25,1,0,0,0,289,295,3,24,12,0,290,
  	291,3,32,16,0,291,292,3,24,12,0,292,294,1,0,0,0,293,290,1,0,0,0,294,297,
  	1,0,0,0,295,293,1,0,0,0,295,296,1,0,0,0,296,27,1,0,0,0,297,295,1,0,0,
  	0,298,316,5,102,0,0,299,316,5,101,0,0,300,316,5,104,0,0,301,316,5,103,
  	0,0,302,316,5,93,0,0,303,316,5,94,0,0,304,316,5,95,0,0,305,316,5,96,0,
  	0,306,316,5,97,0,0,307,316,5,98,0,0,308,316,5,99,0,0,309,316,5,100,0,
  	0,310,316,5,105,0,0,311,316,5,106,0,0,312,316,5,107,0,0,313,316,5,108,
  	0,0,314,316,3,30,15,0,315,298,1,0,0,0,315,299,1,0,0,0,315,300,1,0,0,0,
  	315,301,1,0,0,0,315,302,1,0,0,0,315,303,1,0,0,0,315,304,1,0,0,0,315,305,
  	1,0,0,0,315,306,1,0,0,0,315,307,1,0,0,0,315,308,1,0,0,0,315,309,1,0,0,
  	0,315,310,1,0,0,0,315,311,1,0,0,0,315,312,1,0,0,0,315,313,1,0,0,0,315,
  	314,1,0,0,0,316,29,1,0,0,0,317,318,5,109,0,0,318,31,1,0,0,0,319,320,7,
  	2,0,0,320,33,1,0,0,0,321,329,5,27,0,0,322,330,3,8,4,0,323,330,3,10,5,
  	0,324,330,3,14,7,0,325,330,3,16,8,0,326,330,3,18,9,0,327,330,3,20,10,
  	0,328,330,3,6,3,0,329,322,1,0,0,0,329,323,1,0,0,0,329,324,1,0,0,0,329,
  	325,1,0,0,0,329,326,1,0,0,0,329,327,1,0,0,0,329,328,1,0,0,0,330,35,1,
  	0,0,0,331,332,7,3,0,0,332,37,1,0,0,0,333,334,5,23,0,0,334,335,3,36,18,
  	0,335,39,1,0,0,0,336,337,7,4,0,0,337,41,1,0,0,0,338,339,5,76,0,0,339,
  	43,1,0,0,0,340,341,5,23,0,0,341,343,3,40,20,0,342,344,3,46,23,0,343,342,
  	1,0,0,0,343,344,1,0,0,0,344,45,1,0,0,0,345,354,5,6,0,0,346,351,3,48,24,
  	0,347,348,5,10,0,0,348,350,3,48,24,0,349,347,1,0,0,0,350,353,1,0,0,0,
  	351,349,1,0,0,0,351,352,1,0,0,0,352,355,1,0,0,0,353,351,1,0,0,0,354,346,
  	1,0,0,0,354,355,1,0,0,0,355,356,1,0,0,0,356,357,5,7,0,0,357,47,1,0,0,
  	0,358,361,3,42,21,0,359,360,5,11,0,0,360,362,3,150,75,0,361,359,1,0,0,
  	0,361,362,1,0,0,0,362,365,1,0,0,0,363,365,3,150,75,0,364,358,1,0,0,0,
  	364,363,1,0,0,0,365,49,1,0,0,0,366,367,5,76,0,0,367,51,1,0,0,0,368,370,
  	3,54,27,0,369,368,1,0,0,0,370,371,1,0,0,0,371,369,1,0,0,0,371,372,1,0,
  	0,0,372,53,1,0,0,0,373,377,3,34,17,0,374,377,3,38,19,0,375,377,3,44,22,
  	0,376,373,1,0,0,0,376,374,1,0,0,0,376,375,1,0,0,0,377,380,1,0,0,0,378,
  	376,1,0,0,0,378,379,1,0,0,0,379,381,1,0,0,0,380,378,1,0,0,0,381,382,5,
  	65,0,0,382,384,3,56,28,0,383,385,5,9,0,0,384,383,1,0,0,0,384,385,1,0,
  	0,0,385,55,1,0,0,0,386,391,3,58,29,0,387,388,5,10,0,0,388,390,3,58,29,
  	0,389,387,1,0,0,0,390,393,1,0,0,0,391,389,1,0,0,0,391,392,1,0,0,0,392,
  	57,1,0,0,0,393,391,1,0,0,0,394,396,3,50,25,0,395,397,5,45,0,0,396,395,
  	1,0,0,0,396,397,1,0,0,0,397,59,1,0,0,0,398,400,3,62,31,0,399,398,1,0,
  	0,0,400,401,1,0,0,0,401,399,1,0,0,0,401,402,1,0,0,0,402,61,1,0,0,0,403,
  	407,3,34,17,0,404,407,3,38,19,0,405,407,3,44,22,0,406,403,1,0,0,0,406,
  	404,1,0,0,0,406,405,1,0,0,0,407,410,1,0,0,0,408,406,1,0,0,0,408,409,1,
  	0,0,0,409,411,1,0,0,0,410,408,1,0,0,0,411,412,5,65,0,0,412,414,3,64,32,
  	0,413,415,5,9,0,0,414,413,1,0,0,0,414,415,1,0,0,0,415,63,1,0,0,0,416,
  	421,3,66,33,0,417,418,5,10,0,0,418,420,3,66,33,0,419,417,1,0,0,0,420,
  	423,1,0,0,0,421,419,1,0,0,0,421,422,1,0,0,0,422,65,1,0,0,0,423,421,1,
  	0,0,0,424,425,3,50,25,0,425,67,1,0,0,0,426,427,5,76,0,0,427,69,1,0,0,
  	0,428,430,3,72,36,0,429,428,1,0,0,0,430,431,1,0,0,0,431,429,1,0,0,0,431,
  	432,1,0,0,0,432,71,1,0,0,0,433,436,3,74,37,0,434,436,3,76,38,0,435,433,
  	1,0,0,0,435,434,1,0,0,0,436,73,1,0,0,0,437,438,3,78,39,0,438,439,3,82,
  	41,0,439,440,5,43,0,0,440,75,1,0,0,0,441,442,3,80,40,0,442,443,3,82,41,
  	0,443,444,5,44,0,0,444,77,1,0,0,0,445,449,3,34,17,0,446,449,3,38,19,0,
  	447,449,3,44,22,0,448,445,1,0,0,0,448,446,1,0,0,0,448,447,1,0,0,0,449,
  	452,1,0,0,0,450,448,1,0,0,0,450,451,1,0,0,0,451,454,1,0,0,0,452,450,1,
  	0,0,0,453,455,5,75,0,0,454,453,1,0,0,0,454,455,1,0,0,0,455,456,1,0,0,
  	0,456,457,5,41,0,0,457,458,3,68,34,0,458,460,5,6,0,0,459,461,3,144,72,
  	0,460,459,1,0,0,0,460,461,1,0,0,0,461,462,1,0,0,0,462,464,5,7,0,0,463,
  	465,5,45,0,0,464,463,1,0,0,0,464,465,1,0,0,0,465,79,1,0,0,0,466,470,3,
  	34,17,0,467,470,3,38,19,0,468,470,3,44,22,0,469,466,1,0,0,0,469,467,1,
  	0,0,0,469,468,1,0,0,0,470,473,1,0,0,0,471,469,1,0,0,0,471,472,1,0,0,0,
  	472,475,1,0,0,0,473,471,1,0,0,0,474,476,5,75,0,0,475,474,1,0,0,0,475,
  	476,1,0,0,0,476,477,1,0,0,0,477,478,5,42,0,0,478,479,3,68,34,0,479,481,
  	5,6,0,0,480,482,3,144,72,0,481,480,1,0,0,0,481,482,1,0,0,0,482,483,1,
  	0,0,0,483,485,5,7,0,0,484,486,5,45,0,0,485,484,1,0,0,0,485,486,1,0,0,
  	0,486,81,1,0,0,0,487,489,3,60,30,0,488,487,1,0,0,0,488,489,1,0,0,0,489,
  	490,1,0,0,0,490,491,3,140,70,0,491,83,1,0,0,0,492,493,5,63,0,0,493,85,
  	1,0,0,0,494,495,5,71,0,0,495,87,1,0,0,0,496,501,5,64,0,0,497,499,3,164,
  	82,0,498,497,1,0,0,0,498,499,1,0,0,0,499,502,1,0,0,0,500,502,3,200,100,
  	0,501,498,1,0,0,0,501,500,1,0,0,0,502,89,1,0,0,0,503,507,3,92,46,0,504,
  	506,3,94,47,0,505,504,1,0,0,0,506,509,1,0,0,0,507,505,1,0,0,0,507,508,
  	1,0,0,0,508,511,1,0,0,0,509,507,1,0,0,0,510,512,3,96,48,0,511,510,1,0,
  	0,0,511,512,1,0,0,0,512,513,1,0,0,0,513,514,5,47,0,0,514,91,1,0,0,0,515,
  	516,5,49,0,0,516,517,3,164,82,0,517,518,5,52,0,0,518,519,3,140,70,0,519,
  	93,1,0,0,0,520,521,5,50,0,0,521,522,3,164,82,0,522,523,5,52,0,0,523,524,
  	3,140,70,0,524,95,1,0,0,0,525,526,5,51,0,0,526,527,3,140,70,0,527,97,
  	1,0,0,0,528,529,5,53,0,0,529,530,3,164,82,0,530,531,5,54,0,0,531,532,
  	3,140,70,0,532,533,5,48,0,0,533,99,1,0,0,0,534,535,5,55,0,0,535,536,5,
  	76,0,0,536,537,5,11,0,0,537,538,3,164,82,0,538,539,5,56,0,0,539,540,3,
  	164,82,0,540,541,5,54,0,0,541,542,3,140,70,0,542,543,5,48,0,0,543,101,
  	1,0,0,0,544,545,5,55,0,0,545,546,5,57,0,0,546,547,5,76,0,0,547,548,5,
  	58,0,0,548,549,3,164,82,0,549,550,5,54,0,0,550,551,3,140,70,0,551,552,
  	5,48,0,0,552,103,1,0,0,0,553,554,5,59,0,0,554,555,3,120,60,0,555,556,
  	5,60,0,0,556,557,3,122,61,0,557,558,5,61,0,0,558,105,1,0,0,0,559,561,
  	5,62,0,0,560,562,3,164,82,0,561,560,1,0,0,0,561,562,1,0,0,0,562,107,1,
  	0,0,0,563,566,5,72,0,0,564,567,3,200,100,0,565,567,3,160,80,0,566,564,
  	1,0,0,0,566,565,1,0,0,0,567,109,1,0,0,0,568,571,5,76,0,0,569,571,3,182,
  	91,0,570,568,1,0,0,0,570,569,1,0,0,0,571,575,1,0,0,0,572,574,3,188,94,
  	0,573,572,1,0,0,0,574,577,1,0,0,0,575,573,1,0,0,0,575,576,1,0,0,0,576,
  	578,1,0,0,0,577,575,1,0,0,0,578,581,3,194,97,0,579,581,3,182,91,0,580,
  	570,1,0,0,0,580,579,1,0,0,0,581,111,1,0,0,0,582,583,3,134,67,0,583,113,
  	1,0,0,0,584,585,5,76,0,0,585,115,1,0,0,0,586,587,5,29,0,0,587,588,3,114,
  	57,0,588,589,5,8,0,0,589,117,1,0,0,0,590,591,5,70,0,0,591,592,5,29,0,
  	0,592,593,3,114,57,0,593,119,1,0,0,0,594,595,3,140,70,0,595,121,1,0,0,
  	0,596,597,3,140,70,0,597,123,1,0,0,0,598,599,3,164,82,0,599,125,1,0,0,
  	0,600,601,3,164,82,0,601,127,1,0,0,0,602,603,5,73,0,0,603,604,3,124,62,
  	0,604,605,5,10,0,0,605,606,3,126,63,0,606,129,1,0,0,0,607,608,5,74,0,
  	0,608,609,3,124,62,0,609,610,5,10,0,0,610,611,3,126,63,0,611,131,1,0,
  	0,0,612,613,5,22,0,0,613,614,5,6,0,0,614,615,3,164,82,0,615,616,5,10,
  	0,0,616,617,3,164,82,0,617,618,5,10,0,0,618,619,3,164,82,0,619,620,5,
  	7,0,0,620,133,1,0,0,0,621,622,5,125,0,0,622,623,3,164,82,0,623,135,1,
  	0,0,0,624,625,3,140,70,0,625,137,1,0,0,0,626,627,3,140,70,0,627,139,1,
  	0,0,0,628,631,3,156,78,0,629,631,3,34,17,0,630,628,1,0,0,0,630,629,1,
  	0,0,0,631,634,1,0,0,0,632,630,1,0,0,0,632,633,1,0,0,0,633,141,1,0,0,0,
  	634,632,1,0,0,0,635,636,7,5,0,0,636,143,1,0,0,0,637,642,3,146,73,0,638,
  	639,5,10,0,0,639,641,3,146,73,0,640,638,1,0,0,0,641,644,1,0,0,0,642,640,
  	1,0,0,0,642,643,1,0,0,0,643,145,1,0,0,0,644,642,1,0,0,0,645,647,3,44,
  	22,0,646,645,1,0,0,0,647,650,1,0,0,0,648,646,1,0,0,0,648,649,1,0,0,0,
  	649,652,1,0,0,0,650,648,1,0,0,0,651,653,5,46,0,0,652,651,1,0,0,0,652,
  	653,1,0,0,0,653,654,1,0,0,0,654,657,5,76,0,0,655,656,5,11,0,0,656,658,
  	3,148,74,0,657,655,1,0,0,0,657,658,1,0,0,0,658,147,1,0,0,0,659,660,3,
  	150,75,0,660,149,1,0,0,0,661,663,7,6,0,0,662,661,1,0,0,0,662,663,1,0,
  	0,0,663,664,1,0,0,0,664,672,3,142,71,0,665,672,3,154,77,0,666,672,5,30,
  	0,0,667,672,5,31,0,0,668,672,5,32,0,0,669,672,5,33,0,0,670,672,5,35,0,
  	0,671,662,1,0,0,0,671,665,1,0,0,0,671,666,1,0,0,0,671,667,1,0,0,0,671,
  	668,1,0,0,0,671,669,1,0,0,0,671,670,1,0,0,0,672,151,1,0,0,0,673,679,5,
  	38,0,0,674,678,5,40,0,0,675,678,5,28,0,0,676,678,3,34,17,0,677,674,1,
  	0,0,0,677,675,1,0,0,0,677,676,1,0,0,0,678,681,1,0,0,0,679,677,1,0,0,0,
  	679,680,1,0,0,0,680,682,1,0,0,0,681,679,1,0,0,0,682,683,5,39,0,0,683,
  	153,1,0,0,0,684,687,5,37,0,0,685,687,3,152,76,0,686,684,1,0,0,0,686,685,
  	1,0,0,0,687,688,1,0,0,0,688,686,1,0,0,0,688,689,1,0,0,0,689,155,1,0,0,
  	0,690,696,3,116,58,0,691,697,3,110,55,0,692,697,3,112,56,0,693,697,3,
  	202,101,0,694,697,3,158,79,0,695,697,3,34,17,0,696,691,1,0,0,0,696,692,
  	1,0,0,0,696,693,1,0,0,0,696,694,1,0,0,0,696,695,1,0,0,0,696,697,1,0,0,
  	0,697,706,1,0,0,0,698,704,3,110,55,0,699,704,3,112,56,0,700,704,3,202,
  	101,0,701,704,3,158,79,0,702,704,3,34,17,0,703,698,1,0,0,0,703,699,1,
  	0,0,0,703,700,1,0,0,0,703,701,1,0,0,0,703,702,1,0,0,0,704,706,1,0,0,0,
  	705,690,1,0,0,0,705,703,1,0,0,0,706,708,1,0,0,0,707,709,5,9,0,0,708,707,
  	1,0,0,0,708,709,1,0,0,0,709,712,1,0,0,0,710,712,5,9,0,0,711,705,1,0,0,
  	0,711,710,1,0,0,0,712,157,1,0,0,0,713,717,3,192,96,0,714,716,3,34,17,
  	0,715,714,1,0,0,0,716,719,1,0,0,0,717,715,1,0,0,0,717,718,1,0,0,0,718,
  	720,1,0,0,0,719,717,1,0,0,0,720,724,5,11,0,0,721,723,3,34,17,0,722,721,
  	1,0,0,0,723,726,1,0,0,0,724,722,1,0,0,0,724,725,1,0,0,0,725,727,1,0,0,
  	0,726,724,1,0,0,0,727,728,3,164,82,0,728,159,1,0,0,0,729,734,3,162,81,
  	0,730,731,5,10,0,0,731,733,3,162,81,0,732,730,1,0,0,0,733,736,1,0,0,0,
  	734,732,1,0,0,0,734,735,1,0,0,0,735,161,1,0,0,0,736,734,1,0,0,0,737,739,
  	3,164,82,0,738,737,1,0,0,0,738,739,1,0,0,0,739,163,1,0,0,0,740,763,3,
  	174,87,0,741,743,3,34,17,0,742,741,1,0,0,0,743,746,1,0,0,0,744,742,1,
  	0,0,0,744,745,1,0,0,0,745,747,1,0,0,0,746,744,1,0,0,0,747,751,3,166,83,
  	0,748,750,3,34,17,0,749,748,1,0,0,0,750,753,1,0,0,0,751,749,1,0,0,0,751,
  	752,1,0,0,0,752,754,1,0,0,0,753,751,1,0,0,0,754,758,3,174,87,0,755,757,
  	3,34,17,0,756,755,1,0,0,0,757,760,1,0,0,0,758,756,1,0,0,0,758,759,1,0,
  	0,0,759,762,1,0,0,0,760,758,1,0,0,0,761,744,1,0,0,0,762,765,1,0,0,0,763,
  	761,1,0,0,0,763,764,1,0,0,0,764,165,1,0,0,0,765,763,1,0,0,0,766,774,5,
  	12,0,0,767,774,5,13,0,0,768,774,5,19,0,0,769,774,5,20,0,0,770,774,5,21,
  	0,0,771,774,3,170,85,0,772,774,3,168,84,0,773,766,1,0,0,0,773,767,1,0,
  	0,0,773,768,1,0,0,0,773,769,1,0,0,0,773,770,1,0,0,0,773,771,1,0,0,0,773,
  	772,1,0,0,0,774,167,1,0,0,0,775,776,7,7,0,0,776,169,1,0,0,0,777,778,7,
  	8,0,0,778,171,1,0,0,0,779,780,7,9,0,0,780,173,1,0,0,0,781,783,3,172,86,
  	0,782,781,1,0,0,0,782,783,1,0,0,0,783,801,1,0,0,0,784,802,3,150,75,0,
  	785,802,3,186,93,0,786,787,5,6,0,0,787,788,3,164,82,0,788,789,5,7,0,0,
  	789,793,1,0,0,0,790,792,3,188,94,0,791,790,1,0,0,0,792,795,1,0,0,0,793,
  	791,1,0,0,0,793,794,1,0,0,0,794,802,1,0,0,0,795,793,1,0,0,0,796,799,5,
  	76,0,0,797,799,3,182,91,0,798,796,1,0,0,0,798,797,1,0,0,0,799,802,1,0,
  	0,0,800,802,3,134,67,0,801,784,1,0,0,0,801,785,1,0,0,0,801,786,1,0,0,
  	0,801,798,1,0,0,0,801,800,1,0,0,0,802,175,1,0,0,0,803,804,5,69,0,0,804,
  	806,3,178,89,0,805,807,3,200,100,0,806,805,1,0,0,0,806,807,1,0,0,0,807,
  	811,1,0,0,0,808,809,5,69,0,0,809,811,3,200,100,0,810,803,1,0,0,0,810,
  	808,1,0,0,0,811,177,1,0,0,0,812,813,5,76,0,0,813,179,1,0,0,0,814,815,
  	3,184,92,0,815,816,3,200,100,0,816,181,1,0,0,0,817,818,3,184,92,0,818,
  	819,3,200,100,0,819,183,1,0,0,0,820,821,5,76,0,0,821,185,1,0,0,0,822,
  	827,5,76,0,0,823,827,3,176,88,0,824,827,3,132,66,0,825,827,3,182,91,0,
  	826,822,1,0,0,0,826,823,1,0,0,0,826,824,1,0,0,0,826,825,1,0,0,0,827,831,
  	1,0,0,0,828,830,3,188,94,0,829,828,1,0,0,0,830,833,1,0,0,0,831,829,1,
  	0,0,0,831,832,1,0,0,0,832,187,1,0,0,0,833,831,1,0,0,0,834,838,3,198,99,
  	0,835,838,3,196,98,0,836,838,3,194,97,0,837,834,1,0,0,0,837,835,1,0,0,
  	0,837,836,1,0,0,0,838,189,1,0,0,0,839,841,3,188,94,0,840,839,1,0,0,0,
  	841,844,1,0,0,0,842,840,1,0,0,0,842,843,1,0,0,0,843,847,1,0,0,0,844,842,
  	1,0,0,0,845,848,3,198,99,0,846,848,3,196,98,0,847,845,1,0,0,0,847,846,
  	1,0,0,0,848,191,1,0,0,0,849,852,5,76,0,0,850,852,3,182,91,0,851,849,1,
  	0,0,0,851,850,1,0,0,0,852,854,1,0,0,0,853,855,3,190,95,0,854,853,1,0,
  	0,0,854,855,1,0,0,0,855,193,1,0,0,0,856,857,5,3,0,0,857,858,3,180,90,
  	0,858,195,1,0,0,0,859,860,5,4,0,0,860,861,3,164,82,0,861,862,5,5,0,0,
  	862,197,1,0,0,0,863,864,5,3,0,0,864,865,5,76,0,0,865,199,1,0,0,0,866,
  	867,5,6,0,0,867,868,3,160,80,0,868,869,5,7,0,0,869,201,1,0,0,0,870,884,
  	3,90,45,0,871,884,3,98,49,0,872,884,3,100,50,0,873,884,3,102,51,0,874,
  	884,3,104,52,0,875,884,3,106,53,0,876,884,3,84,42,0,877,884,3,86,43,0,
  	878,884,3,88,44,0,879,884,3,108,54,0,880,884,3,118,59,0,881,884,3,128,
  	64,0,882,884,3,130,65,0,883,870,1,0,0,0,883,871,1,0,0,0,883,872,1,0,0,
  	0,883,873,1,0,0,0,883,874,1,0,0,0,883,875,1,0,0,0,883,876,1,0,0,0,883,
  	877,1,0,0,0,883,878,1,0,0,0,883,879,1,0,0,0,883,880,1,0,0,0,883,881,1,
  	0,0,0,883,882,1,0,0,0,884,203,1,0,0,0,92,205,210,214,219,225,235,263,
  	270,274,280,287,295,315,329,343,351,354,361,364,371,376,378,384,391,396,
  	401,406,408,414,421,431,435,448,450,454,460,464,469,471,475,481,485,488,
  	498,501,507,511,561,566,570,575,580,630,632,642,648,652,657,662,671,677,
  	679,686,688,696,703,705,708,711,717,724,734,738,744,751,758,763,773,782,
  	793,798,801,806,810,826,831,837,842,847,851,854,883
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  bslparserParserStaticData = staticData.release();
}

}

BSLParser::BSLParser(TokenStream *input) : BSLParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

BSLParser::BSLParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  BSLParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *bslparserParserStaticData->atn, bslparserParserStaticData->decisionToDFA, bslparserParserStaticData->sharedContextCache, options);
}

BSLParser::~BSLParser() {
  delete _interpreter;
}

const atn::ATN& BSLParser::getATN() const {
  return *bslparserParserStaticData->atn;
}

std::string BSLParser::getGrammarFileName() const {
  return "BSLParser.g4";
}

const std::vector<std::string>& BSLParser::getRuleNames() const {
  return bslparserParserStaticData->ruleNames;
}

const dfa::Vocabulary& BSLParser::getVocabulary() const {
  return bslparserParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView BSLParser::getSerializedATN() const {
  return bslparserParserStaticData->serializedATN;
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
    setState(205);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
    case 1: {
      setState(204);
      shebang();
      break;
    }

    default:
      break;
    }
    setState(210);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(207);
        preprocessor(); 
      }
      setState(212);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx);
    }
    setState(214);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      setState(213);
      moduleVars();
      break;
    }

    default:
      break;
    }
    setState(219);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(216);
        preprocessor(); 
      }
      setState(221);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    }
    setState(225);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      setState(222);
      fileCodeBlockBeforeSub();
      setState(223);
      subs();
      break;
    }

    default:
      break;
    }
    setState(227);
    fileCodeBlock();
    setState(228);
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

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(230);
    match(BSLParser::HASH);
    setState(231);
    match(BSLParser::PREPROC_EXCLAMATION_MARK);
    setState(235);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BSLParser::PREPROC_IDENTIFIER

    || _la == BSLParser::PREPROC_ANY) {
      setState(232);
      _la = _input->LA(1);
      if (!(_la == BSLParser::PREPROC_IDENTIFIER

      || _la == BSLParser::PREPROC_ANY)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(237);
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

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(238);
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

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(240);
    match(BSLParser::PREPROC_USE_KEYWORD);
    setState(241);
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

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(243);
    match(BSLParser::PREPROC_REGION);
    setState(244);
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

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(246);
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

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(248);
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

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(250);
    match(BSLParser::PREPROC_IF_KEYWORD);
    setState(251);
    preproc_expression();
    setState(252);
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

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(254);
    match(BSLParser::PREPROC_ELSIF_KEYWORD);
    setState(255);
    preproc_expression();
    setState(256);
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

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(258);
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

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(260);
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

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(270);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(263);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == BSLParser::PREPROC_NOT_KEYWORD) {
        setState(262);
        match(BSLParser::PREPROC_NOT_KEYWORD);
      }

      setState(265);
      match(BSLParser::PREPROC_LPAREN);
      setState(266);
      preproc_expression();
      setState(267);
      match(BSLParser::PREPROC_RPAREN);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(269);
      preproc_logicalExpression();
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

BSLParser::Preproc_logicalExpressionContext* BSLParser::Preproc_logicalOperandContext::preproc_logicalExpression() {
  return getRuleContext<BSLParser::Preproc_logicalExpressionContext>(0);
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

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(287);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(272);
      match(BSLParser::PREPROC_LPAREN);
      setState(274);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
      case 1: {
        setState(273);
        match(BSLParser::PREPROC_NOT_KEYWORD);
        break;
      }

      default:
        break;
      }
      setState(276);
      preproc_logicalOperand();
      setState(277);
      match(BSLParser::PREPROC_RPAREN);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(280);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == BSLParser::PREPROC_NOT_KEYWORD) {
        setState(279);
        match(BSLParser::PREPROC_NOT_KEYWORD);
      }
      setState(282);
      preproc_symbol();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(283);
      match(BSLParser::PREPROC_LPAREN);
      setState(284);
      preproc_logicalExpression();
      setState(285);
      match(BSLParser::PREPROC_RPAREN);
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

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(289);
    preproc_logicalOperand();
    setState(295);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BSLParser::PREPROC_OR_KEYWORD

    || _la == BSLParser::PREPROC_AND_KEYWORD) {
      setState(290);
      preproc_boolOperation();
      setState(291);
      preproc_logicalOperand();
      setState(297);
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

tree::TerminalNode* BSLParser::Preproc_symbolContext::PREPROC_MOBILE_STANDALONE_SERVER() {
  return getToken(BSLParser::PREPROC_MOBILE_STANDALONE_SERVER, 0);
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

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(315);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BSLParser::PREPROC_CLIENT_SYMBOL: {
        enterOuterAlt(_localctx, 1);
        setState(298);
        match(BSLParser::PREPROC_CLIENT_SYMBOL);
        break;
      }

      case BSLParser::PREPROC_ATCLIENT_SYMBOL: {
        enterOuterAlt(_localctx, 2);
        setState(299);
        match(BSLParser::PREPROC_ATCLIENT_SYMBOL);
        break;
      }

      case BSLParser::PREPROC_SERVER_SYMBOL: {
        enterOuterAlt(_localctx, 3);
        setState(300);
        match(BSLParser::PREPROC_SERVER_SYMBOL);
        break;
      }

      case BSLParser::PREPROC_ATSERVER_SYMBOL: {
        enterOuterAlt(_localctx, 4);
        setState(301);
        match(BSLParser::PREPROC_ATSERVER_SYMBOL);
        break;
      }

      case BSLParser::PREPROC_MOBILEAPPCLIENT_SYMBOL: {
        enterOuterAlt(_localctx, 5);
        setState(302);
        match(BSLParser::PREPROC_MOBILEAPPCLIENT_SYMBOL);
        break;
      }

      case BSLParser::PREPROC_MOBILEAPPSERVER_SYMBOL: {
        enterOuterAlt(_localctx, 6);
        setState(303);
        match(BSLParser::PREPROC_MOBILEAPPSERVER_SYMBOL);
        break;
      }

      case BSLParser::PREPROC_MOBILECLIENT_SYMBOL: {
        enterOuterAlt(_localctx, 7);
        setState(304);
        match(BSLParser::PREPROC_MOBILECLIENT_SYMBOL);
        break;
      }

      case BSLParser::PREPROC_THICKCLIENTORDINARYAPPLICATION_SYMBOL: {
        enterOuterAlt(_localctx, 8);
        setState(305);
        match(BSLParser::PREPROC_THICKCLIENTORDINARYAPPLICATION_SYMBOL);
        break;
      }

      case BSLParser::PREPROC_THICKCLIENTMANAGEDAPPLICATION_SYMBOL: {
        enterOuterAlt(_localctx, 9);
        setState(306);
        match(BSLParser::PREPROC_THICKCLIENTMANAGEDAPPLICATION_SYMBOL);
        break;
      }

      case BSLParser::PREPROC_EXTERNALCONNECTION_SYMBOL: {
        enterOuterAlt(_localctx, 10);
        setState(307);
        match(BSLParser::PREPROC_EXTERNALCONNECTION_SYMBOL);
        break;
      }

      case BSLParser::PREPROC_THINCLIENT_SYMBOL: {
        enterOuterAlt(_localctx, 11);
        setState(308);
        match(BSLParser::PREPROC_THINCLIENT_SYMBOL);
        break;
      }

      case BSLParser::PREPROC_WEBCLIENT_SYMBOL: {
        enterOuterAlt(_localctx, 12);
        setState(309);
        match(BSLParser::PREPROC_WEBCLIENT_SYMBOL);
        break;
      }

      case BSLParser::PREPROC_MOBILE_STANDALONE_SERVER: {
        enterOuterAlt(_localctx, 13);
        setState(310);
        match(BSLParser::PREPROC_MOBILE_STANDALONE_SERVER);
        break;
      }

      case BSLParser::PREPROC_LINUX: {
        enterOuterAlt(_localctx, 14);
        setState(311);
        match(BSLParser::PREPROC_LINUX);
        break;
      }

      case BSLParser::PREPROC_WINDOWS: {
        enterOuterAlt(_localctx, 15);
        setState(312);
        match(BSLParser::PREPROC_WINDOWS);
        break;
      }

      case BSLParser::PREPROC_MACOS: {
        enterOuterAlt(_localctx, 16);
        setState(313);
        match(BSLParser::PREPROC_MACOS);
        break;
      }

      case BSLParser::PREPROC_IDENTIFIER: {
        enterOuterAlt(_localctx, 17);
        setState(314);
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

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(317);
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

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(319);
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

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(321);
    match(BSLParser::HASH);
    setState(329);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BSLParser::PREPROC_REGION: {
        setState(322);
        regionStart();
        break;
      }

      case BSLParser::PREPROC_END_REGION: {
        setState(323);
        regionEnd();
        break;
      }

      case BSLParser::PREPROC_IF_KEYWORD: {
        setState(324);
        preproc_if();
        break;
      }

      case BSLParser::PREPROC_ELSIF_KEYWORD: {
        setState(325);
        preproc_elsif();
        break;
      }

      case BSLParser::PREPROC_ELSE_KEYWORD: {
        setState(326);
        preproc_else();
        break;
      }

      case BSLParser::PREPROC_ENDIF_KEYWORD: {
        setState(327);
        preproc_endif();
        break;
      }

      case BSLParser::PREPROC_USE_KEYWORD: {
        setState(328);
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

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(331);
    _la = _input->LA(1);
    if (!(((((_la - 112) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 112)) & 31) != 0))) {
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

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(333);
    match(BSLParser::AMPERSAND);
    setState(334);
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

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(336);
    _la = _input->LA(1);
    if (!(((((_la - 117) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 117)) & 31) != 0))) {
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

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(338);
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

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(340);
    match(BSLParser::AMPERSAND);
    setState(341);
    annotationName();
    setState(343);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BSLParser::LPAREN) {
      setState(342);
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

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(345);
    match(BSLParser::LPAREN);
    setState(354);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 548682084352) != 0) || _la == BSLParser::IDENTIFIER) {
      setState(346);
      annotationParam();
      setState(351);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == BSLParser::COMMA) {
        setState(347);
        match(BSLParser::COMMA);
        setState(348);
        annotationParam();
        setState(353);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(356);
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

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(364);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BSLParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(358);
        annotationParamName();
        setState(361);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == BSLParser::ASSIGN) {
          setState(359);
          match(BSLParser::ASSIGN);
          setState(360);
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
        setState(363);
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

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(366);
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
    setState(369); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(368);
              moduleVar();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(371); 
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

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(378);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BSLParser::AMPERSAND

    || _la == BSLParser::HASH) {
      setState(376);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
      case 1: {
        setState(373);
        preprocessor();
        break;
      }

      case 2: {
        setState(374);
        compilerDirective();
        break;
      }

      case 3: {
        setState(375);
        annotation();
        break;
      }

      default:
        break;
      }
      setState(380);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(381);
    match(BSLParser::VAR_KEYWORD);
    setState(382);
    moduleVarsList();
    setState(384);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
    case 1: {
      setState(383);
      match(BSLParser::SEMICOLON);
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

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(386);
    moduleVarDeclaration();
    setState(391);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BSLParser::COMMA) {
      setState(387);
      match(BSLParser::COMMA);
      setState(388);
      moduleVarDeclaration();
      setState(393);
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

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(394);
    var_name();
    setState(396);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BSLParser::EXPORT_KEYWORD) {
      setState(395);
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
    setState(399); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(398);
              subVar();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(401); 
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

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(408);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BSLParser::AMPERSAND

    || _la == BSLParser::HASH) {
      setState(406);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx)) {
      case 1: {
        setState(403);
        preprocessor();
        break;
      }

      case 2: {
        setState(404);
        compilerDirective();
        break;
      }

      case 3: {
        setState(405);
        annotation();
        break;
      }

      default:
        break;
      }
      setState(410);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(411);
    match(BSLParser::VAR_KEYWORD);
    setState(412);
    subVarsList();
    setState(414);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx)) {
    case 1: {
      setState(413);
      match(BSLParser::SEMICOLON);
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

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(416);
    subVarDeclaration();
    setState(421);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BSLParser::COMMA) {
      setState(417);
      match(BSLParser::COMMA);
      setState(418);
      subVarDeclaration();
      setState(423);
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

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(424);
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

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(426);
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
    setState(429); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(428);
              sub();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(431); 
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

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(435);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(433);
      procedure();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(434);
      function();
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

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(437);
    procDeclaration();
    setState(438);
    subCodeBlock();
    setState(439);
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

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(441);
    funcDeclaration();
    setState(442);
    subCodeBlock();
    setState(443);
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

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(450);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BSLParser::AMPERSAND

    || _la == BSLParser::HASH) {
      setState(448);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx)) {
      case 1: {
        setState(445);
        preprocessor();
        break;
      }

      case 2: {
        setState(446);
        compilerDirective();
        break;
      }

      case 3: {
        setState(447);
        annotation();
        break;
      }

      default:
        break;
      }
      setState(452);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(454);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BSLParser::ASYNC_KEYWORD) {
      setState(453);
      match(BSLParser::ASYNC_KEYWORD);
    }
    setState(456);
    match(BSLParser::PROCEDURE_KEYWORD);
    setState(457);
    subName();
    setState(458);
    match(BSLParser::LPAREN);
    setState(460);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 23) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 23)) & 9007199263129601) != 0)) {
      setState(459);
      paramList();
    }
    setState(462);
    match(BSLParser::RPAREN);
    setState(464);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BSLParser::EXPORT_KEYWORD) {
      setState(463);
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

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(471);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BSLParser::AMPERSAND

    || _la == BSLParser::HASH) {
      setState(469);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx)) {
      case 1: {
        setState(466);
        preprocessor();
        break;
      }

      case 2: {
        setState(467);
        compilerDirective();
        break;
      }

      case 3: {
        setState(468);
        annotation();
        break;
      }

      default:
        break;
      }
      setState(473);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(475);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BSLParser::ASYNC_KEYWORD) {
      setState(474);
      match(BSLParser::ASYNC_KEYWORD);
    }
    setState(477);
    match(BSLParser::FUNCTION_KEYWORD);
    setState(478);
    subName();
    setState(479);
    match(BSLParser::LPAREN);
    setState(481);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 23) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 23)) & 9007199263129601) != 0)) {
      setState(480);
      paramList();
    }
    setState(483);
    match(BSLParser::RPAREN);
    setState(485);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BSLParser::EXPORT_KEYWORD) {
      setState(484);
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

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(488);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 42, _ctx)) {
    case 1: {
      setState(487);
      subVars();
      break;
    }

    default:
      break;
    }
    setState(490);
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

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(492);
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

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(494);
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

BSLParser::DoCallContext* BSLParser::RaiseStatementContext::doCall() {
  return getRuleContext<BSLParser::DoCallContext>(0);
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

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(496);
    match(BSLParser::RAISE_KEYWORD);
    setState(501);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 44, _ctx)) {
    case 1: {
      setState(498);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 43, _ctx)) {
      case 1: {
        setState(497);
        expression();
        break;
      }

      default:
        break;
      }
      break;
    }

    case 2: {
      setState(500);
      doCall();
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

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(503);
    ifBranch();
    setState(507);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BSLParser::ELSIF_KEYWORD) {
      setState(504);
      elsifBranch();
      setState(509);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(511);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BSLParser::ELSE_KEYWORD) {
      setState(510);
      elseBranch();
    }
    setState(513);
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

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(515);
    match(BSLParser::IF_KEYWORD);
    setState(516);
    expression();
    setState(517);
    match(BSLParser::THEN_KEYWORD);
    setState(518);
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

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(520);
    match(BSLParser::ELSIF_KEYWORD);
    setState(521);
    expression();
    setState(522);
    match(BSLParser::THEN_KEYWORD);
    setState(523);
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

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(525);
    match(BSLParser::ELSE_KEYWORD);
    setState(526);
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

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(528);
    match(BSLParser::WHILE_KEYWORD);
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

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(534);
    match(BSLParser::FOR_KEYWORD);
    setState(535);
    match(BSLParser::IDENTIFIER);
    setState(536);
    match(BSLParser::ASSIGN);
    setState(537);
    expression();
    setState(538);
    match(BSLParser::TO_KEYWORD);
    setState(539);
    expression();
    setState(540);
    match(BSLParser::DO_KEYWORD);
    setState(541);
    codeBlock();
    setState(542);
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

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(544);
    match(BSLParser::FOR_KEYWORD);
    setState(545);
    match(BSLParser::EACH_KEYWORD);
    setState(546);
    match(BSLParser::IDENTIFIER);
    setState(547);
    match(BSLParser::IN_KEYWORD);
    setState(548);
    expression();
    setState(549);
    match(BSLParser::DO_KEYWORD);
    setState(550);
    codeBlock();
    setState(551);
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

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(553);
    match(BSLParser::TRY_KEYWORD);
    setState(554);
    tryCodeBlock();
    setState(555);
    match(BSLParser::EXCEPT_KEYWORD);
    setState(556);
    exceptCodeBlock();
    setState(557);
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

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(559);
    match(BSLParser::RETURN_KEYWORD);
    setState(561);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 47, _ctx)) {
    case 1: {
      setState(560);
      expression();
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

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(563);
    match(BSLParser::EXECUTE_KEYWORD);
    setState(566);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 48, _ctx)) {
    case 1: {
      setState(564);
      doCall();
      break;
    }

    case 2: {
      setState(565);
      callParamList();
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

//----------------- CallStatementContext ------------------------------------------------------------------

BSLParser::CallStatementContext::CallStatementContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

BSLParser::AccessCallContext* BSLParser::CallStatementContext::accessCall() {
  return getRuleContext<BSLParser::AccessCallContext>(0);
}

tree::TerminalNode* BSLParser::CallStatementContext::IDENTIFIER() {
  return getToken(BSLParser::IDENTIFIER, 0);
}

BSLParser::GlobalMethodCallContext* BSLParser::CallStatementContext::globalMethodCall() {
  return getRuleContext<BSLParser::GlobalMethodCallContext>(0);
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

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    setState(580);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 51, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(570);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 49, _ctx)) {
      case 1: {
        setState(568);
        match(BSLParser::IDENTIFIER);
        break;
      }

      case 2: {
        setState(569);
        globalMethodCall();
        break;
      }

      default:
        break;
      }
      setState(575);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 50, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(572);
          modifier(); 
        }
        setState(577);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 50, _ctx);
      }
      setState(578);
      accessCall();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(579);
      globalMethodCall();
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

//----------------- WaitStatementContext ------------------------------------------------------------------

BSLParser::WaitStatementContext::WaitStatementContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

BSLParser::WaitExpressionContext* BSLParser::WaitStatementContext::waitExpression() {
  return getRuleContext<BSLParser::WaitExpressionContext>(0);
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

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(582);
    waitExpression();
   
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

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(584);
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

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(586);
    match(BSLParser::TILDA);
    setState(587);
    labelName();
    setState(588);
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

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(590);
    match(BSLParser::GOTO_KEYWORD);
    setState(591);
    match(BSLParser::TILDA);
    setState(592);
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

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(594);
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

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(596);
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

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(598);
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

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(600);
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

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(602);
    match(BSLParser::ADDHANDLER_KEYWORD);
    setState(603);
    event();
    setState(604);
    match(BSLParser::COMMA);
    setState(605);
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

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(607);
    match(BSLParser::REMOVEHANDLER_KEYWORD);
    setState(608);
    event();
    setState(609);
    match(BSLParser::COMMA);
    setState(610);
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

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(612);
    match(BSLParser::QUESTION);
    setState(613);
    match(BSLParser::LPAREN);
    setState(614);
    expression();
    setState(615);
    match(BSLParser::COMMA);
    setState(616);
    expression();
    setState(617);
    match(BSLParser::COMMA);
    setState(618);
    expression();
    setState(619);
    match(BSLParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WaitExpressionContext ------------------------------------------------------------------

BSLParser::WaitExpressionContext::WaitExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BSLParser::WaitExpressionContext::AWAIT_KEYWORD() {
  return getToken(BSLParser::AWAIT_KEYWORD, 0);
}

BSLParser::ExpressionContext* BSLParser::WaitExpressionContext::expression() {
  return getRuleContext<BSLParser::ExpressionContext>(0);
}


size_t BSLParser::WaitExpressionContext::getRuleIndex() const {
  return BSLParser::RuleWaitExpression;
}

void BSLParser::WaitExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWaitExpression(this);
}

void BSLParser::WaitExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BSLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWaitExpression(this);
}

BSLParser::WaitExpressionContext* BSLParser::waitExpression() {
  WaitExpressionContext *_localctx = _tracker.createInstance<WaitExpressionContext>(_ctx, getState());
  enterRule(_localctx, 134, BSLParser::RuleWaitExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(621);
    match(BSLParser::AWAIT_KEYWORD);
    setState(622);
    expression();
   
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
  enterRule(_localctx, 136, BSLParser::RuleFileCodeBlockBeforeSub);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(624);
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
  enterRule(_localctx, 138, BSLParser::RuleFileCodeBlock);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(626);
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
  enterRule(_localctx, 140, BSLParser::RuleCodeBlock);

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
    setState(632);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 53, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(630);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 52, _ctx)) {
        case 1: {
          setState(628);
          statement();
          break;
        }

        case 2: {
          setState(629);
          preprocessor();
          break;
        }

        default:
          break;
        } 
      }
      setState(634);
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
  enterRule(_localctx, 142, BSLParser::RuleNumeric);
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
    setState(635);
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
  enterRule(_localctx, 144, BSLParser::RuleParamList);
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
    setState(637);
    param();
    setState(642);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BSLParser::COMMA) {
      setState(638);
      match(BSLParser::COMMA);
      setState(639);
      param();
      setState(644);
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

std::vector<BSLParser::AnnotationContext *> BSLParser::ParamContext::annotation() {
  return getRuleContexts<BSLParser::AnnotationContext>();
}

BSLParser::AnnotationContext* BSLParser::ParamContext::annotation(size_t i) {
  return getRuleContext<BSLParser::AnnotationContext>(i);
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
  enterRule(_localctx, 146, BSLParser::RuleParam);
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
    setState(648);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BSLParser::AMPERSAND) {
      setState(645);
      annotation();
      setState(650);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(652);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BSLParser::VAL_KEYWORD) {
      setState(651);
      match(BSLParser::VAL_KEYWORD);
    }
    setState(654);
    match(BSLParser::IDENTIFIER);
    setState(657);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BSLParser::ASSIGN) {
      setState(655);
      match(BSLParser::ASSIGN);
      setState(656);
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
  enterRule(_localctx, 148, BSLParser::RuleDefaultValue);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(659);
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
  enterRule(_localctx, 150, BSLParser::RuleConstValue);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(671);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BSLParser::PLUS:
      case BSLParser::MINUS:
      case BSLParser::DECIMAL:
      case BSLParser::FLOAT: {
        enterOuterAlt(_localctx, 1);
        setState(662);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == BSLParser::PLUS

        || _la == BSLParser::MINUS) {
          setState(661);
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
        setState(664);
        numeric();
        break;
      }

      case BSLParser::STRING:
      case BSLParser::STRINGSTART: {
        enterOuterAlt(_localctx, 2);
        setState(665);
        string();
        break;
      }

      case BSLParser::TRUE: {
        enterOuterAlt(_localctx, 3);
        setState(666);
        match(BSLParser::TRUE);
        break;
      }

      case BSLParser::FALSE: {
        enterOuterAlt(_localctx, 4);
        setState(667);
        match(BSLParser::FALSE);
        break;
      }

      case BSLParser::UNDEFINED: {
        enterOuterAlt(_localctx, 5);
        setState(668);
        match(BSLParser::UNDEFINED);
        break;
      }

      case BSLParser::IS_NULL: {
        enterOuterAlt(_localctx, 6);
        setState(669);
        match(BSLParser::IS_NULL);
        break;
      }

      case BSLParser::DATETIME: {
        enterOuterAlt(_localctx, 7);
        setState(670);
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
  enterRule(_localctx, 152, BSLParser::RuleMultilineString);
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
    setState(673);
    match(BSLParser::STRINGSTART);
    setState(679);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1099914280960) != 0)) {
      setState(677);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case BSLParser::STRINGPART: {
          setState(674);
          match(BSLParser::STRINGPART);
          break;
        }

        case BSLParser::BAR: {
          setState(675);
          match(BSLParser::BAR);
          break;
        }

        case BSLParser::HASH: {
          setState(676);
          preprocessor();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(681);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(682);
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
  enterRule(_localctx, 154, BSLParser::RuleString);
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
    setState(686); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(686);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case BSLParser::STRING: {
          setState(684);
          match(BSLParser::STRING);
          break;
        }

        case BSLParser::STRINGSTART: {
          setState(685);
          multilineString();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(688); 
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
  enterRule(_localctx, 156, BSLParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(711);
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
      case BSLParser::AWAIT_KEYWORD: {
        enterOuterAlt(_localctx, 1);
        setState(705);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case BSLParser::TILDA: {
            setState(690);
            label();
            setState(696);
            _errHandler->sync(this);

            switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 64, _ctx)) {
            case 1: {
              setState(691);
              callStatement();
              break;
            }

            case 2: {
              setState(692);
              waitStatement();
              break;
            }

            case 3: {
              setState(693);
              compoundStatement();
              break;
            }

            case 4: {
              setState(694);
              assignment();
              break;
            }

            case 5: {
              setState(695);
              preprocessor();
              break;
            }

            default:
              break;
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
          case BSLParser::AWAIT_KEYWORD: {
            setState(703);
            _errHandler->sync(this);
            switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 65, _ctx)) {
            case 1: {
              setState(698);
              callStatement();
              break;
            }

            case 2: {
              setState(699);
              waitStatement();
              break;
            }

            case 3: {
              setState(700);
              compoundStatement();
              break;
            }

            case 4: {
              setState(701);
              assignment();
              break;
            }

            case 5: {
              setState(702);
              preprocessor();
              break;
            }

            default:
              break;
            }
            break;
          }

        default:
          throw NoViableAltException(this);
        }
        setState(708);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 67, _ctx)) {
        case 1: {
          setState(707);
          match(BSLParser::SEMICOLON);
          break;
        }

        default:
          break;
        }
        break;
      }

      case BSLParser::SEMICOLON: {
        enterOuterAlt(_localctx, 2);
        setState(710);
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

BSLParser::ExpressionContext* BSLParser::AssignmentContext::expression() {
  return getRuleContext<BSLParser::ExpressionContext>(0);
}

std::vector<BSLParser::PreprocessorContext *> BSLParser::AssignmentContext::preprocessor() {
  return getRuleContexts<BSLParser::PreprocessorContext>();
}

BSLParser::PreprocessorContext* BSLParser::AssignmentContext::preprocessor(size_t i) {
  return getRuleContext<BSLParser::PreprocessorContext>(i);
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
  enterRule(_localctx, 158, BSLParser::RuleAssignment);
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
    setState(713);
    lValue();
    setState(717);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BSLParser::HASH) {
      setState(714);
      preprocessor();
      setState(719);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(720);
    match(BSLParser::ASSIGN);

    setState(724);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BSLParser::HASH) {
      setState(721);
      preprocessor();
      setState(726);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(727);
    expression();
   
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
  enterRule(_localctx, 160, BSLParser::RuleCallParamList);
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
    setState(729);
    callParam();
    setState(734);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BSLParser::COMMA) {
      setState(730);
      match(BSLParser::COMMA);
      setState(731);
      callParam();
      setState(736);
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
  enterRule(_localctx, 162, BSLParser::RuleCallParam);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(738);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 72, _ctx)) {
    case 1: {
      setState(737);
      expression();
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
  enterRule(_localctx, 164, BSLParser::RuleExpression);
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
    setState(740);
    member();
    setState(763);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 76, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(744);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == BSLParser::HASH) {
          setState(741);
          preprocessor();
          setState(746);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(747);
        operation();
        setState(751);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == BSLParser::HASH) {
          setState(748);
          preprocessor();
          setState(753);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(754);
        member();
        setState(758);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 75, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(755);
            preprocessor(); 
          }
          setState(760);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 75, _ctx);
        } 
      }
      setState(765);
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
  enterRule(_localctx, 166, BSLParser::RuleOperation);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(773);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BSLParser::PLUS: {
        enterOuterAlt(_localctx, 1);
        setState(766);
        match(BSLParser::PLUS);
        break;
      }

      case BSLParser::MINUS: {
        enterOuterAlt(_localctx, 2);
        setState(767);
        match(BSLParser::MINUS);
        break;
      }

      case BSLParser::MUL: {
        enterOuterAlt(_localctx, 3);
        setState(768);
        match(BSLParser::MUL);
        break;
      }

      case BSLParser::QUOTIENT: {
        enterOuterAlt(_localctx, 4);
        setState(769);
        match(BSLParser::QUOTIENT);
        break;
      }

      case BSLParser::MODULO: {
        enterOuterAlt(_localctx, 5);
        setState(770);
        match(BSLParser::MODULO);
        break;
      }

      case BSLParser::OR_KEYWORD:
      case BSLParser::AND_KEYWORD: {
        enterOuterAlt(_localctx, 6);
        setState(771);
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
        setState(772);
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
  enterRule(_localctx, 168, BSLParser::RuleCompareOperation);
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
    setState(775);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 509952) != 0))) {
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
  enterRule(_localctx, 170, BSLParser::RuleBoolOperation);
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
    setState(777);
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
  enterRule(_localctx, 172, BSLParser::RuleUnaryModifier);
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
    setState(779);
    _la = _input->LA(1);
    if (!(((((_la - 12) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 12)) & 18014398509481987) != 0))) {
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

BSLParser::WaitExpressionContext* BSLParser::MemberContext::waitExpression() {
  return getRuleContext<BSLParser::WaitExpressionContext>(0);
}

BSLParser::UnaryModifierContext* BSLParser::MemberContext::unaryModifier() {
  return getRuleContext<BSLParser::UnaryModifierContext>(0);
}

tree::TerminalNode* BSLParser::MemberContext::IDENTIFIER() {
  return getToken(BSLParser::IDENTIFIER, 0);
}

BSLParser::GlobalMethodCallContext* BSLParser::MemberContext::globalMethodCall() {
  return getRuleContext<BSLParser::GlobalMethodCallContext>(0);
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
  enterRule(_localctx, 174, BSLParser::RuleMember);
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
    setState(782);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 78, _ctx)) {
    case 1: {
      setState(781);
      unaryModifier();
      break;
    }

    default:
      break;
    }
    setState(801);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 81, _ctx)) {
    case 1: {
      setState(784);
      constValue();
      break;
    }

    case 2: {
      setState(785);
      complexIdentifier();
      break;
    }

    case 3: {
      setState(786);
      match(BSLParser::LPAREN);
      setState(787);
      expression();
      setState(788);
      match(BSLParser::RPAREN);
      setState(793);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == BSLParser::DOT

      || _la == BSLParser::LBRACK) {
        setState(790);
        modifier();
        setState(795);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    case 4: {
      setState(798);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 80, _ctx)) {
      case 1: {
        setState(796);
        match(BSLParser::IDENTIFIER);
        break;
      }

      case 2: {
        setState(797);
        globalMethodCall();
        break;
      }

      default:
        break;
      }
      break;
    }

    case 5: {
      setState(800);
      waitExpression();
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
  enterRule(_localctx, 176, BSLParser::RuleNewExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(810);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 83, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(803);
      match(BSLParser::NEW_KEYWORD);
      setState(804);
      typeName();
      setState(806);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == BSLParser::LPAREN) {
        setState(805);
        doCall();
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(808);
      match(BSLParser::NEW_KEYWORD);
      setState(809);
      doCall();
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
  enterRule(_localctx, 178, BSLParser::RuleTypeName);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(812);
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
  enterRule(_localctx, 180, BSLParser::RuleMethodCall);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(814);
    methodName();
    setState(815);
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
  enterRule(_localctx, 182, BSLParser::RuleGlobalMethodCall);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(817);
    methodName();
    setState(818);
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
  enterRule(_localctx, 184, BSLParser::RuleMethodName);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(820);
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
  enterRule(_localctx, 186, BSLParser::RuleComplexIdentifier);
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
    setState(826);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 84, _ctx)) {
    case 1: {
      setState(822);
      match(BSLParser::IDENTIFIER);
      break;
    }

    case 2: {
      setState(823);
      newExpression();
      break;
    }

    case 3: {
      setState(824);
      ternaryOperator();
      break;
    }

    case 4: {
      setState(825);
      globalMethodCall();
      break;
    }

    default:
      break;
    }
    setState(831);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BSLParser::DOT

    || _la == BSLParser::LBRACK) {
      setState(828);
      modifier();
      setState(833);
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
  enterRule(_localctx, 188, BSLParser::RuleModifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(837);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 86, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(834);
      accessProperty();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(835);
      accessIndex();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(836);
      accessCall();
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
  enterRule(_localctx, 190, BSLParser::RuleAcceptor);

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
    setState(842);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 87, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(839);
        modifier(); 
      }
      setState(844);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 87, _ctx);
    }
    setState(847);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BSLParser::DOT: {
        setState(845);
        accessProperty();
        break;
      }

      case BSLParser::LBRACK: {
        setState(846);
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
  enterRule(_localctx, 192, BSLParser::RuleLValue);
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
    setState(851);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 89, _ctx)) {
    case 1: {
      setState(849);
      match(BSLParser::IDENTIFIER);
      break;
    }

    case 2: {
      setState(850);
      globalMethodCall();
      break;
    }

    default:
      break;
    }
    setState(854);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BSLParser::DOT

    || _la == BSLParser::LBRACK) {
      setState(853);
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
  enterRule(_localctx, 194, BSLParser::RuleAccessCall);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(856);
    match(BSLParser::DOT);
    setState(857);
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
  enterRule(_localctx, 196, BSLParser::RuleAccessIndex);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(859);
    match(BSLParser::LBRACK);
    setState(860);
    expression();
    setState(861);
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
  enterRule(_localctx, 198, BSLParser::RuleAccessProperty);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(863);
    match(BSLParser::DOT);
    setState(864);
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
  enterRule(_localctx, 200, BSLParser::RuleDoCall);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(866);
    match(BSLParser::LPAREN);
    setState(867);
    callParamList();
    setState(868);
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
  enterRule(_localctx, 202, BSLParser::RuleCompoundStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(883);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 91, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(870);
      ifStatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(871);
      whileStatement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(872);
      forStatement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(873);
      forEachStatement();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(874);
      tryStatement();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(875);
      returnStatement();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(876);
      continueStatement();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(877);
      breakStatement();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(878);
      raiseStatement();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(879);
      executeStatement();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(880);
      gotoStatement();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(881);
      addHandlerStatement();
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(882);
      removeHandlerStatement();
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

void BSLParser::initialize() {
  ::antlr4::internal::call_once(bslparserParserOnceFlag, bslparserParserInitialize);
}
