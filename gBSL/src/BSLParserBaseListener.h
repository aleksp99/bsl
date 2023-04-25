
// Generated from .\BSLParser.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"
#include "BSLParserListener.h"


/**
 * This class provides an empty implementation of BSLParserListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  BSLParserBaseListener : public BSLParserListener {
public:

  virtual void enterFile(BSLParser::FileContext * /*ctx*/) override { }
  virtual void exitFile(BSLParser::FileContext * /*ctx*/) override { }

  virtual void enterShebang(BSLParser::ShebangContext * /*ctx*/) override { }
  virtual void exitShebang(BSLParser::ShebangContext * /*ctx*/) override { }

  virtual void enterUsedLib(BSLParser::UsedLibContext * /*ctx*/) override { }
  virtual void exitUsedLib(BSLParser::UsedLibContext * /*ctx*/) override { }

  virtual void enterUse(BSLParser::UseContext * /*ctx*/) override { }
  virtual void exitUse(BSLParser::UseContext * /*ctx*/) override { }

  virtual void enterRegionStart(BSLParser::RegionStartContext * /*ctx*/) override { }
  virtual void exitRegionStart(BSLParser::RegionStartContext * /*ctx*/) override { }

  virtual void enterRegionEnd(BSLParser::RegionEndContext * /*ctx*/) override { }
  virtual void exitRegionEnd(BSLParser::RegionEndContext * /*ctx*/) override { }

  virtual void enterRegionName(BSLParser::RegionNameContext * /*ctx*/) override { }
  virtual void exitRegionName(BSLParser::RegionNameContext * /*ctx*/) override { }

  virtual void enterPreproc_if(BSLParser::Preproc_ifContext * /*ctx*/) override { }
  virtual void exitPreproc_if(BSLParser::Preproc_ifContext * /*ctx*/) override { }

  virtual void enterPreproc_elsif(BSLParser::Preproc_elsifContext * /*ctx*/) override { }
  virtual void exitPreproc_elsif(BSLParser::Preproc_elsifContext * /*ctx*/) override { }

  virtual void enterPreproc_else(BSLParser::Preproc_elseContext * /*ctx*/) override { }
  virtual void exitPreproc_else(BSLParser::Preproc_elseContext * /*ctx*/) override { }

  virtual void enterPreproc_endif(BSLParser::Preproc_endifContext * /*ctx*/) override { }
  virtual void exitPreproc_endif(BSLParser::Preproc_endifContext * /*ctx*/) override { }

  virtual void enterPreproc_expression(BSLParser::Preproc_expressionContext * /*ctx*/) override { }
  virtual void exitPreproc_expression(BSLParser::Preproc_expressionContext * /*ctx*/) override { }

  virtual void enterPreproc_logicalOperand(BSLParser::Preproc_logicalOperandContext * /*ctx*/) override { }
  virtual void exitPreproc_logicalOperand(BSLParser::Preproc_logicalOperandContext * /*ctx*/) override { }

  virtual void enterPreproc_logicalExpression(BSLParser::Preproc_logicalExpressionContext * /*ctx*/) override { }
  virtual void exitPreproc_logicalExpression(BSLParser::Preproc_logicalExpressionContext * /*ctx*/) override { }

  virtual void enterPreproc_symbol(BSLParser::Preproc_symbolContext * /*ctx*/) override { }
  virtual void exitPreproc_symbol(BSLParser::Preproc_symbolContext * /*ctx*/) override { }

  virtual void enterPreproc_unknownSymbol(BSLParser::Preproc_unknownSymbolContext * /*ctx*/) override { }
  virtual void exitPreproc_unknownSymbol(BSLParser::Preproc_unknownSymbolContext * /*ctx*/) override { }

  virtual void enterPreproc_boolOperation(BSLParser::Preproc_boolOperationContext * /*ctx*/) override { }
  virtual void exitPreproc_boolOperation(BSLParser::Preproc_boolOperationContext * /*ctx*/) override { }

  virtual void enterPreprocessor(BSLParser::PreprocessorContext * /*ctx*/) override { }
  virtual void exitPreprocessor(BSLParser::PreprocessorContext * /*ctx*/) override { }

  virtual void enterCompilerDirectiveSymbol(BSLParser::CompilerDirectiveSymbolContext * /*ctx*/) override { }
  virtual void exitCompilerDirectiveSymbol(BSLParser::CompilerDirectiveSymbolContext * /*ctx*/) override { }

  virtual void enterCompilerDirective(BSLParser::CompilerDirectiveContext * /*ctx*/) override { }
  virtual void exitCompilerDirective(BSLParser::CompilerDirectiveContext * /*ctx*/) override { }

  virtual void enterAnnotationName(BSLParser::AnnotationNameContext * /*ctx*/) override { }
  virtual void exitAnnotationName(BSLParser::AnnotationNameContext * /*ctx*/) override { }

  virtual void enterAnnotationParamName(BSLParser::AnnotationParamNameContext * /*ctx*/) override { }
  virtual void exitAnnotationParamName(BSLParser::AnnotationParamNameContext * /*ctx*/) override { }

  virtual void enterAnnotation(BSLParser::AnnotationContext * /*ctx*/) override { }
  virtual void exitAnnotation(BSLParser::AnnotationContext * /*ctx*/) override { }

  virtual void enterAnnotationParams(BSLParser::AnnotationParamsContext * /*ctx*/) override { }
  virtual void exitAnnotationParams(BSLParser::AnnotationParamsContext * /*ctx*/) override { }

  virtual void enterAnnotationParam(BSLParser::AnnotationParamContext * /*ctx*/) override { }
  virtual void exitAnnotationParam(BSLParser::AnnotationParamContext * /*ctx*/) override { }

  virtual void enterVar_name(BSLParser::Var_nameContext * /*ctx*/) override { }
  virtual void exitVar_name(BSLParser::Var_nameContext * /*ctx*/) override { }

  virtual void enterModuleVars(BSLParser::ModuleVarsContext * /*ctx*/) override { }
  virtual void exitModuleVars(BSLParser::ModuleVarsContext * /*ctx*/) override { }

  virtual void enterModuleVar(BSLParser::ModuleVarContext * /*ctx*/) override { }
  virtual void exitModuleVar(BSLParser::ModuleVarContext * /*ctx*/) override { }

  virtual void enterModuleVarsList(BSLParser::ModuleVarsListContext * /*ctx*/) override { }
  virtual void exitModuleVarsList(BSLParser::ModuleVarsListContext * /*ctx*/) override { }

  virtual void enterModuleVarDeclaration(BSLParser::ModuleVarDeclarationContext * /*ctx*/) override { }
  virtual void exitModuleVarDeclaration(BSLParser::ModuleVarDeclarationContext * /*ctx*/) override { }

  virtual void enterSubVars(BSLParser::SubVarsContext * /*ctx*/) override { }
  virtual void exitSubVars(BSLParser::SubVarsContext * /*ctx*/) override { }

  virtual void enterSubVar(BSLParser::SubVarContext * /*ctx*/) override { }
  virtual void exitSubVar(BSLParser::SubVarContext * /*ctx*/) override { }

  virtual void enterSubVarsList(BSLParser::SubVarsListContext * /*ctx*/) override { }
  virtual void exitSubVarsList(BSLParser::SubVarsListContext * /*ctx*/) override { }

  virtual void enterSubVarDeclaration(BSLParser::SubVarDeclarationContext * /*ctx*/) override { }
  virtual void exitSubVarDeclaration(BSLParser::SubVarDeclarationContext * /*ctx*/) override { }

  virtual void enterSubName(BSLParser::SubNameContext * /*ctx*/) override { }
  virtual void exitSubName(BSLParser::SubNameContext * /*ctx*/) override { }

  virtual void enterSubs(BSLParser::SubsContext * /*ctx*/) override { }
  virtual void exitSubs(BSLParser::SubsContext * /*ctx*/) override { }

  virtual void enterSub(BSLParser::SubContext * /*ctx*/) override { }
  virtual void exitSub(BSLParser::SubContext * /*ctx*/) override { }

  virtual void enterProcedure(BSLParser::ProcedureContext * /*ctx*/) override { }
  virtual void exitProcedure(BSLParser::ProcedureContext * /*ctx*/) override { }

  virtual void enterFunction(BSLParser::FunctionContext * /*ctx*/) override { }
  virtual void exitFunction(BSLParser::FunctionContext * /*ctx*/) override { }

  virtual void enterProcDeclaration(BSLParser::ProcDeclarationContext * /*ctx*/) override { }
  virtual void exitProcDeclaration(BSLParser::ProcDeclarationContext * /*ctx*/) override { }

  virtual void enterFuncDeclaration(BSLParser::FuncDeclarationContext * /*ctx*/) override { }
  virtual void exitFuncDeclaration(BSLParser::FuncDeclarationContext * /*ctx*/) override { }

  virtual void enterSubCodeBlock(BSLParser::SubCodeBlockContext * /*ctx*/) override { }
  virtual void exitSubCodeBlock(BSLParser::SubCodeBlockContext * /*ctx*/) override { }

  virtual void enterContinueStatement(BSLParser::ContinueStatementContext * /*ctx*/) override { }
  virtual void exitContinueStatement(BSLParser::ContinueStatementContext * /*ctx*/) override { }

  virtual void enterBreakStatement(BSLParser::BreakStatementContext * /*ctx*/) override { }
  virtual void exitBreakStatement(BSLParser::BreakStatementContext * /*ctx*/) override { }

  virtual void enterRaiseStatement(BSLParser::RaiseStatementContext * /*ctx*/) override { }
  virtual void exitRaiseStatement(BSLParser::RaiseStatementContext * /*ctx*/) override { }

  virtual void enterIfStatement(BSLParser::IfStatementContext * /*ctx*/) override { }
  virtual void exitIfStatement(BSLParser::IfStatementContext * /*ctx*/) override { }

  virtual void enterIfBranch(BSLParser::IfBranchContext * /*ctx*/) override { }
  virtual void exitIfBranch(BSLParser::IfBranchContext * /*ctx*/) override { }

  virtual void enterElsifBranch(BSLParser::ElsifBranchContext * /*ctx*/) override { }
  virtual void exitElsifBranch(BSLParser::ElsifBranchContext * /*ctx*/) override { }

  virtual void enterElseBranch(BSLParser::ElseBranchContext * /*ctx*/) override { }
  virtual void exitElseBranch(BSLParser::ElseBranchContext * /*ctx*/) override { }

  virtual void enterWhileStatement(BSLParser::WhileStatementContext * /*ctx*/) override { }
  virtual void exitWhileStatement(BSLParser::WhileStatementContext * /*ctx*/) override { }

  virtual void enterForStatement(BSLParser::ForStatementContext * /*ctx*/) override { }
  virtual void exitForStatement(BSLParser::ForStatementContext * /*ctx*/) override { }

  virtual void enterForEachStatement(BSLParser::ForEachStatementContext * /*ctx*/) override { }
  virtual void exitForEachStatement(BSLParser::ForEachStatementContext * /*ctx*/) override { }

  virtual void enterTryStatement(BSLParser::TryStatementContext * /*ctx*/) override { }
  virtual void exitTryStatement(BSLParser::TryStatementContext * /*ctx*/) override { }

  virtual void enterReturnStatement(BSLParser::ReturnStatementContext * /*ctx*/) override { }
  virtual void exitReturnStatement(BSLParser::ReturnStatementContext * /*ctx*/) override { }

  virtual void enterExecuteStatement(BSLParser::ExecuteStatementContext * /*ctx*/) override { }
  virtual void exitExecuteStatement(BSLParser::ExecuteStatementContext * /*ctx*/) override { }

  virtual void enterCallStatement(BSLParser::CallStatementContext * /*ctx*/) override { }
  virtual void exitCallStatement(BSLParser::CallStatementContext * /*ctx*/) override { }

  virtual void enterWaitStatement(BSLParser::WaitStatementContext * /*ctx*/) override { }
  virtual void exitWaitStatement(BSLParser::WaitStatementContext * /*ctx*/) override { }

  virtual void enterLabelName(BSLParser::LabelNameContext * /*ctx*/) override { }
  virtual void exitLabelName(BSLParser::LabelNameContext * /*ctx*/) override { }

  virtual void enterLabel(BSLParser::LabelContext * /*ctx*/) override { }
  virtual void exitLabel(BSLParser::LabelContext * /*ctx*/) override { }

  virtual void enterGotoStatement(BSLParser::GotoStatementContext * /*ctx*/) override { }
  virtual void exitGotoStatement(BSLParser::GotoStatementContext * /*ctx*/) override { }

  virtual void enterTryCodeBlock(BSLParser::TryCodeBlockContext * /*ctx*/) override { }
  virtual void exitTryCodeBlock(BSLParser::TryCodeBlockContext * /*ctx*/) override { }

  virtual void enterExceptCodeBlock(BSLParser::ExceptCodeBlockContext * /*ctx*/) override { }
  virtual void exitExceptCodeBlock(BSLParser::ExceptCodeBlockContext * /*ctx*/) override { }

  virtual void enterEvent(BSLParser::EventContext * /*ctx*/) override { }
  virtual void exitEvent(BSLParser::EventContext * /*ctx*/) override { }

  virtual void enterHandler(BSLParser::HandlerContext * /*ctx*/) override { }
  virtual void exitHandler(BSLParser::HandlerContext * /*ctx*/) override { }

  virtual void enterAddHandlerStatement(BSLParser::AddHandlerStatementContext * /*ctx*/) override { }
  virtual void exitAddHandlerStatement(BSLParser::AddHandlerStatementContext * /*ctx*/) override { }

  virtual void enterRemoveHandlerStatement(BSLParser::RemoveHandlerStatementContext * /*ctx*/) override { }
  virtual void exitRemoveHandlerStatement(BSLParser::RemoveHandlerStatementContext * /*ctx*/) override { }

  virtual void enterTernaryOperator(BSLParser::TernaryOperatorContext * /*ctx*/) override { }
  virtual void exitTernaryOperator(BSLParser::TernaryOperatorContext * /*ctx*/) override { }

  virtual void enterWaitExpression(BSLParser::WaitExpressionContext * /*ctx*/) override { }
  virtual void exitWaitExpression(BSLParser::WaitExpressionContext * /*ctx*/) override { }

  virtual void enterFileCodeBlockBeforeSub(BSLParser::FileCodeBlockBeforeSubContext * /*ctx*/) override { }
  virtual void exitFileCodeBlockBeforeSub(BSLParser::FileCodeBlockBeforeSubContext * /*ctx*/) override { }

  virtual void enterFileCodeBlock(BSLParser::FileCodeBlockContext * /*ctx*/) override { }
  virtual void exitFileCodeBlock(BSLParser::FileCodeBlockContext * /*ctx*/) override { }

  virtual void enterCodeBlock(BSLParser::CodeBlockContext * /*ctx*/) override { }
  virtual void exitCodeBlock(BSLParser::CodeBlockContext * /*ctx*/) override { }

  virtual void enterNumeric(BSLParser::NumericContext * /*ctx*/) override { }
  virtual void exitNumeric(BSLParser::NumericContext * /*ctx*/) override { }

  virtual void enterParamList(BSLParser::ParamListContext * /*ctx*/) override { }
  virtual void exitParamList(BSLParser::ParamListContext * /*ctx*/) override { }

  virtual void enterParam(BSLParser::ParamContext * /*ctx*/) override { }
  virtual void exitParam(BSLParser::ParamContext * /*ctx*/) override { }

  virtual void enterDefaultValue(BSLParser::DefaultValueContext * /*ctx*/) override { }
  virtual void exitDefaultValue(BSLParser::DefaultValueContext * /*ctx*/) override { }

  virtual void enterConstValue(BSLParser::ConstValueContext * /*ctx*/) override { }
  virtual void exitConstValue(BSLParser::ConstValueContext * /*ctx*/) override { }

  virtual void enterMultilineString(BSLParser::MultilineStringContext * /*ctx*/) override { }
  virtual void exitMultilineString(BSLParser::MultilineStringContext * /*ctx*/) override { }

  virtual void enterString(BSLParser::StringContext * /*ctx*/) override { }
  virtual void exitString(BSLParser::StringContext * /*ctx*/) override { }

  virtual void enterStatement(BSLParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(BSLParser::StatementContext * /*ctx*/) override { }

  virtual void enterAssignment(BSLParser::AssignmentContext * /*ctx*/) override { }
  virtual void exitAssignment(BSLParser::AssignmentContext * /*ctx*/) override { }

  virtual void enterCallParamList(BSLParser::CallParamListContext * /*ctx*/) override { }
  virtual void exitCallParamList(BSLParser::CallParamListContext * /*ctx*/) override { }

  virtual void enterCallParam(BSLParser::CallParamContext * /*ctx*/) override { }
  virtual void exitCallParam(BSLParser::CallParamContext * /*ctx*/) override { }

  virtual void enterExpression(BSLParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(BSLParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterOperation(BSLParser::OperationContext * /*ctx*/) override { }
  virtual void exitOperation(BSLParser::OperationContext * /*ctx*/) override { }

  virtual void enterCompareOperation(BSLParser::CompareOperationContext * /*ctx*/) override { }
  virtual void exitCompareOperation(BSLParser::CompareOperationContext * /*ctx*/) override { }

  virtual void enterBoolOperation(BSLParser::BoolOperationContext * /*ctx*/) override { }
  virtual void exitBoolOperation(BSLParser::BoolOperationContext * /*ctx*/) override { }

  virtual void enterUnaryModifier(BSLParser::UnaryModifierContext * /*ctx*/) override { }
  virtual void exitUnaryModifier(BSLParser::UnaryModifierContext * /*ctx*/) override { }

  virtual void enterMember(BSLParser::MemberContext * /*ctx*/) override { }
  virtual void exitMember(BSLParser::MemberContext * /*ctx*/) override { }

  virtual void enterNewExpression(BSLParser::NewExpressionContext * /*ctx*/) override { }
  virtual void exitNewExpression(BSLParser::NewExpressionContext * /*ctx*/) override { }

  virtual void enterTypeName(BSLParser::TypeNameContext * /*ctx*/) override { }
  virtual void exitTypeName(BSLParser::TypeNameContext * /*ctx*/) override { }

  virtual void enterMethodCall(BSLParser::MethodCallContext * /*ctx*/) override { }
  virtual void exitMethodCall(BSLParser::MethodCallContext * /*ctx*/) override { }

  virtual void enterGlobalMethodCall(BSLParser::GlobalMethodCallContext * /*ctx*/) override { }
  virtual void exitGlobalMethodCall(BSLParser::GlobalMethodCallContext * /*ctx*/) override { }

  virtual void enterMethodName(BSLParser::MethodNameContext * /*ctx*/) override { }
  virtual void exitMethodName(BSLParser::MethodNameContext * /*ctx*/) override { }

  virtual void enterComplexIdentifier(BSLParser::ComplexIdentifierContext * /*ctx*/) override { }
  virtual void exitComplexIdentifier(BSLParser::ComplexIdentifierContext * /*ctx*/) override { }

  virtual void enterModifier(BSLParser::ModifierContext * /*ctx*/) override { }
  virtual void exitModifier(BSLParser::ModifierContext * /*ctx*/) override { }

  virtual void enterAcceptor(BSLParser::AcceptorContext * /*ctx*/) override { }
  virtual void exitAcceptor(BSLParser::AcceptorContext * /*ctx*/) override { }

  virtual void enterLValue(BSLParser::LValueContext * /*ctx*/) override { }
  virtual void exitLValue(BSLParser::LValueContext * /*ctx*/) override { }

  virtual void enterAccessCall(BSLParser::AccessCallContext * /*ctx*/) override { }
  virtual void exitAccessCall(BSLParser::AccessCallContext * /*ctx*/) override { }

  virtual void enterAccessIndex(BSLParser::AccessIndexContext * /*ctx*/) override { }
  virtual void exitAccessIndex(BSLParser::AccessIndexContext * /*ctx*/) override { }

  virtual void enterAccessProperty(BSLParser::AccessPropertyContext * /*ctx*/) override { }
  virtual void exitAccessProperty(BSLParser::AccessPropertyContext * /*ctx*/) override { }

  virtual void enterDoCall(BSLParser::DoCallContext * /*ctx*/) override { }
  virtual void exitDoCall(BSLParser::DoCallContext * /*ctx*/) override { }

  virtual void enterCompoundStatement(BSLParser::CompoundStatementContext * /*ctx*/) override { }
  virtual void exitCompoundStatement(BSLParser::CompoundStatementContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

