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

#ifndef YY_YY_HOME_BENJAMIN_BRO_BRO_2_3_1_BUILD_SRC_BIF_PARSE_H_INCLUDED
# define YY_YY_HOME_BENJAMIN_BRO_BRO_2_3_1_BUILD_SRC_BIF_PARSE_H_INCLUDED
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
    TOK_LPP = 258,
    TOK_RPP = 259,
    TOK_LPB = 260,
    TOK_RPB = 261,
    TOK_LPPB = 262,
    TOK_RPPB = 263,
    TOK_VAR_ARG = 264,
    TOK_BOOL = 265,
    TOK_FUNCTION = 266,
    TOK_EVENT = 267,
    TOK_CONST = 268,
    TOK_ENUM = 269,
    TOK_OF = 270,
    TOK_TYPE = 271,
    TOK_RECORD = 272,
    TOK_SET = 273,
    TOK_VECTOR = 274,
    TOK_OPAQUE = 275,
    TOK_TABLE = 276,
    TOK_MODULE = 277,
    TOK_ARGS = 278,
    TOK_ARG = 279,
    TOK_ARGC = 280,
    TOK_ID = 281,
    TOK_ATTR = 282,
    TOK_CSTR = 283,
    TOK_LF = 284,
    TOK_WS = 285,
    TOK_COMMENT = 286,
    TOK_ATOM = 287,
    TOK_INT = 288,
    TOK_C_TOKEN = 289
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 293 "builtin-func.y" /* yacc.c:1909  */

	const char* str;
	int val;

#line 94 "/home/benjamin/Bro/bro-2.3.1/build/src/bif_parse.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_HOME_BENJAMIN_BRO_BRO_2_3_1_BUILD_SRC_BIF_PARSE_H_INCLUDED  */
