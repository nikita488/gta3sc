/** \file
 *  This C header file was generated by $ANTLR version 3.5.2
 *
 *     -  From the grammar source file : gta3script.g
 *     -                            On : 2016-05-29 20:43:16
 *     -                 for the lexer : gta3scriptLexerLexer
 *
 * Editing it, at least manually, is not wise.
 *
 * C language generator and runtime by Jim Idle, jimi|hereisanat|idle|dotgoeshere|ws.
 *
 *
 * The lexer 
gta3scriptLexer

has the callable functions (rules) shown below,
 * which will invoke the code for the associated rule in the source grammar
 * assuming that the input stream is pointing to a token/text stream that could begin
 * this rule.
 *
 * For instance if you call the first (topmost) rule in a parser grammar, you will
 * get the results of a full parse, but calling a rule half way through the grammar will
 * allow you to pass part of a full token stream to the parser, such as for syntax checking
 * in editors and so on.
 *
 * The parser entry points are called indirectly (by function pointer to function) via
 * a parser context typedef pgta3scriptLexer, which is returned from a call to gta3scriptLexerNew().
 *
 * As this is a generated lexer, it is unlikely you will call it 'manually'. However
 * the methods are provided anyway.
 *
 * The methods in pgta3scriptLexer are  as follows:
 *
 *  - 
 void
      pgta3scriptLexer->T__98(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->T__99(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->T__100(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->T__101(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->T__102(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->T__103(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->T__104(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->T__105(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->T__106(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->T__107(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->T__108(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->T__109(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->T__110(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->T__111(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->T__112(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->T__113(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->T__114(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->T__115(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->T__116(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->T__117(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->T__118(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->T__119(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->T__120(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->T__121(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->T__122(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->T__123(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->T__124(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->T__125(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->T__126(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->T__127(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->T__128(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->T__129(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->T__130(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->T__131(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->T__132(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->T__133(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->T__134(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->T__135(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->T__136(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->NOT(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->AND(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->OR(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->IF(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->ELSE(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->ENDIF(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->WHILE(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->ENDWHILE(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->REPEAT(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->ENDREPEAT(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->SWITCH(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->ENDSWITCH(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->CASE(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->DEFAULT(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->BREAK(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->CONTINUE(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->VAR_INT(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->LVAR_INT(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->VAR_FLOAT(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->LVAR_FLOAT(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->VAR_TEXT_LABEL(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->LVAR_TEXT_LABEL(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->VAR_TEXT_LABEL16(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->LVAR_TEXT_LABEL16(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->IDENTIFIER(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->INTEGER(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->FLOAT(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->LONG_STRING(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->SHORT_STRING(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->COMMENT(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->WS(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->HEX_LITERAL(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->OCT_LITERAL(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->DEC_LITERAL(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->FLOAT_LITERAL(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->EXPONENT(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->DEC_DIGIT(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->HEX_DIGIT(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->OCT_DIGIT(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->ESC_SEQ(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->OCTAL_ESC(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->UNICODE_ESC(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->A(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->B(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->C(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->D(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->E(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->F(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->G(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->H(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->I(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->J(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->K(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->L(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->M(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->N(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->O(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->P(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->Q(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->R(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->S(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->T(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->U(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->V(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->W(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->X(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->Y(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->Z(pgta3scriptLexer)
 *  - 
 void
      pgta3scriptLexer->Tokens(pgta3scriptLexer)
 *
 * The return type for any particular rule is of course determined by the source
 * grammar file.
 */
// [The "BSD license"]
// Copyright (c) 2005-2009 Jim Idle, Temporal Wave LLC
// http://www.temporal-wave.com
// http://www.linkedin.com/in/jimidle
//
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions
// are met:
// 1. Redistributions of source code must retain the above copyright
//    notice, this list of conditions and the following disclaimer.
// 2. Redistributions in binary form must reproduce the above copyright
//    notice, this list of conditions and the following disclaimer in the
//    documentation and/or other materials provided with the distribution.
// 3. The name of the author may not be used to endorse or promote products
//    derived from this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
// IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
// OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
// IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
// INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
// NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
// THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#ifndef	_gta3scriptLexer_H
#define _gta3scriptLexer_H
/* =============================================================================
 * Standard antlr3 C runtime definitions
 */
#include    <antlr3.h>

/* End of standard antlr 3 runtime definitions
 * =============================================================================
 */

#ifdef __cplusplus
extern "C" {
#endif

// Forward declare the context typedef so that we can use it before it is
// properly defined. Delegators and delegates (from import statements) are
// interdependent and their context structures contain pointers to each other
// C only allows such things to be declared if you pre-declare the typedef.
//
typedef struct gta3scriptLexer_Ctx_struct gta3scriptLexer, * pgta3scriptLexer;



   #define _empty NULL


#ifdef	ANTLR3_WINDOWS
// Disable: Unreferenced parameter,							- Rules with parameters that are not used
//          constant conditional,							- ANTLR realizes that a prediction is always true (synpred usually)
//          initialized but unused variable					- tree rewrite variables declared but not needed
//          Unreferenced local variable						- lexer rule declares but does not always use _type
//          potentially unitialized variable used			- retval always returned from a rule
//			unreferenced local function has been removed	- susually getTokenNames or freeScope, they can go without warnigns
//
// These are only really displayed at warning level /W4 but that is the code ideal I am aiming at
// and the codegen must generate some of these warnings by necessity, apart from 4100, which is
// usually generated when a parser rule is given a parameter that it does not use. Mostly though
// this is a matter of orthogonality hence I disable that one.
//
#pragma warning( disable : 4100 )
#pragma warning( disable : 4101 )
#pragma warning( disable : 4127 )
#pragma warning( disable : 4189 )
#pragma warning( disable : 4505 )
#pragma warning( disable : 4701 )
#endif

/** Context tracking structure for 
gta3scriptLexer

 */
struct gta3scriptLexer_Ctx_struct
{
    /** Built in ANTLR3 context tracker contains all the generic elements
     *  required for context tracking.
     */
    pANTLR3_LEXER    pLexer;

     void
     (*mT__98)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mT__99)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mT__100)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mT__101)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mT__102)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mT__103)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mT__104)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mT__105)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mT__106)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mT__107)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mT__108)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mT__109)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mT__110)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mT__111)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mT__112)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mT__113)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mT__114)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mT__115)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mT__116)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mT__117)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mT__118)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mT__119)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mT__120)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mT__121)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mT__122)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mT__123)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mT__124)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mT__125)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mT__126)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mT__127)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mT__128)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mT__129)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mT__130)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mT__131)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mT__132)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mT__133)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mT__134)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mT__135)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mT__136)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mNOT)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mAND)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mOR)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mIF)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mELSE)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mENDIF)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mWHILE)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mENDWHILE)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mREPEAT)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mENDREPEAT)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mSWITCH)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mENDSWITCH)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mCASE)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mDEFAULT)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mBREAK)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mCONTINUE)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mVAR_INT)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mLVAR_INT)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mVAR_FLOAT)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mLVAR_FLOAT)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mVAR_TEXT_LABEL)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mLVAR_TEXT_LABEL)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mVAR_TEXT_LABEL16)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mLVAR_TEXT_LABEL16)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mIDENTIFIER)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mINTEGER)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mFLOAT)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mLONG_STRING)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mSHORT_STRING)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mCOMMENT)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mWS)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mHEX_LITERAL)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mOCT_LITERAL)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mDEC_LITERAL)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mFLOAT_LITERAL)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mEXPONENT)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mDEC_DIGIT)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mHEX_DIGIT)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mOCT_DIGIT)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mESC_SEQ)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mOCTAL_ESC)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mUNICODE_ESC)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mA)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mB)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mC)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mD)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mE)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mF)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mG)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mH)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mI)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mJ)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mK)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mL)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mM)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mN)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mO)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mP)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mQ)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mR)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mS)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mT)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mU)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mV)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mW)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mX)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mY)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mZ)	(struct gta3scriptLexer_Ctx_struct * ctx);

     void
     (*mTokens)	(struct gta3scriptLexer_Ctx_struct * ctx);
    const char * (*getGrammarFileName)();
    void            (*reset)  (struct gta3scriptLexer_Ctx_struct * ctx);
    void	    (*free)   (struct gta3scriptLexer_Ctx_struct * ctx);
};

// Function protoypes for the constructor functions that external translation units
// such as delegators and delegates may wish to call.
//
ANTLR3_API pgta3scriptLexer gta3scriptLexerNew         (
pANTLR3_INPUT_STREAM
 instream);
ANTLR3_API pgta3scriptLexer gta3scriptLexerNewSSD      (
pANTLR3_INPUT_STREAM
 instream, pANTLR3_RECOGNIZER_SHARED_STATE state);

/** Symbolic definitions of all the tokens that the 
lexer
 will work with.
 * \{
 *
 * Antlr will define EOF, but we can't use that as it it is too common in
 * in C header files and that would be confusing. There is no way to filter this out at the moment
 * so we just undef it here for now. That isn't the value we get back from C recognizers
 * anyway. We are looking for ANTLR3_TOKEN_EOF.
 */
#ifdef	EOF
#undef	EOF
#endif
#ifdef	Tokens
#undef	Tokens
#endif
#define EOF      -1
#define T__98      98
#define T__99      99
#define T__100      100
#define T__101      101
#define T__102      102
#define T__103      103
#define T__104      104
#define T__105      105
#define T__106      106
#define T__107      107
#define T__108      108
#define T__109      109
#define T__110      110
#define T__111      111
#define T__112      112
#define T__113      113
#define T__114      114
#define T__115      115
#define T__116      116
#define T__117      117
#define T__118      118
#define T__119      119
#define T__120      120
#define T__121      121
#define T__122      122
#define T__123      123
#define T__124      124
#define T__125      125
#define T__126      126
#define T__127      127
#define T__128      128
#define T__129      129
#define T__130      130
#define T__131      131
#define T__132      132
#define T__133      133
#define T__134      134
#define T__135      135
#define T__136      136
#define A      4
#define AND      5
#define ARRAY      6
#define B      7
#define BLOCK      8
#define BREAK      9
#define C      10
#define CASE      11
#define COMMAND      12
#define COMMENT      13
#define CONTINUE      14
#define D      15
#define DEC_DIGIT      16
#define DEC_LITERAL      17
#define DEFAULT      18
#define E      19
#define ELSE      20
#define ENDIF      21
#define ENDREPEAT      22
#define ENDSWITCH      23
#define ENDWHILE      24
#define ESC_SEQ      25
#define EXPONENT      26
#define F      27
#define FLOAT      28
#define FLOAT_LITERAL      29
#define G      30
#define H      31
#define HEX_DIGIT      32
#define HEX_LITERAL      33
#define I      34
#define IDENTIFIER      35
#define IF      36
#define INTEGER      37
#define J      38
#define K      39
#define L      40
#define LABEL      41
#define LONG_STRING      42
#define LVAR_FLOAT      43
#define LVAR_INT      44
#define LVAR_TEXT_LABEL      45
#define LVAR_TEXT_LABEL16      46
#define M      47
#define N      48
#define NOT      49
#define O      50
#define OCTAL_ESC      51
#define OCT_DIGIT      52
#define OCT_LITERAL      53
#define OP_ADD      54
#define OP_AND      55
#define OP_CAST      56
#define OP_DEC      57
#define OP_DIV      58
#define OP_EQ      59
#define OP_GE      60
#define OP_GEQ      61
#define OP_INC      62
#define OP_LE      63
#define OP_LEQ      64
#define OP_MOD      65
#define OP_MUL      66
#define OP_OR      67
#define OP_SHL      68
#define OP_SHR      69
#define OP_SUB      70
#define OP_TIMED_ADD      71
#define OP_TIMED_SUB      72
#define OP_XOR      73
#define OR      74
#define P      75
#define Q      76
#define R      77
#define REPEAT      78
#define S      79
#define SCOPE      80
#define SHORT_STRING      81
#define SKIPS      82
#define SWITCH      83
#define T      84
#define U      85
#define UNICODE_ESC      86
#define V      87
#define VAR_FLOAT      88
#define VAR_INT      89
#define VAR_TEXT_LABEL      90
#define VAR_TEXT_LABEL16      91
#define W      92
#define WHILE      93
#define WS      94
#define X      95
#define Y      96
#define Z      97
#ifdef	EOF
#undef	EOF
#define	EOF	ANTLR3_TOKEN_EOF
#endif

#ifndef TOKENSOURCE
#define TOKENSOURCE(lxr) lxr->pLexer->rec->state->tokSource
#endif

/* End of token definitions for gta3scriptLexer
 * =============================================================================
 */
/** } */

#ifdef __cplusplus
}
#endif

#endif

/* END - Note:Keep extra line feed to satisfy UNIX systems */
