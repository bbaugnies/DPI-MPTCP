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

#ifndef YY_YY_HOME_BENJAMIN_BRO_BRO_2_3_1_BUILD_SRC_BROPARSE_H_INCLUDED
# define YY_YY_HOME_BENJAMIN_BRO_BRO_2_3_1_BUILD_SRC_BROPARSE_H_INCLUDED
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
    TOK_ADD = 258,
    TOK_ADD_TO = 259,
    TOK_ADDR = 260,
    TOK_ANY = 261,
    TOK_ATENDIF = 262,
    TOK_ATELSE = 263,
    TOK_ATIF = 264,
    TOK_ATIFDEF = 265,
    TOK_ATIFNDEF = 266,
    TOK_BOOL = 267,
    TOK_BREAK = 268,
    TOK_CASE = 269,
    TOK_CONST = 270,
    TOK_CONSTANT = 271,
    TOK_COPY = 272,
    TOK_COUNT = 273,
    TOK_COUNTER = 274,
    TOK_DEFAULT = 275,
    TOK_DELETE = 276,
    TOK_DOUBLE = 277,
    TOK_ELSE = 278,
    TOK_ENUM = 279,
    TOK_EVENT = 280,
    TOK_EXPORT = 281,
    TOK_FALLTHROUGH = 282,
    TOK_FILE = 283,
    TOK_FOR = 284,
    TOK_FUNCTION = 285,
    TOK_GLOBAL = 286,
    TOK_HOOK = 287,
    TOK_ID = 288,
    TOK_IF = 289,
    TOK_INT = 290,
    TOK_INTERVAL = 291,
    TOK_LIST = 292,
    TOK_LOCAL = 293,
    TOK_MODULE = 294,
    TOK_NEXT = 295,
    TOK_OF = 296,
    TOK_OPAQUE = 297,
    TOK_PATTERN = 298,
    TOK_PATTERN_TEXT = 299,
    TOK_PORT = 300,
    TOK_PRINT = 301,
    TOK_RECORD = 302,
    TOK_REDEF = 303,
    TOK_REMOVE_FROM = 304,
    TOK_RETURN = 305,
    TOK_SCHEDULE = 306,
    TOK_SET = 307,
    TOK_STRING = 308,
    TOK_SUBNET = 309,
    TOK_SWITCH = 310,
    TOK_TABLE = 311,
    TOK_TIME = 312,
    TOK_TIMEOUT = 313,
    TOK_TIMER = 314,
    TOK_TYPE = 315,
    TOK_UNION = 316,
    TOK_VECTOR = 317,
    TOK_WHEN = 318,
    TOK_ATTR_ADD_FUNC = 319,
    TOK_ATTR_ENCRYPT = 320,
    TOK_ATTR_DEFAULT = 321,
    TOK_ATTR_OPTIONAL = 322,
    TOK_ATTR_REDEF = 323,
    TOK_ATTR_ROTATE_INTERVAL = 324,
    TOK_ATTR_ROTATE_SIZE = 325,
    TOK_ATTR_DEL_FUNC = 326,
    TOK_ATTR_EXPIRE_FUNC = 327,
    TOK_ATTR_EXPIRE_CREATE = 328,
    TOK_ATTR_EXPIRE_READ = 329,
    TOK_ATTR_EXPIRE_WRITE = 330,
    TOK_ATTR_PERSISTENT = 331,
    TOK_ATTR_SYNCHRONIZED = 332,
    TOK_ATTR_RAW_OUTPUT = 333,
    TOK_ATTR_MERGEABLE = 334,
    TOK_ATTR_PRIORITY = 335,
    TOK_ATTR_LOG = 336,
    TOK_ATTR_ERROR_HANDLER = 337,
    TOK_ATTR_TYPE_COLUMN = 338,
    TOK_DEBUG = 339,
    TOK_NO_TEST = 340,
    TOK_OR = 341,
    TOK_AND = 342,
    TOK_LE = 343,
    TOK_GE = 344,
    TOK_EQ = 345,
    TOK_NE = 346,
    TOK_IN = 347,
    TOK_NOT_IN = 348,
    TOK_INCR = 349,
    TOK_DECR = 350,
    TOK_HAS_FIELD = 351,
    TOK_HAS_ATTR = 352
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 228 "parse.y" /* yacc.c:1909  */

	bool b;
	char* str;
	ID* id;
	id_list* id_l;
	init_class ic;
	Val* val;
	RE_Matcher* re;
	Expr* expr;
	EventExpr* event_expr;
	Stmt* stmt;
	ListExpr* list;
	BroType* type;
	RecordType* record;
	FuncType* func_type;
	TypeList* type_l;
	TypeDecl* type_decl;
	type_decl_list* type_decl_l;
	Case* c_case;
	case_list* case_l;
	Attr* attr;
	attr_list* attr_l;
	attr_tag attrtag;

#line 177 "/home/benjamin/Bro/bro-2.3.1/build/src/broparse.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;
int yyparse (void);

#endif /* !YY_YY_HOME_BENJAMIN_BRO_BRO_2_3_1_BUILD_SRC_BROPARSE_H_INCLUDED  */
