/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "rule-parse.y" /* yacc.c:339  */

#include <stdio.h>
#include <netinet/in.h>
#include <vector>
#include "config.h"
#include "RuleMatcher.h"
#include "Reporter.h"
#include "IPAddr.h"
#include "net_util.h"

extern void begin_PS();
extern void end_PS();

Rule* current_rule = 0;
const char* current_rule_file = 0;

static uint8_t mask_to_len(uint32_t mask)
	{
	if ( mask == 0xffffffff )
	    return 32;

	uint32_t x = ~mask + 1;
	uint8_t len;
	for ( len = 0; len < 32 && (! (x & (1 << len))); ++len );

	return len;
	}

#line 95 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "rup.h".  */
#ifndef YY_YY_HOME_BENJAMIN_BRO_BRO_2_3_1_BUILD_SRC_RUP_H_INCLUDED
# define YY_YY_HOME_BENJAMIN_BRO_BRO_2_3_1_BUILD_SRC_RUP_H_INCLUDED
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
#line 77 "rule-parse.y" /* yacc.c:355  */

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

#line 186 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_HOME_BENJAMIN_BRO_BRO_2_3_1_BUILD_SRC_RUP_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 201 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   107

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  22
/* YYNRULES -- Number of rules.  */
#define YYNRULES  65
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  114

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   289

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    39,     2,     2,     2,     2,    40,     2,
       2,     2,     2,     2,    41,    43,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    42,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    37,     2,    38,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    35,     2,    36,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    96,    96,    98,   103,   102,   112,   113,   117,   124,
     131,   131,   131,   136,   139,   145,   178,   187,   190,   193,
     196,   199,   202,   209,   215,   218,   221,   224,   227,   230,
     237,   244,   249,   254,   267,   275,   277,   279,   284,   292,
     297,   302,   307,   315,   320,   324,   326,   330,   332,   334,
     339,   341,   346,   348,   353,   355,   360,   362,   367,   370,
     374,   377,   381,   383,   388,   390
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TOK_COMP", "TOK_DISABLE", "TOK_DST_IP",
  "TOK_DST_PORT", "TOK_ENABLE", "TOK_EVAL", "TOK_EVENT", "TOK_MIME",
  "TOK_HEADER", "TOK_IDENT", "TOK_INT", "TOK_IP", "TOK_IP6",
  "TOK_IP_OPTIONS", "TOK_IP_OPTION_SYM", "TOK_IP_PROTO", "TOK_PATTERN",
  "TOK_PATTERN_TYPE", "TOK_PAYLOAD_SIZE", "TOK_PROT",
  "TOK_REQUIRES_SIGNATURE", "TOK_REQUIRES_REVERSE_SIGNATURE",
  "TOK_SIGNATURE", "TOK_SAME_IP", "TOK_SRC_IP", "TOK_SRC_PORT",
  "TOK_TCP_STATE", "TOK_STRING", "TOK_TCP_STATE_SYM", "TOK_ACTIVE",
  "TOK_BOOL", "TOK_POLICY_SYMBOL", "'{'", "'}'", "'['", "']'", "'!'",
  "'&'", "','", "':'", "'-'", "$accept", "rule_list", "rule", "$@1",
  "rule_attr_list", "rule_attr", "$@2", "$@3", "hdr_expr", "value_list",
  "prefix_value_list", "prefix_value", "value", "rangeopt", "range",
  "ipoption_list", "tcpstate_list", "integer", "opt_negate",
  "opt_strength", "string", "pattern", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   123,   125,    91,    93,    33,
      38,    44,    58,    45
};
# endif

#define YYPACT_NINF -82

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-82)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
     -82,    13,   -82,    24,   -82,   -82,   -10,   -82,    50,    11,
      46,    47,    21,   -82,    -3,    -3,    30,    36,    59,     0,
      60,    -6,    -4,   -82,    64,    66,    41,    42,   -82,   -82,
     -82,     6,    16,   -82,    49,   -82,   -82,   -82,    39,    44,
     -82,   -82,    43,     2,   -82,   -82,    -8,   -82,    10,   -82,
      73,   -82,    75,     6,    16,   -82,    48,   -82,   -82,   -82,
     -82,    51,   -82,   -82,   -82,   -82,    52,   -82,   -82,    45,
     -82,    10,    74,   -82,    52,   -82,   -82,    10,    56,   -82,
      53,   -82,   -82,   -82,    51,    52,    65,    28,    32,   -82,
     -82,    77,    61,    55,   -82,   -82,    -2,    10,   -82,   -82,
     -82,   -82,   -82,   -82,    -1,    10,   -82,   -82,    16,    10,
      52,    95,    34,   -82
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     1,     0,     2,     4,     0,     7,     0,     0,
       0,     0,     0,    10,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    28,     0,     0,     0,     0,     5,     6,
      20,     0,     0,    19,     0,    63,    62,    17,    61,     0,
      13,    53,    14,     0,    65,    64,     0,    21,     0,    24,
       0,    26,     0,     0,     0,    55,    31,    32,    42,    43,
      44,     8,    41,    38,    45,    46,     9,    37,    11,    59,
      18,     0,     0,    15,    16,    57,    56,     0,     0,    47,
      50,    23,    25,    27,    29,    30,     0,     0,     0,    12,
      58,     0,     0,    50,    52,    48,     0,    49,    54,    40,
      39,    36,    35,    60,     0,     0,    22,    51,     0,     0,
      34,     0,     0,    33
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -43,
      54,    14,   -81,   -82,    29,   -82,   -82,   -45,   -82,   -82,
      87,     7
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,     4,     6,     8,    29,    34,    89,    40,    66,
      61,    62,    67,    78,    79,    42,    56,   107,    91,    70,
      37,    47
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      74,    80,   108,    81,    75,    76,    49,   102,    51,    35,
      44,    85,    44,     2,    63,    64,    65,    45,    58,    45,
      59,    60,    75,    76,    73,     7,    93,    36,    63,    64,
      65,   113,    95,    50,    77,    52,     5,    46,     3,   109,
      99,    30,    59,    60,   101,    64,    65,    64,    65,    31,
      32,    33,    39,    41,     9,    10,    11,    12,    13,    14,
      15,    16,    43,    48,   111,   110,    17,    53,    18,    54,
      19,    20,    55,    21,    22,    57,    23,    24,    25,    26,
      69,    71,    27,    68,    72,    82,    28,    83,    90,    86,
     103,    94,    87,    88,    96,    97,    98,   105,   112,   104,
      92,   100,    38,   106,     0,     0,     0,    84
};

static const yytype_int8 yycheck[] =
{
      43,    46,     3,    48,    12,    13,    12,    88,    12,    12,
      12,    54,    12,     0,    12,    13,    14,    19,    12,    19,
      14,    15,    12,    13,    22,    35,    71,    30,    12,    13,
      14,   112,    77,    39,    42,    39,    12,    37,    25,    40,
      12,    30,    14,    15,    12,    13,    14,    13,    14,     3,
       3,    30,    22,    17,     4,     5,     6,     7,     8,     9,
      10,    11,     3,     3,   109,   108,    16,     3,    18,     3,
      20,    21,    31,    23,    24,    33,    26,    27,    28,    29,
      41,    37,    32,    34,    41,    12,    36,    12,    43,    41,
      13,    17,    41,    41,    38,    42,    31,    42,     3,    38,
      71,    87,    15,    96,    -1,    -1,    -1,    53
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    45,     0,    25,    46,    12,    47,    35,    48,     4,
       5,     6,     7,     8,     9,    10,    11,    16,    18,    20,
      21,    23,    24,    26,    27,    28,    29,    32,    36,    49,
      30,     3,     3,    30,    50,    12,    30,    64,    64,    22,
      52,    17,    59,     3,    12,    19,    37,    65,     3,    12,
      39,    12,    39,     3,     3,    31,    60,    33,    12,    14,
      15,    54,    55,    12,    13,    14,    53,    56,    34,    41,
      63,    37,    41,    22,    53,    12,    13,    42,    57,    58,
      61,    61,    12,    12,    54,    53,    41,    41,    41,    51,
      43,    62,    58,    61,    17,    61,    38,    42,    31,    12,
      55,    12,    56,    13,    38,    42,    65,    61,     3,    40,
      53,    61,     3,    56
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    44,    45,    45,    47,    46,    48,    48,    49,    49,
      50,    51,    49,    49,    49,    49,    49,    49,    49,    49,
      49,    49,    49,    49,    49,    49,    49,    49,    49,    49,
      49,    49,    49,    52,    52,    53,    53,    53,    53,    54,
      54,    54,    54,    55,    55,    56,    56,    57,    57,    57,
      58,    58,    59,    59,    60,    60,    61,    61,    62,    62,
      63,    63,    64,    64,    65,    65
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,     0,     6,     2,     0,     3,     3,
       0,     0,     4,     2,     2,     3,     3,     2,     3,     2,
       2,     2,     5,     3,     2,     3,     2,     3,     1,     3,
       3,     2,     2,     8,     6,     3,     3,     1,     1,     3,
       3,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       1,     3,     3,     1,     3,     1,     1,     1,     1,     0,
       3,     0,     1,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 97 "rule-parse.y" /* yacc.c:1646  */
    { rule_matcher->AddRule((yyvsp[0].rule)); }
#line 1360 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 4:
#line 103 "rule-parse.y" /* yacc.c:1646  */
    {
			Location l(current_rule_file, rules_line_number+1, 0, 0, 0);
			current_rule = new Rule(yylval.str, l);
			}
#line 1369 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 5:
#line 108 "rule-parse.y" /* yacc.c:1646  */
    { (yyval.rule) = current_rule; }
#line 1375 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 8:
#line 118 "rule-parse.y" /* yacc.c:1646  */
    {
			current_rule->AddHdrTest(new RuleHdrTest(
				RuleHdrTest::IPDst,
				(RuleHdrTest::Comp) (yyvsp[-1].val), *((yyvsp[0].prefix_val_list))));
			}
#line 1385 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 9:
#line 125 "rule-parse.y" /* yacc.c:1646  */
    { // Works for both TCP and UDP
			current_rule->AddHdrTest(new RuleHdrTest(
				RuleHdrTest::TCP, 2, 2,
				(RuleHdrTest::Comp) (yyvsp[-1].val), (yyvsp[0].vallist)));
			}
#line 1395 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 10:
#line 131 "rule-parse.y" /* yacc.c:1646  */
    { begin_PS(); }
#line 1401 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 11:
#line 131 "rule-parse.y" /* yacc.c:1646  */
    { end_PS(); }
#line 1407 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 12:
#line 132 "rule-parse.y" /* yacc.c:1646  */
    {
			current_rule->AddCondition(new RuleConditionEval((yyvsp[-1].str)));
			}
#line 1415 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 13:
#line 137 "rule-parse.y" /* yacc.c:1646  */
    { current_rule->AddHdrTest((yyvsp[0].hdr_test)); }
#line 1421 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 14:
#line 140 "rule-parse.y" /* yacc.c:1646  */
    {
			current_rule->AddCondition(
				new RuleConditionIPOptions((yyvsp[0].val)));
			}
#line 1430 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 15:
#line 146 "rule-parse.y" /* yacc.c:1646  */
    {
			int proto = 0;
			switch ( (yyvsp[0].prot) ) {
			case RuleHdrTest::ICMP: proto = IPPROTO_ICMP; break;
			case RuleHdrTest::ICMPv6: proto = IPPROTO_ICMPV6; break;
			// signature matching against outer packet headers of IP-in-IP
			// tunneling not supported, so do a no-op there
			case RuleHdrTest::IP: proto = 0; break;
			case RuleHdrTest::IPv6: proto = 0; break;
			case RuleHdrTest::TCP: proto = IPPROTO_TCP; break;
			case RuleHdrTest::UDP: proto = IPPROTO_UDP; break;
			default:
				rules_error("internal_error: unknown protocol");
			}

			if ( proto )
				{
				maskedvalue_list* vallist = new maskedvalue_list;
				MaskedValue* val = new MaskedValue();

				val->val = proto;
				val->mask = 0xffffffff;
				vallist->append(val);

				// offset & size params are dummies, actual next proto value in
				// header is retrieved dynamically via IP_Hdr::NextProto()
				current_rule->AddHdrTest(new RuleHdrTest(
					RuleHdrTest::NEXT, 0, 0,
					(RuleHdrTest::Comp) (yyvsp[-1].val), vallist));
				}
			}
#line 1466 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 16:
#line 179 "rule-parse.y" /* yacc.c:1646  */
    {
			// offset & size params are dummies, actual next proto value in
			// header is retrieved dynamically via IP_Hdr::NextProto()
			current_rule->AddHdrTest(new RuleHdrTest(
				RuleHdrTest::NEXT, 0, 0,
				(RuleHdrTest::Comp) (yyvsp[-1].val), (yyvsp[0].vallist)));
			}
#line 1478 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 17:
#line 188 "rule-parse.y" /* yacc.c:1646  */
    { current_rule->AddAction(new RuleActionEvent((yyvsp[0].str))); }
#line 1484 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 18:
#line 191 "rule-parse.y" /* yacc.c:1646  */
    { current_rule->AddAction(new RuleActionMIME((yyvsp[-1].str), (yyvsp[0].val))); }
#line 1490 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 19:
#line 194 "rule-parse.y" /* yacc.c:1646  */
    { current_rule->AddAction(new RuleActionEnable((yyvsp[0].str))); }
#line 1496 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 20:
#line 197 "rule-parse.y" /* yacc.c:1646  */
    { current_rule->AddAction(new RuleActionDisable((yyvsp[0].str))); }
#line 1502 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 21:
#line 200 "rule-parse.y" /* yacc.c:1646  */
    { current_rule->AddPattern((yyvsp[0].str), (yyvsp[-1].ptype)); }
#line 1508 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 22:
#line 203 "rule-parse.y" /* yacc.c:1646  */
    {
			if ( (yyvsp[-2].range).offset > 0 )
				reporter->Warning("Offsets are currently ignored for patterns");
			current_rule->AddPattern((yyvsp[0].str), (yyvsp[-4].ptype), 0, (yyvsp[-2].range).len);
			}
#line 1518 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 23:
#line 210 "rule-parse.y" /* yacc.c:1646  */
    {
			current_rule->AddCondition(
				new RuleConditionPayloadSize((yyvsp[0].val), (RuleConditionPayloadSize::Comp) ((yyvsp[-1].val))));
			}
#line 1527 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 24:
#line 216 "rule-parse.y" /* yacc.c:1646  */
    { current_rule->AddRequires((yyvsp[0].str), 0, 0); }
#line 1533 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 25:
#line 219 "rule-parse.y" /* yacc.c:1646  */
    { current_rule->AddRequires((yyvsp[0].str), 0, 1); }
#line 1539 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 26:
#line 222 "rule-parse.y" /* yacc.c:1646  */
    { current_rule->AddRequires((yyvsp[0].str), 1, 0); }
#line 1545 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 27:
#line 225 "rule-parse.y" /* yacc.c:1646  */
    { current_rule->AddRequires((yyvsp[0].str), 1, 1); }
#line 1551 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 28:
#line 228 "rule-parse.y" /* yacc.c:1646  */
    { current_rule->AddCondition(new RuleConditionSameIP()); }
#line 1557 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 29:
#line 231 "rule-parse.y" /* yacc.c:1646  */
    {
			current_rule->AddHdrTest(new RuleHdrTest(
				RuleHdrTest::IPSrc,
				(RuleHdrTest::Comp) (yyvsp[-1].val), *((yyvsp[0].prefix_val_list))));
			}
#line 1567 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 30:
#line 238 "rule-parse.y" /* yacc.c:1646  */
    { // Works for both TCP and UDP
			current_rule->AddHdrTest(new RuleHdrTest(
				RuleHdrTest::TCP, 0, 2,
				(RuleHdrTest::Comp) (yyvsp[-1].val), (yyvsp[0].vallist)));
			}
#line 1577 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 31:
#line 245 "rule-parse.y" /* yacc.c:1646  */
    {
			current_rule->AddCondition(new RuleConditionTCPState((yyvsp[0].val)));
			}
#line 1585 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 32:
#line 250 "rule-parse.y" /* yacc.c:1646  */
    { current_rule->SetActiveStatus((yyvsp[0].bl)); }
#line 1591 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 33:
#line 255 "rule-parse.y" /* yacc.c:1646  */
    {
			maskedvalue_list* vallist = new maskedvalue_list;
			MaskedValue* val = new MaskedValue();

			val->val = (yyvsp[0].mval).val;
			val->mask = (yyvsp[-2].val);
			vallist->append(val);

			(yyval.hdr_test) = new RuleHdrTest((yyvsp[-7].prot), (yyvsp[-5].range).offset, (yyvsp[-5].range).len,
					(RuleHdrTest::Comp) (yyvsp[-1].val), vallist);
			}
#line 1607 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 34:
#line 268 "rule-parse.y" /* yacc.c:1646  */
    {
			(yyval.hdr_test) = new RuleHdrTest((yyvsp[-5].prot), (yyvsp[-3].range).offset, (yyvsp[-3].range).len,
						(RuleHdrTest::Comp) (yyvsp[-1].val), (yyvsp[0].vallist));
			}
#line 1616 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 35:
#line 276 "rule-parse.y" /* yacc.c:1646  */
    { (yyvsp[-2].vallist)->append(new MaskedValue((yyvsp[0].mval))); (yyval.vallist) = (yyvsp[-2].vallist); }
#line 1622 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 36:
#line 278 "rule-parse.y" /* yacc.c:1646  */
    { id_to_maskedvallist((yyvsp[0].str), (yyvsp[-2].vallist)); (yyval.vallist) = (yyvsp[-2].vallist); }
#line 1628 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 37:
#line 280 "rule-parse.y" /* yacc.c:1646  */
    {
			(yyval.vallist) = new maskedvalue_list();
			(yyval.vallist)->append(new MaskedValue((yyvsp[0].mval)));
			}
#line 1637 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 38:
#line 285 "rule-parse.y" /* yacc.c:1646  */
    {
			(yyval.vallist) = new maskedvalue_list();
			id_to_maskedvallist((yyvsp[0].str), (yyval.vallist));
			}
#line 1646 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 39:
#line 293 "rule-parse.y" /* yacc.c:1646  */
    {
			(yyval.prefix_val_list) = (yyvsp[-2].prefix_val_list);
			(yyval.prefix_val_list)->push_back(*((yyvsp[0].prefixval)));
			}
#line 1655 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 40:
#line 298 "rule-parse.y" /* yacc.c:1646  */
    {
			(yyval.prefix_val_list) = (yyvsp[-2].prefix_val_list);
			id_to_maskedvallist((yyvsp[0].str), 0, (yyvsp[-2].prefix_val_list));
			}
#line 1664 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 41:
#line 303 "rule-parse.y" /* yacc.c:1646  */
    {
			(yyval.prefix_val_list) = new vector<IPPrefix>();
			(yyval.prefix_val_list)->push_back(*((yyvsp[0].prefixval)));
			}
#line 1673 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 42:
#line 308 "rule-parse.y" /* yacc.c:1646  */
    {
			(yyval.prefix_val_list) = new vector<IPPrefix>();
			id_to_maskedvallist((yyvsp[0].str), 0, (yyval.prefix_val_list));
			}
#line 1682 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 43:
#line 316 "rule-parse.y" /* yacc.c:1646  */
    {
			(yyval.prefixval) = new IPPrefix(IPAddr(IPv4, &((yyvsp[0].mval).val), IPAddr::Host),
			                  mask_to_len((yyvsp[0].mval).mask));
			}
#line 1691 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 45:
#line 325 "rule-parse.y" /* yacc.c:1646  */
    { (yyval.mval).val = (yyvsp[0].val); (yyval.mval).mask = 0xffffffff; }
#line 1697 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 47:
#line 331 "rule-parse.y" /* yacc.c:1646  */
    { (yyval.range) = (yyvsp[0].range); }
#line 1703 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 48:
#line 333 "rule-parse.y" /* yacc.c:1646  */
    { (yyval.range).offset = 0; (yyval.range).len = (yyvsp[0].val); }
#line 1709 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 49:
#line 335 "rule-parse.y" /* yacc.c:1646  */
    { (yyval.range).offset = (yyvsp[-1].val); (yyval.range).len = UINT_MAX; }
#line 1715 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 50:
#line 340 "rule-parse.y" /* yacc.c:1646  */
    { (yyval.range).offset = (yyvsp[0].val); (yyval.range).len = 1; }
#line 1721 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 51:
#line 342 "rule-parse.y" /* yacc.c:1646  */
    { (yyval.range).offset = (yyvsp[-2].val); (yyval.range).len = (yyvsp[0].val); }
#line 1727 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 52:
#line 347 "rule-parse.y" /* yacc.c:1646  */
    { (yyval.val) = (yyvsp[-2].val) | (yyvsp[0].val); }
#line 1733 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 53:
#line 349 "rule-parse.y" /* yacc.c:1646  */
    { (yyval.val) = (yyvsp[0].val); }
#line 1739 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 54:
#line 354 "rule-parse.y" /* yacc.c:1646  */
    { (yyval.val) = (yyvsp[-2].val) | (yyvsp[0].val); }
#line 1745 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 55:
#line 356 "rule-parse.y" /* yacc.c:1646  */
    { (yyval.val) = (yyvsp[0].val); }
#line 1751 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 56:
#line 361 "rule-parse.y" /* yacc.c:1646  */
    { (yyval.val) = (yyvsp[0].val); }
#line 1757 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 57:
#line 363 "rule-parse.y" /* yacc.c:1646  */
    { (yyval.val) = id_to_uint((yyvsp[0].str)); }
#line 1763 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 58:
#line 368 "rule-parse.y" /* yacc.c:1646  */
    { (yyval.bl) = true; }
#line 1769 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 59:
#line 370 "rule-parse.y" /* yacc.c:1646  */
    { (yyval.bl) = false; }
#line 1775 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 60:
#line 375 "rule-parse.y" /* yacc.c:1646  */
    { (yyval.val) = (yyvsp[-1].bl) ? -(yyvsp[0].val) : (yyvsp[0].val); }
#line 1781 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 61:
#line 377 "rule-parse.y" /* yacc.c:1646  */
    { (yyval.val) = 0; }
#line 1787 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 62:
#line 382 "rule-parse.y" /* yacc.c:1646  */
    { (yyval.str) = (yyvsp[0].str); }
#line 1793 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 63:
#line 384 "rule-parse.y" /* yacc.c:1646  */
    { (yyval.str) = id_to_str((yyvsp[0].str)); }
#line 1799 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 64:
#line 389 "rule-parse.y" /* yacc.c:1646  */
    { (yyval.str) = (yyvsp[0].str); }
#line 1805 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 65:
#line 391 "rule-parse.y" /* yacc.c:1646  */
    { (yyval.str) = id_to_str((yyvsp[0].str)); }
#line 1811 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;


#line 1815 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 394 "rule-parse.y" /* yacc.c:1906  */


void rules_error(const char* msg)
	{
	reporter->Error("Error in signature (%s:%d): %s\n",
			current_rule_file, rules_line_number+1, msg);
	rule_matcher->SetParseError();
	}

void rules_error(const char* msg, const char* addl)
	{
	reporter->Error("Error in signature (%s:%d): %s (%s)\n",
			current_rule_file, rules_line_number+1, msg, addl);
	rule_matcher->SetParseError();
	}

void rules_error(Rule* r, const char* msg)
	{
	const Location& l = r->GetLocation();
	reporter->Error("Error in signature %s (%s:%d): %s\n",
			r->ID(), l.filename, l.first_line, msg);
	rule_matcher->SetParseError();
	}

int rules_wrap(void)
	{
	return 1;
	}
