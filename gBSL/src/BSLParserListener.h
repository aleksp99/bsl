
// Generated from .\BSLParser.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"
#include "BSLParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by BSLParser.
 */
class  BSLParserListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterFile(BSLParser::FileContext *ctx) = 0;
  virtual void exitFile(BSLParser::FileContext *ctx) = 0;

  virtual void enterShebang(BSLParser::ShebangContext *ctx) = 0;
  virtual void exitShebang(BSLParser::ShebangContext *ctx) = 0;

  virtual void enterUsedLib(BSLParser::UsedLibContext *ctx) = 0;
  virtual void exitUsedLib(BSLParser::UsedLibContext *ctx) = 0;

  virtual void enterUse(BSLParser::UseContext *ctx) = 0;
  virtual void exitUse(BSLParser::UseContext *ctx) = 0;

  virtual void enterRegionStart(BSLParser::RegionStartContext *ctx) = 0;
  virtual void exitRegionStart(BSLParser::RegionStartContext *ctx) = 0;

  virtual void enterRegionEnd(BSLParser::RegionEndContext *ctx) = 0;
  virtual void exitRegionEnd(BSLParser::RegionEndContext *ctx) = 0;

  virtual void enterRegionName(BSLParser::RegionNameContext *ctx) = 0;
  virtual void exitRegionName(BSLParser::RegionNameContext *ctx) = 0;

  virtual void enterPreproc_if(BSLParser::Preproc_ifContext *ctx) = 0;
  virtual void exitPreproc_if(BSLParser::Preproc_ifContext *ctx) = 0;

  virtual void enterPreproc_elsif(BSLParser::Preproc_elsifContext *ctx) = 0;
  virtual void exitPreproc_elsif(BSLParser::Preproc_elsifContext *ctx) = 0;

  virtual void enterPreproc_else(BSLParser::Preproc_elseContext *ctx) = 0;
  virtual void exitPreproc_else(BSLParser::Preproc_elseContext *ctx) = 0;

  virtual void enterPreproc_endif(BSLParser::Preproc_endifContext *ctx) = 0;
  virtual void exitPreproc_endif(BSLParser::Preproc_endifContext *ctx) = 0;

  virtual void enterPreproc_expression(BSLParser::Preproc_expressionContext *ctx) = 0;
  virtual void exitPreproc_expression(BSLParser::Preproc_expressionContext *ctx) = 0;

  virtual void enterPreproc_logicalOperand(BSLParser::Preproc_logicalOperandContext *ctx) = 0;
  virtual void exitPreproc_logicalOperand(BSLParser::Preproc_logicalOperandContext *ctx) = 0;

  virtual void enterPreproc_logicalExpression(BSLParser::Preproc_logicalExpressionContext *ctx) = 0;
  virtual void exitPreproc_logicalExpression(BSLParser::Preproc_logicalExpressionContext *ctx) = 0;

  virtual void enterPreproc_symbol(BSLParser::Preproc_symbolContext *ctx) = 0;
  virtual void exitPreproc_symbol(BSLParser::Preproc_symbolContext *ctx) = 0;

  virtual void enterPreproc_unknownSymbol(BSLParser::Preproc_unknownSymbolContext *ctx) = 0;
  virtual void exitPreproc_unknownSymbol(BSLParser::Preproc_unknownSymbolContext *ctx) = 0;

  virtual void enterPreproc_boolOperation(BSLParser::Preproc_boolOperationContext *ctx) = 0;
  virtual void exitPreproc_boolOperation(BSLParser::Preproc_boolOperationContext *ctx) = 0;

  virtual void enterPreprocessor(BSLParser::PreprocessorContext *ctx) = 0;
  virtual void exitPreprocessor(BSLParser::PreprocessorContext *ctx) = 0;

  virtual void enterCompilerDirectiveSymbol(BSLParser::CompilerDirectiveSymbolContext *ctx) = 0;
  virtual void exitCompilerDirectiveSymbol(BSLParser::CompilerDirectiveSymbolContext *ctx) = 0;

  virtual void enterCompilerDirective(BSLParser::CompilerDirectiveContext *ctx) = 0;
  virtual void exitCompilerDirective(BSLParser::CompilerDirectiveContext *ctx) = 0;

  virtual void enterAnnotationName(BSLParser::AnnotationNameContext *ctx) = 0;
  virtual void exitAnnotationName(BSLParser::AnnotationNameContext *ctx) = 0;

  virtual void enterAnnotationParamName(BSLParser::AnnotationParamNameContext *ctx) = 0;
  virtual void exitAnnotationParamName(BSLParser::AnnotationParamNameContext *ctx) = 0;

  virtual void enterAnnotation(BSLParser::AnnotationContext *ctx) = 0;
  virtual void exitAnnotation(BSLParser::AnnotationContext *ctx) = 0;

  virtual void enterAnnotationParams(BSLParser::AnnotationParamsContext *ctx) = 0;
  virtual void exitAnnotationParams(BSLParser::AnnotationParamsContext *ctx) = 0;

  virtual void enterAnnotationParam(BSLParser::AnnotationParamContext *ctx) = 0;
  virtual void exitAnnotationParam(BSLParser::AnnotationParamContext *ctx) = 0;

  virtual void enterVar_name(BSLParser::Var_nameContext *ctx) = 0;
  virtual void exitVar_name(BSLParser::Var_nameContext *ctx) = 0;

  virtual void enterModuleVars(BSLParser::ModuleVarsContext *ctx) = 0;
  virtual void exitModuleVars(BSLParser::ModuleVarsContext *ctx) = 0;

  virtual void enterModuleVar(BSLParser::ModuleVarContext *ctx) = 0;
  virtual void exitModuleVar(BSLParser::ModuleVarContext *ctx) = 0;

  virtual void enterModuleVarsList(BSLParser::ModuleVarsListContext *ctx) = 0;
  virtual void exitModuleVarsList(BSLParser::ModuleVarsListContext *ctx) = 0;

  virtual void enterModuleVarDeclaration(BSLParser::ModuleVarDeclarationContext *ctx) = 0;
  virtual void exitModuleVarDeclaration(BSLParser::ModuleVarDeclarationContext *ctx) = 0;

  virtual void enterSubVars(BSLParser::SubVarsContext *ctx) = 0;
  virtual void exitSubVars(BSLParser::SubVarsContext *ctx) = 0;

  virtual void enterSubVar(BSLParser::SubVarContext *ctx) = 0;
  virtual void exitSubVar(BSLParser::SubVarContext *ctx) = 0;

  virtual void enterSubVarsList(BSLParser::SubVarsListContext *ctx) = 0;
  virtual void exitSubVarsList(BSLParser::SubVarsListContext *ctx) = 0;

  virtual void enterSubVarDeclaration(BSLParser::SubVarDeclarationContext *ctx) = 0;
  virtual void exitSubVarDeclaration(BSLParser::SubVarDeclarationContext *ctx) = 0;

  virtual void enterSubName(BSLParser::SubNameContext *ctx) = 0;
  virtual void exitSubName(BSLParser::SubNameContext *ctx) = 0;

  virtual void enterSubs(BSLParser::SubsContext *ctx) = 0;
  virtual void exitSubs(BSLParser::SubsContext *ctx) = 0;

  virtual void enterSub(BSLParser::SubContext *ctx) = 0;
  virtual void exitSub(BSLParser::SubContext *ctx) = 0;

  virtual void enterProcedure(BSLParser::ProcedureContext *ctx) = 0;
  virtual void exitProcedure(BSLParser::ProcedureContext *ctx) = 0;

  virtual void enterFunction(BSLParser::FunctionContext *ctx) = 0;
  virtual void exitFunction(BSLParser::FunctionContext *ctx) = 0;

  virtual void enterProcDeclaration(BSLParser::ProcDeclarationContext *ctx) = 0;
  virtual void exitProcDeclaration(BSLParser::ProcDeclarationContext *ctx) = 0;

  virtual void enterFuncDeclaration(BSLParser::FuncDeclarationContext *ctx) = 0;
  virtual void exitFuncDeclaration(BSLParser::FuncDeclarationContext *ctx) = 0;

  virtual void enterSubCodeBlock(BSLParser::SubCodeBlockContext *ctx) = 0;
  virtual void exitSubCodeBlock(BSLParser::SubCodeBlockContext *ctx) = 0;

  virtual void enterContinueStatement(BSLParser::ContinueStatementContext *ctx) = 0;
  virtual void exitContinueStatement(BSLParser::ContinueStatementContext *ctx) = 0;

  virtual void enterBreakStatement(BSLParser::BreakStatementContext *ctx) = 0;
  virtual void exitBreakStatement(BSLParser::BreakStatementContext *ctx) = 0;

  virtual void enterRaiseStatement(BSLParser::RaiseStatementContext *ctx) = 0;
  virtual void exitRaiseStatement(BSLParser::RaiseStatementContext *ctx) = 0;

  virtual void enterIfStatement(BSLParser::IfStatementContext *ctx) = 0;
  virtual void exitIfStatement(BSLParser::IfStatementContext *ctx) = 0;

  virtual void enterIfBranch(BSLParser::IfBranchContext *ctx) = 0;
  virtual void exitIfBranch(BSLParser::IfBranchContext *ctx) = 0;

  virtual void enterElsifBranch(BSLParser::ElsifBranchContext *ctx) = 0;
  virtual void exitElsifBranch(BSLParser::ElsifBranchContext *ctx) = 0;

  virtual void enterElseBranch(BSLParser::ElseBranchContext *ctx) = 0;
  virtual void exitElseBranch(BSLParser::ElseBranchContext *ctx) = 0;

  virtual void enterWhileStatement(BSLParser::WhileStatementContext *ctx) = 0;
  virtual void exitWhileStatement(BSLParser::WhileStatementContext *ctx) = 0;

  virtual void enterForStatement(BSLParser::ForStatementContext *ctx) = 0;
  virtual void exitForStatement(BSLParser::ForStatementContext *ctx) = 0;

  virtual void enterForEachStatement(BSLParser::ForEachStatementContext *ctx) = 0;
  virtual void exitForEachStatement(BSLParser::ForEachStatementContext *ctx) = 0;

  virtual void enterTryStatement(BSLParser::TryStatementContext *ctx) = 0;
  virtual void exitTryStatement(BSLParser::TryStatementContext *ctx) = 0;

  virtual void enterReturnStatement(BSLParser::ReturnStatementContext *ctx) = 0;
  virtual void exitReturnStatement(BSLParser::ReturnStatementContext *ctx) = 0;

  virtual void enterExecuteStatement(BSLParser::ExecuteStatementContext *ctx) = 0;
  virtual void exitExecuteStatement(BSLParser::ExecuteStatementContext *ctx) = 0;

  virtual void enterCallStatement(BSLParser::CallStatementContext *ctx) = 0;
  virtual void exitCallStatement(BSLParser::CallStatementContext *ctx) = 0;

  virtual void enterWaitStatement(BSLParser::WaitStatementContext *ctx) = 0;
  virtual void exitWaitStatement(BSLParser::WaitStatementContext *ctx) = 0;

  virtual void enterLabelName(BSLParser::LabelNameContext *ctx) = 0;
  virtual void exitLabelName(BSLParser::LabelNameContext *ctx) = 0;

  virtual void enterLabel(BSLParser::LabelContext *ctx) = 0;
  virtual void exitLabel(BSLParser::LabelContext *ctx) = 0;

  virtual void enterGotoStatement(BSLParser::GotoStatementContext *ctx) = 0;
  virtual void exitGotoStatement(BSLParser::GotoStatementContext *ctx) = 0;

  virtual void enterTryCodeBlock(BSLParser::TryCodeBlockContext *ctx) = 0;
  virtual void exitTryCodeBlock(BSLParser::TryCodeBlockContext *ctx) = 0;

  virtual void enterExceptCodeBlock(BSLParser::ExceptCodeBlockContext *ctx) = 0;
  virtual void exitExceptCodeBlock(BSLParser::ExceptCodeBlockContext *ctx) = 0;

  virtual void enterEvent(BSLParser::EventContext *ctx) = 0;
  virtual void exitEvent(BSLParser::EventContext *ctx) = 0;

  virtual void enterHandler(BSLParser::HandlerContext *ctx) = 0;
  virtual void exitHandler(BSLParser::HandlerContext *ctx) = 0;

  virtual void enterAddHandlerStatement(BSLParser::AddHandlerStatementContext *ctx) = 0;
  virtual void exitAddHandlerStatement(BSLParser::AddHandlerStatementContext *ctx) = 0;

  virtual void enterRemoveHandlerStatement(BSLParser::RemoveHandlerStatementContext *ctx) = 0;
  virtual void exitRemoveHandlerStatement(BSLParser::RemoveHandlerStatementContext *ctx) = 0;

  virtual void enterTernaryOperator(BSLParser::TernaryOperatorContext *ctx) = 0;
  virtual void exitTernaryOperator(BSLParser::TernaryOperatorContext *ctx) = 0;

  virtual void enterWaitExpression(BSLParser::WaitExpressionContext *ctx) = 0;
  virtual void exitWaitExpression(BSLParser::WaitExpressionContext *ctx) = 0;

  virtual void enterFileCodeBlockBeforeSub(BSLParser::FileCodeBlockBeforeSubContext *ctx) = 0;
  virtual void exitFileCodeBlockBeforeSub(BSLParser::FileCodeBlockBeforeSubContext *ctx) = 0;

  virtual void enterFileCodeBlock(BSLParser::FileCodeBlockContext *ctx) = 0;
  virtual void exitFileCodeBlock(BSLParser::FileCodeBlockContext *ctx) = 0;

  virtual void enterCodeBlock(BSLParser::CodeBlockContext *ctx) = 0;
  virtual void exitCodeBlock(BSLParser::CodeBlockContext *ctx) = 0;

  virtual void enterNumeric(BSLParser::NumericContext *ctx) = 0;
  virtual void exitNumeric(BSLParser::NumericContext *ctx) = 0;

  virtual void enterParamList(BSLParser::ParamListContext *ctx) = 0;
  virtual void exitParamList(BSLParser::ParamListContext *ctx) = 0;

  virtual void enterParam(BSLParser::ParamContext *ctx) = 0;
  virtual void exitParam(BSLParser::ParamContext *ctx) = 0;

  virtual void enterDefaultValue(BSLParser::DefaultValueContext *ctx) = 0;
  virtual void exitDefaultValue(BSLParser::DefaultValueContext *ctx) = 0;

  virtual void enterConstValue(BSLParser::ConstValueContext *ctx) = 0;
  virtual void exitConstValue(BSLParser::ConstValueContext *ctx) = 0;

  virtual void enterMultilineString(BSLParser::MultilineStringContext *ctx) = 0;
  virtual void exitMultilineString(BSLParser::MultilineStringContext *ctx) = 0;

  virtual void enterString(BSLParser::StringContext *ctx) = 0;
  virtual void exitString(BSLParser::StringContext *ctx) = 0;

  virtual void enterStatement(BSLParser::StatementContext *ctx) = 0;
  virtual void exitStatement(BSLParser::StatementContext *ctx) = 0;

  virtual void enterAssignment(BSLParser::AssignmentContext *ctx) = 0;
  virtual void exitAssignment(BSLParser::AssignmentContext *ctx) = 0;

  virtual void enterCallParamList(BSLParser::CallParamListContext *ctx) = 0;
  virtual void exitCallParamList(BSLParser::CallParamListContext *ctx) = 0;

  virtual void enterCallParam(BSLParser::CallParamContext *ctx) = 0;
  virtual void exitCallParam(BSLParser::CallParamContext *ctx) = 0;

  virtual void enterExpression(BSLParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(BSLParser::ExpressionContext *ctx) = 0;

  virtual void enterOperation(BSLParser::OperationContext *ctx) = 0;
  virtual void exitOperation(BSLParser::OperationContext *ctx) = 0;

  virtual void enterCompareOperation(BSLParser::CompareOperationContext *ctx) = 0;
  virtual void exitCompareOperation(BSLParser::CompareOperationContext *ctx) = 0;

  virtual void enterBoolOperation(BSLParser::BoolOperationContext *ctx) = 0;
  virtual void exitBoolOperation(BSLParser::BoolOperationContext *ctx) = 0;

  virtual void enterUnaryModifier(BSLParser::UnaryModifierContext *ctx) = 0;
  virtual void exitUnaryModifier(BSLParser::UnaryModifierContext *ctx) = 0;

  virtual void enterMember(BSLParser::MemberContext *ctx) = 0;
  virtual void exitMember(BSLParser::MemberContext *ctx) = 0;

  virtual void enterNewExpression(BSLParser::NewExpressionContext *ctx) = 0;
  virtual void exitNewExpression(BSLParser::NewExpressionContext *ctx) = 0;

  virtual void enterTypeName(BSLParser::TypeNameContext *ctx) = 0;
  virtual void exitTypeName(BSLParser::TypeNameContext *ctx) = 0;

  virtual void enterMethodCall(BSLParser::MethodCallContext *ctx) = 0;
  virtual void exitMethodCall(BSLParser::MethodCallContext *ctx) = 0;

  virtual void enterGlobalMethodCall(BSLParser::GlobalMethodCallContext *ctx) = 0;
  virtual void exitGlobalMethodCall(BSLParser::GlobalMethodCallContext *ctx) = 0;

  virtual void enterMethodName(BSLParser::MethodNameContext *ctx) = 0;
  virtual void exitMethodName(BSLParser::MethodNameContext *ctx) = 0;

  virtual void enterComplexIdentifier(BSLParser::ComplexIdentifierContext *ctx) = 0;
  virtual void exitComplexIdentifier(BSLParser::ComplexIdentifierContext *ctx) = 0;

  virtual void enterModifier(BSLParser::ModifierContext *ctx) = 0;
  virtual void exitModifier(BSLParser::ModifierContext *ctx) = 0;

  virtual void enterAcceptor(BSLParser::AcceptorContext *ctx) = 0;
  virtual void exitAcceptor(BSLParser::AcceptorContext *ctx) = 0;

  virtual void enterLValue(BSLParser::LValueContext *ctx) = 0;
  virtual void exitLValue(BSLParser::LValueContext *ctx) = 0;

  virtual void enterAccessCall(BSLParser::AccessCallContext *ctx) = 0;
  virtual void exitAccessCall(BSLParser::AccessCallContext *ctx) = 0;

  virtual void enterAccessIndex(BSLParser::AccessIndexContext *ctx) = 0;
  virtual void exitAccessIndex(BSLParser::AccessIndexContext *ctx) = 0;

  virtual void enterAccessProperty(BSLParser::AccessPropertyContext *ctx) = 0;
  virtual void exitAccessProperty(BSLParser::AccessPropertyContext *ctx) = 0;

  virtual void enterDoCall(BSLParser::DoCallContext *ctx) = 0;
  virtual void exitDoCall(BSLParser::DoCallContext *ctx) = 0;

  virtual void enterCompoundStatement(BSLParser::CompoundStatementContext *ctx) = 0;
  virtual void exitCompoundStatement(BSLParser::CompoundStatementContext *ctx) = 0;


};

