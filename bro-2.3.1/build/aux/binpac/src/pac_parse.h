/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_HOME_BENJAMIN_BRO_BRO_2_3_1_BUILD_AUX_BINPAC_SRC_PAC_PARSE_H_INCLUDED
# define YY_YY_HOME_BENJAMIN_BRO_BRO_2_3_1_BUILD_AUX_BINPAC_SRC_PAC_PARSE_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    TOK_TYPE = 258,
    TOK_RECORD = 259,
    TOK_CASE = 260,
    TOK_ENUM = 261,
    TOK_LET = 262,
    TOK_FUNCTION = 263,
    TOK_REFINE = 264,
    TOK_CASEFUNC = 265,
    TOK_CASETYPE = 266,
    TOK_TYPEATTR = 267,
    TOK_HELPERHEADER = 268,
    TOK_HELPERCODE = 269,
    TOK_RIGHTARROW = 270,
    TOK_DEFAULT = 271,
    TOK_OF = 272,
    TOK_PADDING = 273,
    TOK_TO = 274,
    TOK_ALIGN = 275,
    TOK_WITHINPUT = 276,
    TOK_INT8 = 277,
    TOK_INT16 = 278,
    TOK_INT32 = 279,
    TOK_INT64 = 280,
    TOK_UINT8 = 281,
    TOK_UINT16 = 282,
    TOK_UINT32 = 283,
    TOK_UINT64 = 284,
    TOK_ID = 285,
    TOK_NUMBER = 286,
    TOK_REGEX = 287,
    TOK_STRING = 288,
    TOK_BEGIN_RE = 289,
    TOK_END_RE = 290,
    TOK_ATTR_ALSO = 291,
    TOK_ATTR_BYTEORDER = 292,
    TOK_ATTR_CHECK = 293,
    TOK_ATTR_CHUNKED = 294,
    TOK_ATTR_EXPORTSOURCEDATA = 295,
    TOK_ATTR_IF = 296,
    TOK_ATTR_LENGTH = 297,
    TOK_ATTR_LET = 298,
    TOK_ATTR_LINEBREAKER = 299,
    TOK_ATTR_MULTILINE = 300,
    TOK_ATTR_ONELINE = 301,
    TOK_ATTR_REFCOUNT = 302,
    TOK_ATTR_REQUIRES = 303,
    TOK_ATTR_RESTOFDATA = 304,
    TOK_ATTR_RESTOFFLOW = 305,
    TOK_ATTR_TRANSIENT = 306,
    TOK_ATTR_UNTIL = 307,
    TOK_ANALYZER = 308,
    TOK_CONNECTION = 309,
    TOK_FLOW = 310,
    TOK_STATE = 311,
    TOK_ACTION = 312,
    TOK_WHEN = 313,
    TOK_HELPER = 314,
    TOK_DATAUNIT = 315,
    TOK_FLOWDIR = 316,
    TOK_WITHCONTEXT = 317,
    TOK_LPB_EXTERN = 318,
    TOK_LPB_HEADER = 319,
    TOK_LPB_CODE = 320,
    TOK_LPB_MEMBER = 321,
    TOK_LPB_INIT = 322,
    TOK_LPB_CLEANUP = 323,
    TOK_LPB_EOF = 324,
    TOK_LPB = 325,
    TOK_RPB = 326,
    TOK_EMBEDDED_ATOM = 327,
    TOK_EMBEDDED_STRING = 328,
    TOK_PAC_VAL = 329,
    TOK_PAC_SET = 330,
    TOK_PAC_TYPE = 331,
    TOK_PAC_TYPEOF = 332,
    TOK_PAC_CONST_DEF = 333,
    TOK_END_PAC = 334,
    TOK_EXTERN = 335,
    TOK_PLUSEQ = 336,
    TOK_OR = 337,
    TOK_AND = 338,
    TOK_EQUAL = 339,
    TOK_NEQ = 340,
    TOK_LE = 341,
    TOK_GE = 342,
    TOK_LSHIFT = 343,
    TOK_RSHIFT = 344,
    TOK_SIZEOF = 345,
    TOK_OFFSETOF = 346
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 136 "pac_parse.yy" /* yacc.c:1909  */

	ActionParam		*actionparam;
	ActionParamType		*actionparamtype;
	AnalyzerElement		*aelem;
	AnalyzerElementList	*aelemlist;
	Attr			*attr;
	AttrList		*attrlist;
	ConstString		*cstr;
	CaseExpr		*caseexpr;
	CaseExprList		*caseexprlist;
	CaseField		*casefield;
	CaseFieldList 		*casefieldlist;
	ContextField		*contextfield;
	ContextFieldList 	*contextfieldlist;
	Decl			*decl;
	EmbeddedCode		*embedded_code;
	Enum			*enumitem;
	EnumList		*enumlist;
	Expr			*expr;
	ExprList 		*exprlist;
	Field 			*field;
	FieldList 		*fieldlist;
	Function		*function;
	ID			*id;
	InputBuffer		*input;
	LetFieldList		*letfieldlist;
	LetField		*letfield;
	Number			*num;
	PacPrimitive		*pacprimitive;
	Param 			*param;
	ParamList 		*paramlist;
	RecordFieldList 	*recordfieldlist;
	RecordField		*recordfield;
	RegEx			*regex;
	StateVar		*statevar;
	StateVarList		*statevarlist;
	const char		*str;
	Type 			*type;
	int			val;

#line 187 "/home/benjamin/Bro/bro-2.3.1/build/aux/binpac/src/pac_parse.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_HOME_BENJAMIN_BRO_BRO_2_3_1_BUILD_AUX_BINPAC_SRC_PAC_PARSE_H_INCLUDED  */
