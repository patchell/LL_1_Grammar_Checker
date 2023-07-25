#pragma once

class CAction65_Parser
{
public:
	CAction65_Parser();
	virtual ~CAction65_Parser();
	BOOL Create();
	//------------------------------
	//      Parsing Methods
	//------------------------------
	CAction65Lexer::Token Action65(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token Modules(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token Modules_1(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token PROCroutine(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token PROCroutine_1(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token ProcDef(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token FuncDef(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token ProcDecl(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token FuncDecl(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token ProcBody(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token ProcBody_1(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token Statements(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token Begin(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token ProcCall(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token ProcCall_1(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token PROCstmt(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token ForStmt(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token ForStmt_1(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token FORstmt(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token Start(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token Finish(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token STEPoption(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token IfStmt(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token IfStmt_1(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token If(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token ThenPart(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token ThenPart_1(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token ElseIfPart(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token WhileStmt(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token WhileStmt_1(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token DoStmt(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token DoStmt_1(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token EXITstmt(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token EXITstmt_1(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token RetStmt(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token RetStmt_1(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token RetStmt_2(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token CodeBlock(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token CodeBlock_1(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token ConstList(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token ConstList_1(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token UntillStmt(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token UntillStmt_1(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token Assignment(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token ASSIGNstmt(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token ArithExpr(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token LogicalOR_1(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token LogicalAND(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token LogicalAND_1(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token RelOperation(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token RelOperation_1(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token RelEquals(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token RelEquals_1(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token BitwiseOR(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token BitwiseOR_1(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token BitwiseAND(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token BitwiseAND_1(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token BitwiseXOR(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token BitwiseXOR_1(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token AddExpr(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token AddExpr_1(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token ShifExpr(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token ShiftExpr_1(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token MultExpr(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token MultExpr_1(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token Unary(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token Factor(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token MemCntentsList(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token MemCntentsList_1(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token SysDecl(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token Define(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token DefList(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token DefList_1(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token Def(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token TypeDecl(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token TypeDecl_1(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token RecIdent(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token RecField(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token VarDecls(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token VarList(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token VarList_1(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token Modifier(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token ArrayStuff(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token OptArrayInit(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token RecDecl(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token RecDecl_1(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token FundDecl(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token FUNCDecl(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token FUNCDecl_1(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token DataDecl(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token DataCecl_1(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token IdentList(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token IdentList_1(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token Ident(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token OptInit(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token ParamList(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token ParamList_1(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token Param(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token LocalDecls(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token CompConst(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token CompConst_1(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token BaseCompConst(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token MemContents(CAction65Lexer::Token LookaHeadToken);
	CAction65Lexer::Token MemContentsType(CAction65Lexer::Token LookaHeadToken);
};
