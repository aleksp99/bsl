
// Generated from .\BSLParser.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"




class  BSLParser : public antlr4::Parser {
public:
  enum {
    LINE_COMMENT = 1, WHITE_SPACE = 2, DOT = 3, LBRACK = 4, RBRACK = 5, 
    LPAREN = 6, RPAREN = 7, COLON = 8, SEMICOLON = 9, COMMA = 10, ASSIGN = 11, 
    PLUS = 12, MINUS = 13, LESS_OR_EQUAL = 14, NOT_EQUAL = 15, LESS = 16, 
    GREATER_OR_EQUAL = 17, GREATER = 18, MUL = 19, QUOTIENT = 20, MODULO = 21, 
    QUESTION = 22, AMPERSAND = 23, PREPROC_DELETE = 24, PREPROC_INSERT = 25, 
    PREPROC_ENDINSERT = 26, HASH = 27, BAR = 28, TILDA = 29, TRUE = 30, 
    FALSE = 31, UNDEFINED = 32, IS_NULL = 33, DECIMAL = 34, DATETIME = 35, 
    FLOAT = 36, STRING = 37, STRINGSTART = 38, STRINGTAIL = 39, STRINGPART = 40, 
    PROCEDURE_KEYWORD = 41, FUNCTION_KEYWORD = 42, ENDPROCEDURE_KEYWORD = 43, 
    ENDFUNCTION_KEYWORD = 44, EXPORT_KEYWORD = 45, VAL_KEYWORD = 46, ENDIF_KEYWORD = 47, 
    ENDDO_KEYWORD = 48, IF_KEYWORD = 49, ELSIF_KEYWORD = 50, ELSE_KEYWORD = 51, 
    THEN_KEYWORD = 52, WHILE_KEYWORD = 53, DO_KEYWORD = 54, FOR_KEYWORD = 55, 
    TO_KEYWORD = 56, EACH_KEYWORD = 57, IN_KEYWORD = 58, TRY_KEYWORD = 59, 
    EXCEPT_KEYWORD = 60, ENDTRY_KEYWORD = 61, RETURN_KEYWORD = 62, CONTINUE_KEYWORD = 63, 
    RAISE_KEYWORD = 64, VAR_KEYWORD = 65, NOT_KEYWORD = 66, OR_KEYWORD = 67, 
    AND_KEYWORD = 68, NEW_KEYWORD = 69, GOTO_KEYWORD = 70, BREAK_KEYWORD = 71, 
    EXECUTE_KEYWORD = 72, ADDHANDLER_KEYWORD = 73, REMOVEHANDLER_KEYWORD = 74, 
    ASYNC_KEYWORD = 75, IDENTIFIER = 76, UNKNOWN = 77, PREPROC_EXCLAMATION_MARK = 78, 
    PREPROC_LPAREN = 79, PREPROC_RPAREN = 80, PREPROC_STRING = 81, PREPROC_USE_KEYWORD = 82, 
    PREPROC_REGION = 83, PREPROC_END_REGION = 84, PREPROC_NOT_KEYWORD = 85, 
    PREPROC_OR_KEYWORD = 86, PREPROC_AND_KEYWORD = 87, PREPROC_IF_KEYWORD = 88, 
    PREPROC_THEN_KEYWORD = 89, PREPROC_ELSIF_KEYWORD = 90, PREPROC_ENDIF_KEYWORD = 91, 
    PREPROC_ELSE_KEYWORD = 92, PREPROC_MOBILEAPPCLIENT_SYMBOL = 93, PREPROC_MOBILEAPPSERVER_SYMBOL = 94, 
    PREPROC_MOBILECLIENT_SYMBOL = 95, PREPROC_THICKCLIENTORDINARYAPPLICATION_SYMBOL = 96, 
    PREPROC_THICKCLIENTMANAGEDAPPLICATION_SYMBOL = 97, PREPROC_EXTERNALCONNECTION_SYMBOL = 98, 
    PREPROC_THINCLIENT_SYMBOL = 99, PREPROC_WEBCLIENT_SYMBOL = 100, PREPROC_ATCLIENT_SYMBOL = 101, 
    PREPROC_CLIENT_SYMBOL = 102, PREPROC_ATSERVER_SYMBOL = 103, PREPROC_SERVER_SYMBOL = 104, 
    PREPROC_MOBILE_STANDALONE_SERVER = 105, PREPROC_LINUX = 106, PREPROC_WINDOWS = 107, 
    PREPROC_MACOS = 108, PREPROC_IDENTIFIER = 109, PREPROC_NEWLINE = 110, 
    PREPROC_ANY = 111, ANNOTATION_ATSERVERNOCONTEXT_SYMBOL = 112, ANNOTATION_ATCLIENTATSERVERNOCONTEXT_SYMBOL = 113, 
    ANNOTATION_ATCLIENTATSERVER_SYMBOL = 114, ANNOTATION_ATCLIENT_SYMBOL = 115, 
    ANNOTATION_ATSERVER_SYMBOL = 116, ANNOTATION_BEFORE_SYMBOL = 117, ANNOTATION_AFTER_SYMBOL = 118, 
    ANNOTATION_AROUND_SYMBOL = 119, ANNOTATION_CHANGEANDVALIDATE_SYMBOL = 120, 
    ANNOTATION_CUSTOM_SYMBOL = 121, ANNOTATION_UNKNOWN = 122, PREPROC_ENDDELETE = 123, 
    PREPROC_DELETE_ANY = 124, AWAIT_KEYWORD = 125
  };

  enum {
    RuleFile = 0, RuleShebang = 1, RuleUsedLib = 2, RuleUse = 3, RuleRegionStart = 4, 
    RuleRegionEnd = 5, RuleRegionName = 6, RulePreproc_if = 7, RulePreproc_elsif = 8, 
    RulePreproc_else = 9, RulePreproc_endif = 10, RulePreproc_expression = 11, 
    RulePreproc_logicalOperand = 12, RulePreproc_logicalExpression = 13, 
    RulePreproc_symbol = 14, RulePreproc_unknownSymbol = 15, RulePreproc_boolOperation = 16, 
    RulePreprocessor = 17, RuleCompilerDirectiveSymbol = 18, RuleCompilerDirective = 19, 
    RuleAnnotationName = 20, RuleAnnotationParamName = 21, RuleAnnotation = 22, 
    RuleAnnotationParams = 23, RuleAnnotationParam = 24, RuleVar_name = 25, 
    RuleModuleVars = 26, RuleModuleVar = 27, RuleModuleVarsList = 28, RuleModuleVarDeclaration = 29, 
    RuleSubVars = 30, RuleSubVar = 31, RuleSubVarsList = 32, RuleSubVarDeclaration = 33, 
    RuleSubName = 34, RuleSubs = 35, RuleSub = 36, RuleProcedure = 37, RuleFunction = 38, 
    RuleProcDeclaration = 39, RuleFuncDeclaration = 40, RuleSubCodeBlock = 41, 
    RuleContinueStatement = 42, RuleBreakStatement = 43, RuleRaiseStatement = 44, 
    RuleIfStatement = 45, RuleIfBranch = 46, RuleElsifBranch = 47, RuleElseBranch = 48, 
    RuleWhileStatement = 49, RuleForStatement = 50, RuleForEachStatement = 51, 
    RuleTryStatement = 52, RuleReturnStatement = 53, RuleExecuteStatement = 54, 
    RuleCallStatement = 55, RuleWaitStatement = 56, RuleLabelName = 57, 
    RuleLabel = 58, RuleGotoStatement = 59, RuleTryCodeBlock = 60, RuleExceptCodeBlock = 61, 
    RuleEvent = 62, RuleHandler = 63, RuleAddHandlerStatement = 64, RuleRemoveHandlerStatement = 65, 
    RuleTernaryOperator = 66, RuleWaitExpression = 67, RuleFileCodeBlockBeforeSub = 68, 
    RuleFileCodeBlock = 69, RuleCodeBlock = 70, RuleNumeric = 71, RuleParamList = 72, 
    RuleParam = 73, RuleDefaultValue = 74, RuleConstValue = 75, RuleMultilineString = 76, 
    RuleString = 77, RuleStatement = 78, RuleAssignment = 79, RuleCallParamList = 80, 
    RuleCallParam = 81, RuleExpression = 82, RuleOperation = 83, RuleCompareOperation = 84, 
    RuleBoolOperation = 85, RuleUnaryModifier = 86, RuleMember = 87, RuleNewExpression = 88, 
    RuleTypeName = 89, RuleMethodCall = 90, RuleGlobalMethodCall = 91, RuleMethodName = 92, 
    RuleComplexIdentifier = 93, RuleModifier = 94, RuleAcceptor = 95, RuleLValue = 96, 
    RuleAccessCall = 97, RuleAccessIndex = 98, RuleAccessProperty = 99, 
    RuleDoCall = 100, RuleCompoundStatement = 101
  };

  explicit BSLParser(antlr4::TokenStream *input);

  BSLParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~BSLParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class FileContext;
  class ShebangContext;
  class UsedLibContext;
  class UseContext;
  class RegionStartContext;
  class RegionEndContext;
  class RegionNameContext;
  class Preproc_ifContext;
  class Preproc_elsifContext;
  class Preproc_elseContext;
  class Preproc_endifContext;
  class Preproc_expressionContext;
  class Preproc_logicalOperandContext;
  class Preproc_logicalExpressionContext;
  class Preproc_symbolContext;
  class Preproc_unknownSymbolContext;
  class Preproc_boolOperationContext;
  class PreprocessorContext;
  class CompilerDirectiveSymbolContext;
  class CompilerDirectiveContext;
  class AnnotationNameContext;
  class AnnotationParamNameContext;
  class AnnotationContext;
  class AnnotationParamsContext;
  class AnnotationParamContext;
  class Var_nameContext;
  class ModuleVarsContext;
  class ModuleVarContext;
  class ModuleVarsListContext;
  class ModuleVarDeclarationContext;
  class SubVarsContext;
  class SubVarContext;
  class SubVarsListContext;
  class SubVarDeclarationContext;
  class SubNameContext;
  class SubsContext;
  class SubContext;
  class ProcedureContext;
  class FunctionContext;
  class ProcDeclarationContext;
  class FuncDeclarationContext;
  class SubCodeBlockContext;
  class ContinueStatementContext;
  class BreakStatementContext;
  class RaiseStatementContext;
  class IfStatementContext;
  class IfBranchContext;
  class ElsifBranchContext;
  class ElseBranchContext;
  class WhileStatementContext;
  class ForStatementContext;
  class ForEachStatementContext;
  class TryStatementContext;
  class ReturnStatementContext;
  class ExecuteStatementContext;
  class CallStatementContext;
  class WaitStatementContext;
  class LabelNameContext;
  class LabelContext;
  class GotoStatementContext;
  class TryCodeBlockContext;
  class ExceptCodeBlockContext;
  class EventContext;
  class HandlerContext;
  class AddHandlerStatementContext;
  class RemoveHandlerStatementContext;
  class TernaryOperatorContext;
  class WaitExpressionContext;
  class FileCodeBlockBeforeSubContext;
  class FileCodeBlockContext;
  class CodeBlockContext;
  class NumericContext;
  class ParamListContext;
  class ParamContext;
  class DefaultValueContext;
  class ConstValueContext;
  class MultilineStringContext;
  class StringContext;
  class StatementContext;
  class AssignmentContext;
  class CallParamListContext;
  class CallParamContext;
  class ExpressionContext;
  class OperationContext;
  class CompareOperationContext;
  class BoolOperationContext;
  class UnaryModifierContext;
  class MemberContext;
  class NewExpressionContext;
  class TypeNameContext;
  class MethodCallContext;
  class GlobalMethodCallContext;
  class MethodNameContext;
  class ComplexIdentifierContext;
  class ModifierContext;
  class AcceptorContext;
  class LValueContext;
  class AccessCallContext;
  class AccessIndexContext;
  class AccessPropertyContext;
  class DoCallContext;
  class CompoundStatementContext; 

  class  FileContext : public antlr4::ParserRuleContext {
  public:
    FileContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FileCodeBlockContext *fileCodeBlock();
    antlr4::tree::TerminalNode *EOF();
    ShebangContext *shebang();
    std::vector<PreprocessorContext *> preprocessor();
    PreprocessorContext* preprocessor(size_t i);
    ModuleVarsContext *moduleVars();
    FileCodeBlockBeforeSubContext *fileCodeBlockBeforeSub();
    SubsContext *subs();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FileContext* file();

  class  ShebangContext : public antlr4::ParserRuleContext {
  public:
    ShebangContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HASH();
    antlr4::tree::TerminalNode *PREPROC_EXCLAMATION_MARK();
    std::vector<antlr4::tree::TerminalNode *> PREPROC_ANY();
    antlr4::tree::TerminalNode* PREPROC_ANY(size_t i);
    std::vector<antlr4::tree::TerminalNode *> PREPROC_IDENTIFIER();
    antlr4::tree::TerminalNode* PREPROC_IDENTIFIER(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ShebangContext* shebang();

  class  UsedLibContext : public antlr4::ParserRuleContext {
  public:
    UsedLibContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PREPROC_STRING();
    antlr4::tree::TerminalNode *PREPROC_IDENTIFIER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UsedLibContext* usedLib();

  class  UseContext : public antlr4::ParserRuleContext {
  public:
    UseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PREPROC_USE_KEYWORD();
    UsedLibContext *usedLib();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UseContext* use();

  class  RegionStartContext : public antlr4::ParserRuleContext {
  public:
    RegionStartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PREPROC_REGION();
    RegionNameContext *regionName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RegionStartContext* regionStart();

  class  RegionEndContext : public antlr4::ParserRuleContext {
  public:
    RegionEndContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PREPROC_END_REGION();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RegionEndContext* regionEnd();

  class  RegionNameContext : public antlr4::ParserRuleContext {
  public:
    RegionNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PREPROC_IDENTIFIER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RegionNameContext* regionName();

  class  Preproc_ifContext : public antlr4::ParserRuleContext {
  public:
    Preproc_ifContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PREPROC_IF_KEYWORD();
    Preproc_expressionContext *preproc_expression();
    antlr4::tree::TerminalNode *PREPROC_THEN_KEYWORD();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Preproc_ifContext* preproc_if();

  class  Preproc_elsifContext : public antlr4::ParserRuleContext {
  public:
    Preproc_elsifContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PREPROC_ELSIF_KEYWORD();
    Preproc_expressionContext *preproc_expression();
    antlr4::tree::TerminalNode *PREPROC_THEN_KEYWORD();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Preproc_elsifContext* preproc_elsif();

  class  Preproc_elseContext : public antlr4::ParserRuleContext {
  public:
    Preproc_elseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PREPROC_ELSE_KEYWORD();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Preproc_elseContext* preproc_else();

  class  Preproc_endifContext : public antlr4::ParserRuleContext {
  public:
    Preproc_endifContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PREPROC_ENDIF_KEYWORD();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Preproc_endifContext* preproc_endif();

  class  Preproc_expressionContext : public antlr4::ParserRuleContext {
  public:
    Preproc_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PREPROC_LPAREN();
    Preproc_expressionContext *preproc_expression();
    antlr4::tree::TerminalNode *PREPROC_RPAREN();
    antlr4::tree::TerminalNode *PREPROC_NOT_KEYWORD();
    Preproc_logicalExpressionContext *preproc_logicalExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Preproc_expressionContext* preproc_expression();

  class  Preproc_logicalOperandContext : public antlr4::ParserRuleContext {
  public:
    Preproc_logicalOperandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PREPROC_LPAREN();
    Preproc_logicalOperandContext *preproc_logicalOperand();
    antlr4::tree::TerminalNode *PREPROC_RPAREN();
    antlr4::tree::TerminalNode *PREPROC_NOT_KEYWORD();
    Preproc_symbolContext *preproc_symbol();
    Preproc_logicalExpressionContext *preproc_logicalExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Preproc_logicalOperandContext* preproc_logicalOperand();

  class  Preproc_logicalExpressionContext : public antlr4::ParserRuleContext {
  public:
    Preproc_logicalExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Preproc_logicalOperandContext *> preproc_logicalOperand();
    Preproc_logicalOperandContext* preproc_logicalOperand(size_t i);
    std::vector<Preproc_boolOperationContext *> preproc_boolOperation();
    Preproc_boolOperationContext* preproc_boolOperation(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Preproc_logicalExpressionContext* preproc_logicalExpression();

  class  Preproc_symbolContext : public antlr4::ParserRuleContext {
  public:
    Preproc_symbolContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PREPROC_CLIENT_SYMBOL();
    antlr4::tree::TerminalNode *PREPROC_ATCLIENT_SYMBOL();
    antlr4::tree::TerminalNode *PREPROC_SERVER_SYMBOL();
    antlr4::tree::TerminalNode *PREPROC_ATSERVER_SYMBOL();
    antlr4::tree::TerminalNode *PREPROC_MOBILEAPPCLIENT_SYMBOL();
    antlr4::tree::TerminalNode *PREPROC_MOBILEAPPSERVER_SYMBOL();
    antlr4::tree::TerminalNode *PREPROC_MOBILECLIENT_SYMBOL();
    antlr4::tree::TerminalNode *PREPROC_THICKCLIENTORDINARYAPPLICATION_SYMBOL();
    antlr4::tree::TerminalNode *PREPROC_THICKCLIENTMANAGEDAPPLICATION_SYMBOL();
    antlr4::tree::TerminalNode *PREPROC_EXTERNALCONNECTION_SYMBOL();
    antlr4::tree::TerminalNode *PREPROC_THINCLIENT_SYMBOL();
    antlr4::tree::TerminalNode *PREPROC_WEBCLIENT_SYMBOL();
    antlr4::tree::TerminalNode *PREPROC_MOBILE_STANDALONE_SERVER();
    antlr4::tree::TerminalNode *PREPROC_LINUX();
    antlr4::tree::TerminalNode *PREPROC_WINDOWS();
    antlr4::tree::TerminalNode *PREPROC_MACOS();
    Preproc_unknownSymbolContext *preproc_unknownSymbol();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Preproc_symbolContext* preproc_symbol();

  class  Preproc_unknownSymbolContext : public antlr4::ParserRuleContext {
  public:
    Preproc_unknownSymbolContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PREPROC_IDENTIFIER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Preproc_unknownSymbolContext* preproc_unknownSymbol();

  class  Preproc_boolOperationContext : public antlr4::ParserRuleContext {
  public:
    Preproc_boolOperationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PREPROC_OR_KEYWORD();
    antlr4::tree::TerminalNode *PREPROC_AND_KEYWORD();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Preproc_boolOperationContext* preproc_boolOperation();

  class  PreprocessorContext : public antlr4::ParserRuleContext {
  public:
    PreprocessorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HASH();
    RegionStartContext *regionStart();
    RegionEndContext *regionEnd();
    Preproc_ifContext *preproc_if();
    Preproc_elsifContext *preproc_elsif();
    Preproc_elseContext *preproc_else();
    Preproc_endifContext *preproc_endif();
    UseContext *use();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PreprocessorContext* preprocessor();

  class  CompilerDirectiveSymbolContext : public antlr4::ParserRuleContext {
  public:
    CompilerDirectiveSymbolContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ANNOTATION_ATSERVERNOCONTEXT_SYMBOL();
    antlr4::tree::TerminalNode *ANNOTATION_ATCLIENTATSERVERNOCONTEXT_SYMBOL();
    antlr4::tree::TerminalNode *ANNOTATION_ATCLIENTATSERVER_SYMBOL();
    antlr4::tree::TerminalNode *ANNOTATION_ATCLIENT_SYMBOL();
    antlr4::tree::TerminalNode *ANNOTATION_ATSERVER_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CompilerDirectiveSymbolContext* compilerDirectiveSymbol();

  class  CompilerDirectiveContext : public antlr4::ParserRuleContext {
  public:
    CompilerDirectiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AMPERSAND();
    CompilerDirectiveSymbolContext *compilerDirectiveSymbol();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CompilerDirectiveContext* compilerDirective();

  class  AnnotationNameContext : public antlr4::ParserRuleContext {
  public:
    AnnotationNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ANNOTATION_CUSTOM_SYMBOL();
    antlr4::tree::TerminalNode *ANNOTATION_BEFORE_SYMBOL();
    antlr4::tree::TerminalNode *ANNOTATION_AFTER_SYMBOL();
    antlr4::tree::TerminalNode *ANNOTATION_AROUND_SYMBOL();
    antlr4::tree::TerminalNode *ANNOTATION_CHANGEANDVALIDATE_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AnnotationNameContext* annotationName();

  class  AnnotationParamNameContext : public antlr4::ParserRuleContext {
  public:
    AnnotationParamNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AnnotationParamNameContext* annotationParamName();

  class  AnnotationContext : public antlr4::ParserRuleContext {
  public:
    AnnotationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AMPERSAND();
    AnnotationNameContext *annotationName();
    AnnotationParamsContext *annotationParams();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AnnotationContext* annotation();

  class  AnnotationParamsContext : public antlr4::ParserRuleContext {
  public:
    AnnotationParamsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<AnnotationParamContext *> annotationParam();
    AnnotationParamContext* annotationParam(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AnnotationParamsContext* annotationParams();

  class  AnnotationParamContext : public antlr4::ParserRuleContext {
  public:
    AnnotationParamContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AnnotationParamNameContext *annotationParamName();
    antlr4::tree::TerminalNode *ASSIGN();
    ConstValueContext *constValue();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AnnotationParamContext* annotationParam();

  class  Var_nameContext : public antlr4::ParserRuleContext {
  public:
    Var_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Var_nameContext* var_name();

  class  ModuleVarsContext : public antlr4::ParserRuleContext {
  public:
    ModuleVarsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ModuleVarContext *> moduleVar();
    ModuleVarContext* moduleVar(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ModuleVarsContext* moduleVars();

  class  ModuleVarContext : public antlr4::ParserRuleContext {
  public:
    ModuleVarContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VAR_KEYWORD();
    ModuleVarsListContext *moduleVarsList();
    std::vector<PreprocessorContext *> preprocessor();
    PreprocessorContext* preprocessor(size_t i);
    std::vector<CompilerDirectiveContext *> compilerDirective();
    CompilerDirectiveContext* compilerDirective(size_t i);
    std::vector<AnnotationContext *> annotation();
    AnnotationContext* annotation(size_t i);
    antlr4::tree::TerminalNode *SEMICOLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ModuleVarContext* moduleVar();

  class  ModuleVarsListContext : public antlr4::ParserRuleContext {
  public:
    ModuleVarsListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ModuleVarDeclarationContext *> moduleVarDeclaration();
    ModuleVarDeclarationContext* moduleVarDeclaration(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ModuleVarsListContext* moduleVarsList();

  class  ModuleVarDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ModuleVarDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Var_nameContext *var_name();
    antlr4::tree::TerminalNode *EXPORT_KEYWORD();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ModuleVarDeclarationContext* moduleVarDeclaration();

  class  SubVarsContext : public antlr4::ParserRuleContext {
  public:
    SubVarsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SubVarContext *> subVar();
    SubVarContext* subVar(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SubVarsContext* subVars();

  class  SubVarContext : public antlr4::ParserRuleContext {
  public:
    SubVarContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VAR_KEYWORD();
    SubVarsListContext *subVarsList();
    std::vector<PreprocessorContext *> preprocessor();
    PreprocessorContext* preprocessor(size_t i);
    std::vector<CompilerDirectiveContext *> compilerDirective();
    CompilerDirectiveContext* compilerDirective(size_t i);
    std::vector<AnnotationContext *> annotation();
    AnnotationContext* annotation(size_t i);
    antlr4::tree::TerminalNode *SEMICOLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SubVarContext* subVar();

  class  SubVarsListContext : public antlr4::ParserRuleContext {
  public:
    SubVarsListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SubVarDeclarationContext *> subVarDeclaration();
    SubVarDeclarationContext* subVarDeclaration(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SubVarsListContext* subVarsList();

  class  SubVarDeclarationContext : public antlr4::ParserRuleContext {
  public:
    SubVarDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Var_nameContext *var_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SubVarDeclarationContext* subVarDeclaration();

  class  SubNameContext : public antlr4::ParserRuleContext {
  public:
    SubNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SubNameContext* subName();

  class  SubsContext : public antlr4::ParserRuleContext {
  public:
    SubsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SubContext *> sub();
    SubContext* sub(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SubsContext* subs();

  class  SubContext : public antlr4::ParserRuleContext {
  public:
    SubContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ProcedureContext *procedure();
    FunctionContext *function();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SubContext* sub();

  class  ProcedureContext : public antlr4::ParserRuleContext {
  public:
    ProcedureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ProcDeclarationContext *procDeclaration();
    SubCodeBlockContext *subCodeBlock();
    antlr4::tree::TerminalNode *ENDPROCEDURE_KEYWORD();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ProcedureContext* procedure();

  class  FunctionContext : public antlr4::ParserRuleContext {
  public:
    FunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FuncDeclarationContext *funcDeclaration();
    SubCodeBlockContext *subCodeBlock();
    antlr4::tree::TerminalNode *ENDFUNCTION_KEYWORD();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctionContext* function();

  class  ProcDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ProcDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PROCEDURE_KEYWORD();
    SubNameContext *subName();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<PreprocessorContext *> preprocessor();
    PreprocessorContext* preprocessor(size_t i);
    std::vector<CompilerDirectiveContext *> compilerDirective();
    CompilerDirectiveContext* compilerDirective(size_t i);
    std::vector<AnnotationContext *> annotation();
    AnnotationContext* annotation(size_t i);
    antlr4::tree::TerminalNode *ASYNC_KEYWORD();
    ParamListContext *paramList();
    antlr4::tree::TerminalNode *EXPORT_KEYWORD();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ProcDeclarationContext* procDeclaration();

  class  FuncDeclarationContext : public antlr4::ParserRuleContext {
  public:
    FuncDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FUNCTION_KEYWORD();
    SubNameContext *subName();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<PreprocessorContext *> preprocessor();
    PreprocessorContext* preprocessor(size_t i);
    std::vector<CompilerDirectiveContext *> compilerDirective();
    CompilerDirectiveContext* compilerDirective(size_t i);
    std::vector<AnnotationContext *> annotation();
    AnnotationContext* annotation(size_t i);
    antlr4::tree::TerminalNode *ASYNC_KEYWORD();
    ParamListContext *paramList();
    antlr4::tree::TerminalNode *EXPORT_KEYWORD();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FuncDeclarationContext* funcDeclaration();

  class  SubCodeBlockContext : public antlr4::ParserRuleContext {
  public:
    SubCodeBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CodeBlockContext *codeBlock();
    SubVarsContext *subVars();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SubCodeBlockContext* subCodeBlock();

  class  ContinueStatementContext : public antlr4::ParserRuleContext {
  public:
    ContinueStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONTINUE_KEYWORD();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ContinueStatementContext* continueStatement();

  class  BreakStatementContext : public antlr4::ParserRuleContext {
  public:
    BreakStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BREAK_KEYWORD();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BreakStatementContext* breakStatement();

  class  RaiseStatementContext : public antlr4::ParserRuleContext {
  public:
    RaiseStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RAISE_KEYWORD();
    DoCallContext *doCall();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RaiseStatementContext* raiseStatement();

  class  IfStatementContext : public antlr4::ParserRuleContext {
  public:
    IfStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IfBranchContext *ifBranch();
    antlr4::tree::TerminalNode *ENDIF_KEYWORD();
    std::vector<ElsifBranchContext *> elsifBranch();
    ElsifBranchContext* elsifBranch(size_t i);
    ElseBranchContext *elseBranch();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IfStatementContext* ifStatement();

  class  IfBranchContext : public antlr4::ParserRuleContext {
  public:
    IfBranchContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF_KEYWORD();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *THEN_KEYWORD();
    CodeBlockContext *codeBlock();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IfBranchContext* ifBranch();

  class  ElsifBranchContext : public antlr4::ParserRuleContext {
  public:
    ElsifBranchContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ELSIF_KEYWORD();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *THEN_KEYWORD();
    CodeBlockContext *codeBlock();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ElsifBranchContext* elsifBranch();

  class  ElseBranchContext : public antlr4::ParserRuleContext {
  public:
    ElseBranchContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ELSE_KEYWORD();
    CodeBlockContext *codeBlock();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ElseBranchContext* elseBranch();

  class  WhileStatementContext : public antlr4::ParserRuleContext {
  public:
    WhileStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHILE_KEYWORD();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *DO_KEYWORD();
    CodeBlockContext *codeBlock();
    antlr4::tree::TerminalNode *ENDDO_KEYWORD();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  WhileStatementContext* whileStatement();

  class  ForStatementContext : public antlr4::ParserRuleContext {
  public:
    ForStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR_KEYWORD();
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *ASSIGN();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *TO_KEYWORD();
    antlr4::tree::TerminalNode *DO_KEYWORD();
    CodeBlockContext *codeBlock();
    antlr4::tree::TerminalNode *ENDDO_KEYWORD();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ForStatementContext* forStatement();

  class  ForEachStatementContext : public antlr4::ParserRuleContext {
  public:
    ForEachStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR_KEYWORD();
    antlr4::tree::TerminalNode *EACH_KEYWORD();
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *IN_KEYWORD();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *DO_KEYWORD();
    CodeBlockContext *codeBlock();
    antlr4::tree::TerminalNode *ENDDO_KEYWORD();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ForEachStatementContext* forEachStatement();

  class  TryStatementContext : public antlr4::ParserRuleContext {
  public:
    TryStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRY_KEYWORD();
    TryCodeBlockContext *tryCodeBlock();
    antlr4::tree::TerminalNode *EXCEPT_KEYWORD();
    ExceptCodeBlockContext *exceptCodeBlock();
    antlr4::tree::TerminalNode *ENDTRY_KEYWORD();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TryStatementContext* tryStatement();

  class  ReturnStatementContext : public antlr4::ParserRuleContext {
  public:
    ReturnStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETURN_KEYWORD();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ReturnStatementContext* returnStatement();

  class  ExecuteStatementContext : public antlr4::ParserRuleContext {
  public:
    ExecuteStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXECUTE_KEYWORD();
    DoCallContext *doCall();
    CallParamListContext *callParamList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExecuteStatementContext* executeStatement();

  class  CallStatementContext : public antlr4::ParserRuleContext {
  public:
    CallStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AccessCallContext *accessCall();
    antlr4::tree::TerminalNode *IDENTIFIER();
    GlobalMethodCallContext *globalMethodCall();
    std::vector<ModifierContext *> modifier();
    ModifierContext* modifier(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CallStatementContext* callStatement();

  class  WaitStatementContext : public antlr4::ParserRuleContext {
  public:
    WaitStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    WaitExpressionContext *waitExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  WaitStatementContext* waitStatement();

  class  LabelNameContext : public antlr4::ParserRuleContext {
  public:
    LabelNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LabelNameContext* labelName();

  class  LabelContext : public antlr4::ParserRuleContext {
  public:
    LabelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TILDA();
    LabelNameContext *labelName();
    antlr4::tree::TerminalNode *COLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LabelContext* label();

  class  GotoStatementContext : public antlr4::ParserRuleContext {
  public:
    GotoStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GOTO_KEYWORD();
    antlr4::tree::TerminalNode *TILDA();
    LabelNameContext *labelName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  GotoStatementContext* gotoStatement();

  class  TryCodeBlockContext : public antlr4::ParserRuleContext {
  public:
    TryCodeBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CodeBlockContext *codeBlock();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TryCodeBlockContext* tryCodeBlock();

  class  ExceptCodeBlockContext : public antlr4::ParserRuleContext {
  public:
    ExceptCodeBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CodeBlockContext *codeBlock();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExceptCodeBlockContext* exceptCodeBlock();

  class  EventContext : public antlr4::ParserRuleContext {
  public:
    EventContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EventContext* event();

  class  HandlerContext : public antlr4::ParserRuleContext {
  public:
    HandlerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  HandlerContext* handler();

  class  AddHandlerStatementContext : public antlr4::ParserRuleContext {
  public:
    AddHandlerStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ADDHANDLER_KEYWORD();
    EventContext *event();
    antlr4::tree::TerminalNode *COMMA();
    HandlerContext *handler();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AddHandlerStatementContext* addHandlerStatement();

  class  RemoveHandlerStatementContext : public antlr4::ParserRuleContext {
  public:
    RemoveHandlerStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REMOVEHANDLER_KEYWORD();
    EventContext *event();
    antlr4::tree::TerminalNode *COMMA();
    HandlerContext *handler();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RemoveHandlerStatementContext* removeHandlerStatement();

  class  TernaryOperatorContext : public antlr4::ParserRuleContext {
  public:
    TernaryOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *QUESTION();
    antlr4::tree::TerminalNode *LPAREN();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TernaryOperatorContext* ternaryOperator();

  class  WaitExpressionContext : public antlr4::ParserRuleContext {
  public:
    WaitExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AWAIT_KEYWORD();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  WaitExpressionContext* waitExpression();

  class  FileCodeBlockBeforeSubContext : public antlr4::ParserRuleContext {
  public:
    FileCodeBlockBeforeSubContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CodeBlockContext *codeBlock();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FileCodeBlockBeforeSubContext* fileCodeBlockBeforeSub();

  class  FileCodeBlockContext : public antlr4::ParserRuleContext {
  public:
    FileCodeBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CodeBlockContext *codeBlock();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FileCodeBlockContext* fileCodeBlock();

  class  CodeBlockContext : public antlr4::ParserRuleContext {
  public:
    CodeBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    std::vector<PreprocessorContext *> preprocessor();
    PreprocessorContext* preprocessor(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CodeBlockContext* codeBlock();

  class  NumericContext : public antlr4::ParserRuleContext {
  public:
    NumericContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FLOAT();
    antlr4::tree::TerminalNode *DECIMAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NumericContext* numeric();

  class  ParamListContext : public antlr4::ParserRuleContext {
  public:
    ParamListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ParamContext *> param();
    ParamContext* param(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ParamListContext* paramList();

  class  ParamContext : public antlr4::ParserRuleContext {
  public:
    ParamContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();
    std::vector<AnnotationContext *> annotation();
    AnnotationContext* annotation(size_t i);
    antlr4::tree::TerminalNode *VAL_KEYWORD();
    antlr4::tree::TerminalNode *ASSIGN();
    DefaultValueContext *defaultValue();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ParamContext* param();

  class  DefaultValueContext : public antlr4::ParserRuleContext {
  public:
    DefaultValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConstValueContext *constValue();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DefaultValueContext* defaultValue();

  class  ConstValueContext : public antlr4::ParserRuleContext {
  public:
    ConstValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NumericContext *numeric();
    antlr4::tree::TerminalNode *MINUS();
    antlr4::tree::TerminalNode *PLUS();
    StringContext *string();
    antlr4::tree::TerminalNode *TRUE();
    antlr4::tree::TerminalNode *FALSE();
    antlr4::tree::TerminalNode *UNDEFINED();
    antlr4::tree::TerminalNode *IS_NULL();
    antlr4::tree::TerminalNode *DATETIME();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConstValueContext* constValue();

  class  MultilineStringContext : public antlr4::ParserRuleContext {
  public:
    MultilineStringContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRINGSTART();
    antlr4::tree::TerminalNode *STRINGTAIL();
    std::vector<antlr4::tree::TerminalNode *> STRINGPART();
    antlr4::tree::TerminalNode* STRINGPART(size_t i);
    std::vector<antlr4::tree::TerminalNode *> BAR();
    antlr4::tree::TerminalNode* BAR(size_t i);
    std::vector<PreprocessorContext *> preprocessor();
    PreprocessorContext* preprocessor(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MultilineStringContext* multilineString();

  class  StringContext : public antlr4::ParserRuleContext {
  public:
    StringContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> STRING();
    antlr4::tree::TerminalNode* STRING(size_t i);
    std::vector<MultilineStringContext *> multilineString();
    MultilineStringContext* multilineString(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StringContext* string();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SEMICOLON();
    LabelContext *label();
    CallStatementContext *callStatement();
    WaitStatementContext *waitStatement();
    CompoundStatementContext *compoundStatement();
    AssignmentContext *assignment();
    PreprocessorContext *preprocessor();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StatementContext* statement();

  class  AssignmentContext : public antlr4::ParserRuleContext {
  public:
    AssignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LValueContext *lValue();
    antlr4::tree::TerminalNode *ASSIGN();
    ExpressionContext *expression();
    std::vector<PreprocessorContext *> preprocessor();
    PreprocessorContext* preprocessor(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AssignmentContext* assignment();

  class  CallParamListContext : public antlr4::ParserRuleContext {
  public:
    CallParamListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<CallParamContext *> callParam();
    CallParamContext* callParam(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CallParamListContext* callParamList();

  class  CallParamContext : public antlr4::ParserRuleContext {
  public:
    CallParamContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CallParamContext* callParam();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<MemberContext *> member();
    MemberContext* member(size_t i);
    std::vector<OperationContext *> operation();
    OperationContext* operation(size_t i);
    std::vector<PreprocessorContext *> preprocessor();
    PreprocessorContext* preprocessor(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExpressionContext* expression();

  class  OperationContext : public antlr4::ParserRuleContext {
  public:
    OperationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();
    antlr4::tree::TerminalNode *MUL();
    antlr4::tree::TerminalNode *QUOTIENT();
    antlr4::tree::TerminalNode *MODULO();
    BoolOperationContext *boolOperation();
    CompareOperationContext *compareOperation();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OperationContext* operation();

  class  CompareOperationContext : public antlr4::ParserRuleContext {
  public:
    CompareOperationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LESS();
    antlr4::tree::TerminalNode *LESS_OR_EQUAL();
    antlr4::tree::TerminalNode *GREATER();
    antlr4::tree::TerminalNode *GREATER_OR_EQUAL();
    antlr4::tree::TerminalNode *ASSIGN();
    antlr4::tree::TerminalNode *NOT_EQUAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CompareOperationContext* compareOperation();

  class  BoolOperationContext : public antlr4::ParserRuleContext {
  public:
    BoolOperationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OR_KEYWORD();
    antlr4::tree::TerminalNode *AND_KEYWORD();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BoolOperationContext* boolOperation();

  class  UnaryModifierContext : public antlr4::ParserRuleContext {
  public:
    UnaryModifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NOT_KEYWORD();
    antlr4::tree::TerminalNode *MINUS();
    antlr4::tree::TerminalNode *PLUS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UnaryModifierContext* unaryModifier();

  class  MemberContext : public antlr4::ParserRuleContext {
  public:
    MemberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConstValueContext *constValue();
    ComplexIdentifierContext *complexIdentifier();
    WaitExpressionContext *waitExpression();
    UnaryModifierContext *unaryModifier();
    antlr4::tree::TerminalNode *IDENTIFIER();
    GlobalMethodCallContext *globalMethodCall();
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<ModifierContext *> modifier();
    ModifierContext* modifier(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MemberContext* member();

  class  NewExpressionContext : public antlr4::ParserRuleContext {
  public:
    NewExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NEW_KEYWORD();
    TypeNameContext *typeName();
    DoCallContext *doCall();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NewExpressionContext* newExpression();

  class  TypeNameContext : public antlr4::ParserRuleContext {
  public:
    TypeNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeNameContext* typeName();

  class  MethodCallContext : public antlr4::ParserRuleContext {
  public:
    MethodCallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MethodNameContext *methodName();
    DoCallContext *doCall();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MethodCallContext* methodCall();

  class  GlobalMethodCallContext : public antlr4::ParserRuleContext {
  public:
    GlobalMethodCallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MethodNameContext *methodName();
    DoCallContext *doCall();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  GlobalMethodCallContext* globalMethodCall();

  class  MethodNameContext : public antlr4::ParserRuleContext {
  public:
    MethodNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MethodNameContext* methodName();

  class  ComplexIdentifierContext : public antlr4::ParserRuleContext {
  public:
    ComplexIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();
    NewExpressionContext *newExpression();
    TernaryOperatorContext *ternaryOperator();
    GlobalMethodCallContext *globalMethodCall();
    std::vector<ModifierContext *> modifier();
    ModifierContext* modifier(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ComplexIdentifierContext* complexIdentifier();

  class  ModifierContext : public antlr4::ParserRuleContext {
  public:
    ModifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AccessPropertyContext *accessProperty();
    AccessIndexContext *accessIndex();
    AccessCallContext *accessCall();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ModifierContext* modifier();

  class  AcceptorContext : public antlr4::ParserRuleContext {
  public:
    AcceptorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AccessPropertyContext *accessProperty();
    AccessIndexContext *accessIndex();
    std::vector<ModifierContext *> modifier();
    ModifierContext* modifier(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AcceptorContext* acceptor();

  class  LValueContext : public antlr4::ParserRuleContext {
  public:
    LValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();
    GlobalMethodCallContext *globalMethodCall();
    AcceptorContext *acceptor();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LValueContext* lValue();

  class  AccessCallContext : public antlr4::ParserRuleContext {
  public:
    AccessCallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DOT();
    MethodCallContext *methodCall();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AccessCallContext* accessCall();

  class  AccessIndexContext : public antlr4::ParserRuleContext {
  public:
    AccessIndexContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LBRACK();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RBRACK();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AccessIndexContext* accessIndex();

  class  AccessPropertyContext : public antlr4::ParserRuleContext {
  public:
    AccessPropertyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DOT();
    antlr4::tree::TerminalNode *IDENTIFIER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AccessPropertyContext* accessProperty();

  class  DoCallContext : public antlr4::ParserRuleContext {
  public:
    DoCallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    CallParamListContext *callParamList();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DoCallContext* doCall();

  class  CompoundStatementContext : public antlr4::ParserRuleContext {
  public:
    CompoundStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IfStatementContext *ifStatement();
    WhileStatementContext *whileStatement();
    ForStatementContext *forStatement();
    ForEachStatementContext *forEachStatement();
    TryStatementContext *tryStatement();
    ReturnStatementContext *returnStatement();
    ContinueStatementContext *continueStatement();
    BreakStatementContext *breakStatement();
    RaiseStatementContext *raiseStatement();
    ExecuteStatementContext *executeStatement();
    GotoStatementContext *gotoStatement();
    AddHandlerStatementContext *addHandlerStatement();
    RemoveHandlerStatementContext *removeHandlerStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CompoundStatementContext* compoundStatement();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

