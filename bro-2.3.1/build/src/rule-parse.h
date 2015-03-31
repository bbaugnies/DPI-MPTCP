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

#ifndef YY_YY_HOME_BENJAMIN_BRO_BRO_2_3_1_BUILD_SRC_RUP_H_INCLUDED
# define YY_YY_HOME_BENJAMIN_BRO_BRO_2_3_1_BUILD_SRC_RUP_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int rules_debug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum rules_tokentype
  {
    TOK_COMP = 258,
    TOK_DISABLE = 259,
    TOK_DST_IP = 260,
    TOK_DST_PORT = 261,
    TOK_ENABLE = 262,
    TOK_EVAL = 263,
    TOK_EVENT = 264,
    TOK_MIME = 265,
    TOK_HEADER = 266,
    TOK_IDENT = 267,
    TOK_INT = 268,
    TOK_IP = 269,
    TOK_IP6 = 270,
    TOK_IP_OPTIONS = 271,
    TOK_IP_OPTION_SYM = 272,
    TOK_IP_PROTO = 273,
    TOK_PATTERN = 274,
    TOK_PATTERN_TYPE = 275,
    TOK_PAYLOAD_SIZE = 276,
    TOK_PROT = 277,
    TOK_REQUIRES_SIGNATURE = 278,
    TOK_REQUIRES_REVERSE_SIGNATURE = 279,
    TOK_SIGNATURE = 280,
    TOK_SAME_IP = 281,
    TOK_SRC_IP = 282,
    TOK_SRC_PORT = 283,
    TOK_TCP_STATE = 284,
    TOK_STRING = 285,
    TOK_TCP_STATE_SYM = 286,
    TOK_ACTIVE = 287,
    TOK_BOOL = 288,
    TOK_POLICY_SYMBOL = 289
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 77 "rule-parse.y" /* yacc.c:1909  */

	Rule* rule;
	RuleHdrTest* hdr_test;
	maskedvalue_list* vallist;
	vector<IPPrefix>* prefix_val_list;
	IPPrefix* prefixval;

	bool bl;
	int val;
	char* str;
	MaskedValue mval;
	RuleHdrTest::Prot prot;
	Range range;
	Rule::PatternType ptype;

#line 105 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE rules_lval;

int rules_parse (void);

#endif /* !YY_YY_HOME_BENJAMIN_BRO_BRO_2_3_1_BUILD_SRC_RUP_H_INCLUDED  */
