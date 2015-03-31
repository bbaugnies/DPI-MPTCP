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

/* All symbols defined below should begin with rules_ or YY, to avoid
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


extern YYSTYPE rules_lval;

int rules_parse (void);

#endif /* !YY_YY_HOME_BENJAMIN_BRO_BRO_2_3_1_BUILD_SRC_RUP_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 201 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 rules_type_uint8;
#else
typedef unsigned char rules_type_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 rules_type_int8;
#else
typedef signed char rules_type_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 rules_type_uint16;
#else
typedef unsigned short int rules_type_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 rules_type_int16;
#else
typedef short int rules_type_int16;
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
/* Suppress an incorrect diagnostic about rules_lval being uninitialized.  */
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


#if ! defined rules_overflow || YYERROR_VERBOSE

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
#endif /* ! defined rules_overflow || YYERROR_VERBOSE */


#if (! defined rules_overflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union rules_alloc
{
  rules_type_int16 rules_ss_alloc;
  YYSTYPE rules_vs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union rules_alloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (rules_type_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T rules_newbytes;                                            \
        YYCOPY (&rules_ptr->Stack_alloc, Stack, rules_size);                    \
        Stack = &rules_ptr->Stack_alloc;                                    \
        rules_newbytes = rules_stacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        rules_ptr += rules_newbytes / sizeof (*rules_ptr);                          \
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
          YYSIZE_T rules_i;                         \
          for (rules_i = 0; rules_i < (Count); rules_i++)   \
            (Dst)[rules_i] = (Src)[rules_i];            \
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
   by rules_lex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   289

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? rules_translate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by rules_lex, without out-of-bounds checking.  */
static const rules_type_uint8 rules_translate[] =
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
static const rules_type_uint16 rules_rline[] =
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
static const char *const rules_tname[] =
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
static const rules_type_uint16 rules_toknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   123,   125,    91,    93,    33,
      38,    44,    58,    45
};
# endif

#define YYPACT_NINF -82

#define rules_pact_value_is_default(Yystate) \
  (!!((Yystate) == (-82)))

#define YYTABLE_NINF -1

#define rules_table_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const rules_type_int8 rules_pact[] =
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
static const rules_type_uint8 rules_defact[] =
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
static const rules_type_int8 rules_pgoto[] =
{
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -43,
      54,    14,   -81,   -82,    29,   -82,   -82,   -45,   -82,   -82,
      87,     7
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const rules_type_int8 rules_defgoto[] =
{
      -1,     1,     4,     6,     8,    29,    34,    89,    40,    66,
      61,    62,    67,    78,    79,    42,    56,   107,    91,    70,
      37,    47
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const rules_type_uint8 rules_table[] =
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

static const rules_type_int8 rules_check[] =
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
static const rules_type_uint8 rules_stos[] =
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
static const rules_type_uint8 rules_r1[] =
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
static const rules_type_uint8 rules_r2[] =
{
       0,     2,     2,     0,     0,     6,     2,     0,     3,     3,
       0,     0,     4,     2,     2,     3,     3,     2,     3,     2,
       2,     2,     5,     3,     2,     3,     2,     3,     1,     3,
       3,     2,     2,     8,     6,     3,     3,     1,     1,     3,
       3,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       1,     3,     3,     1,     3,     1,     1,     1,     1,     0,
       3,     0,     1,     1,     1,     1
};


#define rules_errok         (rules_errstatus = 0)
#define rules_clearin       (rules_char = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto rules_acceptlab
#define YYABORT         goto rules_abortlab
#define YYERROR         goto rules_errorlab


#define YYRECOVERING()  (!!rules_errstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (rules_char == YYEMPTY)                                        \
    {                                                           \
      rules_char = (Token);                                         \
      rules_lval = (Value);                                         \
      YYPOPSTACK (rules_len);                                       \
      rules_state = *rules_ssp;                                         \
      goto rules_backup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      rules_error (YY_("syntax error: cannot back up")); \
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
  if (rules_debug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (rules_debug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      rules__symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
rules__symbol_value_print (FILE *rules_output, int rules_type, YYSTYPE const * const rules_valuep)
{
  FILE *rules_o = rules_output;
  YYUSE (rules_o);
  if (!rules_valuep)
    return;
# ifdef YYPRINT
  if (rules_type < YYNTOKENS)
    YYPRINT (rules_output, rules_toknum[rules_type], *rules_valuep);
# endif
  YYUSE (rules_type);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
rules__symbol_print (FILE *rules_output, int rules_type, YYSTYPE const * const rules_valuep)
{
  YYFPRINTF (rules_output, "%s %s (",
             rules_type < YYNTOKENS ? "token" : "nterm", rules_tname[rules_type]);

  rules__symbol_value_print (rules_output, rules_type, rules_valuep);
  YYFPRINTF (rules_output, ")");
}

/*------------------------------------------------------------------.
| rules__stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
rules__stack_print (rules_type_int16 *rules_bottom, rules_type_int16 *rules_top)
{
  YYFPRINTF (stderr, "Stack now");
  for (; rules_bottom <= rules_top; rules_bottom++)
    {
      int rules_bot = *rules_bottom;
      YYFPRINTF (stderr, " %d", rules_bot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (rules_debug)                                                  \
    rules__stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
rules__reduce_print (rules_type_int16 *rules_ssp, YYSTYPE *rules_vsp, int rules_rule)
{
  unsigned long int rules_lno = rules_rline[rules_rule];
  int rules_nrhs = rules_r2[rules_rule];
  int rules_i;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             rules_rule - 1, rules_lno);
  /* The symbols being reduced.  */
  for (rules_i = 0; rules_i < rules_nrhs; rules_i++)
    {
      YYFPRINTF (stderr, "   $%d = ", rules_i + 1);
      rules__symbol_print (stderr,
                       rules_stos[rules_ssp[rules_i + 1 - rules_nrhs]],
                       &(rules_vsp[(rules_i + 1) - (rules_nrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (rules_debug)                          \
    rules__reduce_print (rules_ssp, rules_vsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int rules_debug;
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

# ifndef rules_strlen
#  if defined __GLIBC__ && defined _STRING_H
#   define rules_strlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
rules_strlen (const char *rules_str)
{
  YYSIZE_T rules_len;
  for (rules_len = 0; rules_str[rules_len]; rules_len++)
    continue;
  return rules_len;
}
#  endif
# endif

# ifndef rules_stpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define rules_stpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
rules_stpcpy (char *rules_dest, const char *rules_src)
{
  char *rules_d = rules_dest;
  const char *rules_s = rules_src;

  while ((*rules_d++ = *rules_s++) != '\0')
    continue;

  return rules_d - 1;
}
#  endif
# endif

# ifndef rules_tnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for rules_error.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from rules_tname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
rules_tnamerr (char *rules_res, const char *rules_str)
{
  if (*rules_str == '"')
    {
      YYSIZE_T rules_n = 0;
      char const *rules_p = rules_str;

      for (;;)
        switch (*++rules_p)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++rules_p != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (rules_res)
              rules_res[rules_n] = *rules_p;
            rules_n++;
            break;

          case '"':
            if (rules_res)
              rules_res[rules_n] = '\0';
            return rules_n;
          }
    do_not_strip_quotes: ;
    }

  if (! rules_res)
    return rules_strlen (rules_str);

  return rules_stpcpy (rules_res, rules_str) - rules_res;
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
rules_syntax_error (YYSIZE_T *rules_msg_alloc, char **rules_msg,
                rules_type_int16 *rules_ssp, int rules_token)
{
  YYSIZE_T rules_size0 = rules_tnamerr (YY_NULLPTR, rules_tname[rules_token]);
  YYSIZE_T rules_size = rules_size0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *rules_format = YY_NULLPTR;
  /* Arguments of rules_format. */
  char const *rules_arg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int rules_count = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in rules_char) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated rules_char.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (rules_token != YYEMPTY)
    {
      int rules_n = rules_pact[*rules_ssp];
      rules_arg[rules_count++] = rules_tname[rules_token];
      if (!rules_pact_value_is_default (rules_n))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int rules_xbegin = rules_n < 0 ? -rules_n : 0;
          /* Stay within bounds of both rules_check and rules_tname.  */
          int rules_checklim = YYLAST - rules_n + 1;
          int rules_xend = rules_checklim < YYNTOKENS ? rules_checklim : YYNTOKENS;
          int rules_x;

          for (rules_x = rules_xbegin; rules_x < rules_xend; ++rules_x)
            if (rules_check[rules_x + rules_n] == rules_x && rules_x != YYTERROR
                && !rules_table_value_is_error (rules_table[rules_x + rules_n]))
              {
                if (rules_count == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    rules_count = 1;
                    rules_size = rules_size0;
                    break;
                  }
                rules_arg[rules_count++] = rules_tname[rules_x];
                {
                  YYSIZE_T rules_size1 = rules_size + rules_tnamerr (YY_NULLPTR, rules_tname[rules_x]);
                  if (! (rules_size <= rules_size1
                         && rules_size1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  rules_size = rules_size1;
                }
              }
        }
    }

  switch (rules_count)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        rules_format = S;                       \
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
    YYSIZE_T rules_size1 = rules_size + rules_strlen (rules_format);
    if (! (rules_size <= rules_size1 && rules_size1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    rules_size = rules_size1;
  }

  if (*rules_msg_alloc < rules_size)
    {
      *rules_msg_alloc = 2 * rules_size;
      if (! (rules_size <= *rules_msg_alloc
             && *rules_msg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *rules_msg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *rules_p = *rules_msg;
    int rules_i = 0;
    while ((*rules_p = *rules_format) != '\0')
      if (*rules_p == '%' && rules_format[1] == 's' && rules_i < rules_count)
        {
          rules_p += rules_tnamerr (rules_p, rules_arg[rules_i++]);
          rules_format += 2;
        }
      else
        {
          rules_p++;
          rules_format++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
rules_destruct (const char *rules_msg, int rules_type, YYSTYPE *rules_valuep)
{
  YYUSE (rules_valuep);
  if (!rules_msg)
    rules_msg = "Deleting";
  YY_SYMBOL_PRINT (rules_msg, rules_type, rules_valuep, rules_locationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (rules_type);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int rules_char;

/* The semantic value of the lookahead symbol.  */
YYSTYPE rules_lval;
/* Number of syntax errors so far.  */
int rules_nerrs;


/*----------.
| rules_parse.  |
`----------*/

int
rules_parse (void)
{
    int rules_state;
    /* Number of tokens to shift before error messages enabled.  */
    int rules_errstatus;

    /* The stacks and their tools:
       'rules_ss': related to states.
       'rules_vs': related to semantic values.

       Refer to the stacks through separate pointers, to allow rules_overflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    rules_type_int16 rules_ssa[YYINITDEPTH];
    rules_type_int16 *rules_ss;
    rules_type_int16 *rules_ssp;

    /* The semantic value stack.  */
    YYSTYPE rules_vsa[YYINITDEPTH];
    YYSTYPE *rules_vs;
    YYSTYPE *rules_vsp;

    YYSIZE_T rules_stacksize;

  int rules_n;
  int rules_result;
  /* Lookahead token as an internal (translated) token number.  */
  int rules_token = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE rules_val;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char rules_msgbuf[128];
  char *rules_msg = rules_msgbuf;
  YYSIZE_T rules_msg_alloc = sizeof rules_msgbuf;
#endif

#define YYPOPSTACK(N)   (rules_vsp -= (N), rules_ssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int rules_len = 0;

  rules_ssp = rules_ss = rules_ssa;
  rules_vsp = rules_vs = rules_vsa;
  rules_stacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  rules_state = 0;
  rules_errstatus = 0;
  rules_nerrs = 0;
  rules_char = YYEMPTY; /* Cause a token to be read.  */
  goto rules_setstate;

/*------------------------------------------------------------.
| rules_newstate -- Push a new state, which is found in rules_state.  |
`------------------------------------------------------------*/
 rules_newstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  rules_ssp++;

 rules_setstate:
  *rules_ssp = rules_state;

  if (rules_ss + rules_stacksize - 1 <= rules_ssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T rules_size = rules_ssp - rules_ss + 1;

#ifdef rules_overflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *rules_vs1 = rules_vs;
        rules_type_int16 *rules_ss1 = rules_ss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if rules_overflow is a macro.  */
        rules_overflow (YY_("memory exhausted"),
                    &rules_ss1, rules_size * sizeof (*rules_ssp),
                    &rules_vs1, rules_size * sizeof (*rules_vsp),
                    &rules_stacksize);

        rules_ss = rules_ss1;
        rules_vs = rules_vs1;
      }
#else /* no rules_overflow */
# ifndef YYSTACK_RELOCATE
      goto rules_exhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= rules_stacksize)
        goto rules_exhaustedlab;
      rules_stacksize *= 2;
      if (YYMAXDEPTH < rules_stacksize)
        rules_stacksize = YYMAXDEPTH;

      {
        rules_type_int16 *rules_ss1 = rules_ss;
        union rules_alloc *rules_ptr =
          (union rules_alloc *) YYSTACK_ALLOC (YYSTACK_BYTES (rules_stacksize));
        if (! rules_ptr)
          goto rules_exhaustedlab;
        YYSTACK_RELOCATE (rules_ss_alloc, rules_ss);
        YYSTACK_RELOCATE (rules_vs_alloc, rules_vs);
#  undef YYSTACK_RELOCATE
        if (rules_ss1 != rules_ssa)
          YYSTACK_FREE (rules_ss1);
      }
# endif
#endif /* no rules_overflow */

      rules_ssp = rules_ss + rules_size - 1;
      rules_vsp = rules_vs + rules_size - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) rules_stacksize));

      if (rules_ss + rules_stacksize - 1 <= rules_ssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", rules_state));

  if (rules_state == YYFINAL)
    YYACCEPT;

  goto rules_backup;

/*-----------.
| rules_backup.  |
`-----------*/
rules_backup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  rules_n = rules_pact[rules_state];
  if (rules_pact_value_is_default (rules_n))
    goto rules_default;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (rules_char == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      rules_char = rules_lex ();
    }

  if (rules_char <= YYEOF)
    {
      rules_char = rules_token = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      rules_token = YYTRANSLATE (rules_char);
      YY_SYMBOL_PRINT ("Next token is", rules_token, &rules_lval, &rules_lloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  rules_n += rules_token;
  if (rules_n < 0 || YYLAST < rules_n || rules_check[rules_n] != rules_token)
    goto rules_default;
  rules_n = rules_table[rules_n];
  if (rules_n <= 0)
    {
      if (rules_table_value_is_error (rules_n))
        goto rules_errlab;
      rules_n = -rules_n;
      goto rules_reduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (rules_errstatus)
    rules_errstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", rules_token, &rules_lval, &rules_lloc);

  /* Discard the shifted token.  */
  rules_char = YYEMPTY;

  rules_state = rules_n;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++rules_vsp = rules_lval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto rules_newstate;


/*-----------------------------------------------------------.
| rules_default -- do the default action for the current state.  |
`-----------------------------------------------------------*/
rules_default:
  rules_n = rules_defact[rules_state];
  if (rules_n == 0)
    goto rules_errlab;
  goto rules_reduce;


/*-----------------------------.
| rules_reduce -- Do a reduction.  |
`-----------------------------*/
rules_reduce:
  /* rules_n is the number of a rule to reduce with.  */
  rules_len = rules_r2[rules_n];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  rules_val = rules_vsp[1-rules_len];


  YY_REDUCE_PRINT (rules_n);
  switch (rules_n)
    {
        case 2:
#line 97 "rule-parse.y" /* yacc.c:1646  */
    { rule_matcher->AddRule((rules_vsp[0].rule)); }
#line 1360 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 4:
#line 103 "rule-parse.y" /* yacc.c:1646  */
    {
			Location l(current_rule_file, rules_line_number+1, 0, 0, 0);
			current_rule = new Rule(rules_lval.str, l);
			}
#line 1369 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 5:
#line 108 "rule-parse.y" /* yacc.c:1646  */
    { (rules_val.rule) = current_rule; }
#line 1375 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 8:
#line 118 "rule-parse.y" /* yacc.c:1646  */
    {
			current_rule->AddHdrTest(new RuleHdrTest(
				RuleHdrTest::IPDst,
				(RuleHdrTest::Comp) (rules_vsp[-1].val), *((rules_vsp[0].prefix_val_list))));
			}
#line 1385 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 9:
#line 125 "rule-parse.y" /* yacc.c:1646  */
    { // Works for both TCP and UDP
			current_rule->AddHdrTest(new RuleHdrTest(
				RuleHdrTest::TCP, 2, 2,
				(RuleHdrTest::Comp) (rules_vsp[-1].val), (rules_vsp[0].vallist)));
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
			current_rule->AddCondition(new RuleConditionEval((rules_vsp[-1].str)));
			}
#line 1415 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 13:
#line 137 "rule-parse.y" /* yacc.c:1646  */
    { current_rule->AddHdrTest((rules_vsp[0].hdr_test)); }
#line 1421 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 14:
#line 140 "rule-parse.y" /* yacc.c:1646  */
    {
			current_rule->AddCondition(
				new RuleConditionIPOptions((rules_vsp[0].val)));
			}
#line 1430 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 15:
#line 146 "rule-parse.y" /* yacc.c:1646  */
    {
			int proto = 0;
			switch ( (rules_vsp[0].prot) ) {
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
					(RuleHdrTest::Comp) (rules_vsp[-1].val), vallist));
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
				(RuleHdrTest::Comp) (rules_vsp[-1].val), (rules_vsp[0].vallist)));
			}
#line 1478 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 17:
#line 188 "rule-parse.y" /* yacc.c:1646  */
    { current_rule->AddAction(new RuleActionEvent((rules_vsp[0].str))); }
#line 1484 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 18:
#line 191 "rule-parse.y" /* yacc.c:1646  */
    { current_rule->AddAction(new RuleActionMIME((rules_vsp[-1].str), (rules_vsp[0].val))); }
#line 1490 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 19:
#line 194 "rule-parse.y" /* yacc.c:1646  */
    { current_rule->AddAction(new RuleActionEnable((rules_vsp[0].str))); }
#line 1496 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 20:
#line 197 "rule-parse.y" /* yacc.c:1646  */
    { current_rule->AddAction(new RuleActionDisable((rules_vsp[0].str))); }
#line 1502 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 21:
#line 200 "rule-parse.y" /* yacc.c:1646  */
    { current_rule->AddPattern((rules_vsp[0].str), (rules_vsp[-1].ptype)); }
#line 1508 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 22:
#line 203 "rule-parse.y" /* yacc.c:1646  */
    {
			if ( (rules_vsp[-2].range).offset > 0 )
				reporter->Warning("Offsets are currently ignored for patterns");
			current_rule->AddPattern((rules_vsp[0].str), (rules_vsp[-4].ptype), 0, (rules_vsp[-2].range).len);
			}
#line 1518 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 23:
#line 210 "rule-parse.y" /* yacc.c:1646  */
    {
			current_rule->AddCondition(
				new RuleConditionPayloadSize((rules_vsp[0].val), (RuleConditionPayloadSize::Comp) ((rules_vsp[-1].val))));
			}
#line 1527 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 24:
#line 216 "rule-parse.y" /* yacc.c:1646  */
    { current_rule->AddRequires((rules_vsp[0].str), 0, 0); }
#line 1533 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 25:
#line 219 "rule-parse.y" /* yacc.c:1646  */
    { current_rule->AddRequires((rules_vsp[0].str), 0, 1); }
#line 1539 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 26:
#line 222 "rule-parse.y" /* yacc.c:1646  */
    { current_rule->AddRequires((rules_vsp[0].str), 1, 0); }
#line 1545 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 27:
#line 225 "rule-parse.y" /* yacc.c:1646  */
    { current_rule->AddRequires((rules_vsp[0].str), 1, 1); }
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
				(RuleHdrTest::Comp) (rules_vsp[-1].val), *((rules_vsp[0].prefix_val_list))));
			}
#line 1567 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 30:
#line 238 "rule-parse.y" /* yacc.c:1646  */
    { // Works for both TCP and UDP
			current_rule->AddHdrTest(new RuleHdrTest(
				RuleHdrTest::TCP, 0, 2,
				(RuleHdrTest::Comp) (rules_vsp[-1].val), (rules_vsp[0].vallist)));
			}
#line 1577 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 31:
#line 245 "rule-parse.y" /* yacc.c:1646  */
    {
			current_rule->AddCondition(new RuleConditionTCPState((rules_vsp[0].val)));
			}
#line 1585 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 32:
#line 250 "rule-parse.y" /* yacc.c:1646  */
    { current_rule->SetActiveStatus((rules_vsp[0].bl)); }
#line 1591 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 33:
#line 255 "rule-parse.y" /* yacc.c:1646  */
    {
			maskedvalue_list* vallist = new maskedvalue_list;
			MaskedValue* val = new MaskedValue();

			val->val = (rules_vsp[0].mval).val;
			val->mask = (rules_vsp[-2].val);
			vallist->append(val);

			(rules_val.hdr_test) = new RuleHdrTest((rules_vsp[-7].prot), (rules_vsp[-5].range).offset, (rules_vsp[-5].range).len,
					(RuleHdrTest::Comp) (rules_vsp[-1].val), vallist);
			}
#line 1607 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 34:
#line 268 "rule-parse.y" /* yacc.c:1646  */
    {
			(rules_val.hdr_test) = new RuleHdrTest((rules_vsp[-5].prot), (rules_vsp[-3].range).offset, (rules_vsp[-3].range).len,
						(RuleHdrTest::Comp) (rules_vsp[-1].val), (rules_vsp[0].vallist));
			}
#line 1616 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 35:
#line 276 "rule-parse.y" /* yacc.c:1646  */
    { (rules_vsp[-2].vallist)->append(new MaskedValue((rules_vsp[0].mval))); (rules_val.vallist) = (rules_vsp[-2].vallist); }
#line 1622 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 36:
#line 278 "rule-parse.y" /* yacc.c:1646  */
    { id_to_maskedvallist((rules_vsp[0].str), (rules_vsp[-2].vallist)); (rules_val.vallist) = (rules_vsp[-2].vallist); }
#line 1628 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 37:
#line 280 "rule-parse.y" /* yacc.c:1646  */
    {
			(rules_val.vallist) = new maskedvalue_list();
			(rules_val.vallist)->append(new MaskedValue((rules_vsp[0].mval)));
			}
#line 1637 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 38:
#line 285 "rule-parse.y" /* yacc.c:1646  */
    {
			(rules_val.vallist) = new maskedvalue_list();
			id_to_maskedvallist((rules_vsp[0].str), (rules_val.vallist));
			}
#line 1646 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 39:
#line 293 "rule-parse.y" /* yacc.c:1646  */
    {
			(rules_val.prefix_val_list) = (rules_vsp[-2].prefix_val_list);
			(rules_val.prefix_val_list)->push_back(*((rules_vsp[0].prefixval)));
			}
#line 1655 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 40:
#line 298 "rule-parse.y" /* yacc.c:1646  */
    {
			(rules_val.prefix_val_list) = (rules_vsp[-2].prefix_val_list);
			id_to_maskedvallist((rules_vsp[0].str), 0, (rules_vsp[-2].prefix_val_list));
			}
#line 1664 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 41:
#line 303 "rule-parse.y" /* yacc.c:1646  */
    {
			(rules_val.prefix_val_list) = new vector<IPPrefix>();
			(rules_val.prefix_val_list)->push_back(*((rules_vsp[0].prefixval)));
			}
#line 1673 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 42:
#line 308 "rule-parse.y" /* yacc.c:1646  */
    {
			(rules_val.prefix_val_list) = new vector<IPPrefix>();
			id_to_maskedvallist((rules_vsp[0].str), 0, (rules_val.prefix_val_list));
			}
#line 1682 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 43:
#line 316 "rule-parse.y" /* yacc.c:1646  */
    {
			(rules_val.prefixval) = new IPPrefix(IPAddr(IPv4, &((rules_vsp[0].mval).val), IPAddr::Host),
			                  mask_to_len((rules_vsp[0].mval).mask));
			}
#line 1691 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 45:
#line 325 "rule-parse.y" /* yacc.c:1646  */
    { (rules_val.mval).val = (rules_vsp[0].val); (rules_val.mval).mask = 0xffffffff; }
#line 1697 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 47:
#line 331 "rule-parse.y" /* yacc.c:1646  */
    { (rules_val.range) = (rules_vsp[0].range); }
#line 1703 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 48:
#line 333 "rule-parse.y" /* yacc.c:1646  */
    { (rules_val.range).offset = 0; (rules_val.range).len = (rules_vsp[0].val); }
#line 1709 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 49:
#line 335 "rule-parse.y" /* yacc.c:1646  */
    { (rules_val.range).offset = (rules_vsp[-1].val); (rules_val.range).len = UINT_MAX; }
#line 1715 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 50:
#line 340 "rule-parse.y" /* yacc.c:1646  */
    { (rules_val.range).offset = (rules_vsp[0].val); (rules_val.range).len = 1; }
#line 1721 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 51:
#line 342 "rule-parse.y" /* yacc.c:1646  */
    { (rules_val.range).offset = (rules_vsp[-2].val); (rules_val.range).len = (rules_vsp[0].val); }
#line 1727 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 52:
#line 347 "rule-parse.y" /* yacc.c:1646  */
    { (rules_val.val) = (rules_vsp[-2].val) | (rules_vsp[0].val); }
#line 1733 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 53:
#line 349 "rule-parse.y" /* yacc.c:1646  */
    { (rules_val.val) = (rules_vsp[0].val); }
#line 1739 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 54:
#line 354 "rule-parse.y" /* yacc.c:1646  */
    { (rules_val.val) = (rules_vsp[-2].val) | (rules_vsp[0].val); }
#line 1745 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 55:
#line 356 "rule-parse.y" /* yacc.c:1646  */
    { (rules_val.val) = (rules_vsp[0].val); }
#line 1751 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 56:
#line 361 "rule-parse.y" /* yacc.c:1646  */
    { (rules_val.val) = (rules_vsp[0].val); }
#line 1757 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 57:
#line 363 "rule-parse.y" /* yacc.c:1646  */
    { (rules_val.val) = id_to_uint((rules_vsp[0].str)); }
#line 1763 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 58:
#line 368 "rule-parse.y" /* yacc.c:1646  */
    { (rules_val.bl) = true; }
#line 1769 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 59:
#line 370 "rule-parse.y" /* yacc.c:1646  */
    { (rules_val.bl) = false; }
#line 1775 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 60:
#line 375 "rule-parse.y" /* yacc.c:1646  */
    { (rules_val.val) = (rules_vsp[-1].bl) ? -(rules_vsp[0].val) : (rules_vsp[0].val); }
#line 1781 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 61:
#line 377 "rule-parse.y" /* yacc.c:1646  */
    { (rules_val.val) = 0; }
#line 1787 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 62:
#line 382 "rule-parse.y" /* yacc.c:1646  */
    { (rules_val.str) = (rules_vsp[0].str); }
#line 1793 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 63:
#line 384 "rule-parse.y" /* yacc.c:1646  */
    { (rules_val.str) = id_to_str((rules_vsp[0].str)); }
#line 1799 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 64:
#line 389 "rule-parse.y" /* yacc.c:1646  */
    { (rules_val.str) = (rules_vsp[0].str); }
#line 1805 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;

  case 65:
#line 391 "rule-parse.y" /* yacc.c:1646  */
    { (rules_val.str) = id_to_str((rules_vsp[0].str)); }
#line 1811 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
    break;


#line 1815 "/home/benjamin/Bro/bro-2.3.1/build/src/rup.cc" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter rules_char, and that requires
     that rules_token be updated with the new translation.  We take the
     approach of translating immediately before every use of rules_token.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering rules_char or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", rules_r1[rules_n], &rules_val, &rules_loc);

  YYPOPSTACK (rules_len);
  rules_len = 0;
  YY_STACK_PRINT (rules_ss, rules_ssp);

  *++rules_vsp = rules_val;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  rules_n = rules_r1[rules_n];

  rules_state = rules_pgoto[rules_n - YYNTOKENS] + *rules_ssp;
  if (0 <= rules_state && rules_state <= YYLAST && rules_check[rules_state] == *rules_ssp)
    rules_state = rules_table[rules_state];
  else
    rules_state = rules_defgoto[rules_n - YYNTOKENS];

  goto rules_newstate;


/*--------------------------------------.
| rules_errlab -- here on detecting error.  |
`--------------------------------------*/
rules_errlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  rules_token = rules_char == YYEMPTY ? YYEMPTY : YYTRANSLATE (rules_char);

  /* If not already recovering from an error, report this error.  */
  if (!rules_errstatus)
    {
      ++rules_nerrs;
#if ! YYERROR_VERBOSE
      rules_error (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR rules_syntax_error (&rules_msg_alloc, &rules_msg, \
                                        rules_ssp, rules_token)
      {
        char const *rules_msgp = YY_("syntax error");
        int rules_syntax_error_status;
        rules_syntax_error_status = YYSYNTAX_ERROR;
        if (rules_syntax_error_status == 0)
          rules_msgp = rules_msg;
        else if (rules_syntax_error_status == 1)
          {
            if (rules_msg != rules_msgbuf)
              YYSTACK_FREE (rules_msg);
            rules_msg = (char *) YYSTACK_ALLOC (rules_msg_alloc);
            if (!rules_msg)
              {
                rules_msg = rules_msgbuf;
                rules_msg_alloc = sizeof rules_msgbuf;
                rules_syntax_error_status = 2;
              }
            else
              {
                rules_syntax_error_status = YYSYNTAX_ERROR;
                rules_msgp = rules_msg;
              }
          }
        rules_error (rules_msgp);
        if (rules_syntax_error_status == 2)
          goto rules_exhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (rules_errstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (rules_char <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (rules_char == YYEOF)
            YYABORT;
        }
      else
        {
          rules_destruct ("Error: discarding",
                      rules_token, &rules_lval);
          rules_char = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto rules_errlab1;


/*---------------------------------------------------.
| rules_errorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
rules_errorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label rules_errorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto rules_errorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (rules_len);
  rules_len = 0;
  YY_STACK_PRINT (rules_ss, rules_ssp);
  rules_state = *rules_ssp;
  goto rules_errlab1;


/*-------------------------------------------------------------.
| rules_errlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
rules_errlab1:
  rules_errstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      rules_n = rules_pact[rules_state];
      if (!rules_pact_value_is_default (rules_n))
        {
          rules_n += YYTERROR;
          if (0 <= rules_n && rules_n <= YYLAST && rules_check[rules_n] == YYTERROR)
            {
              rules_n = rules_table[rules_n];
              if (0 < rules_n)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (rules_ssp == rules_ss)
        YYABORT;


      rules_destruct ("Error: popping",
                  rules_stos[rules_state], rules_vsp);
      YYPOPSTACK (1);
      rules_state = *rules_ssp;
      YY_STACK_PRINT (rules_ss, rules_ssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++rules_vsp = rules_lval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", rules_stos[rules_n], rules_vsp, rules_lsp);

  rules_state = rules_n;
  goto rules_newstate;


/*-------------------------------------.
| rules_acceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
rules_acceptlab:
  rules_result = 0;
  goto rules_return;

/*-----------------------------------.
| rules_abortlab -- YYABORT comes here.  |
`-----------------------------------*/
rules_abortlab:
  rules_result = 1;
  goto rules_return;

#if !defined rules_overflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| rules_exhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
rules_exhaustedlab:
  rules_error (YY_("memory exhausted"));
  rules_result = 2;
  /* Fall through.  */
#endif

rules_return:
  if (rules_char != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      rules_token = YYTRANSLATE (rules_char);
      rules_destruct ("Cleanup: discarding lookahead",
                  rules_token, &rules_lval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (rules_len);
  YY_STACK_PRINT (rules_ss, rules_ssp);
  while (rules_ssp != rules_ss)
    {
      rules_destruct ("Cleanup: popping",
                  rules_stos[*rules_ssp], rules_vsp);
      YYPOPSTACK (1);
    }
#ifndef rules_overflow
  if (rules_ss != rules_ssa)
    YYSTACK_FREE (rules_ss);
#endif
#if YYERROR_VERBOSE
  if (rules_msg != rules_msgbuf)
    YYSTACK_FREE (rules_msg);
#endif
  return rules_result;
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
