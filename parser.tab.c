/* A Bison parser, made by GNU Bison 2.4.2.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2006, 2009-2010 Free Software
   Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "parser.y"

#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <vector>
std::map<std::string, int> variables;
std::map<std::string, float> float_variables;
std::stringstream syntaxBuffer;
std::vector<std::string> errorMessages;
int yylex();
void yyerror(const char *s);
extern FILE *yyin;
extern int yylineno;
void yy_scan_string(const char *);


/* Line 189 of yacc.c  */
#line 90 "parser.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     INT = 258,
     MAIN = 259,
     LEFT_BRACE = 260,
     RIGHT_BRACE = 261,
     SEMICOLON = 262,
     RETURN = 263,
     COUT = 264,
     CIN = 265,
     OUTPUT = 266,
     INPUT = 267,
     LEFT_PAREN = 268,
     RIGHT_PAREN = 269,
     IF = 270,
     ELSE = 271,
     ASSIGN = 272,
     COMMA = 273,
     GREATER_THAN = 274,
     LESS_THAN = 275,
     GREATER_EQUAL = 276,
     LESS_EQUAL = 277,
     EQUAL = 278,
     INCLUDE_DIRECTIVE = 279,
     FLOAT = 280,
     WHILE = 281,
     IDENTIFIER = 282,
     STRING = 283,
     NUMBER = 284,
     MINUS = 285,
     PLUS = 286,
     DIVIDE = 287,
     MULTIPLY = 288
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 18 "parser.y"

    int intValue;
    char* strValue;
    float floatValue;



/* Line 214 of yacc.c  */
#line 167 "parser.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 179 "parser.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   143

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  34
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  16
/* YYNRULES -- Number of rules.  */
#define YYNRULES  47
/* YYNRULES -- Number of states.  */
#define YYNSTATES  104

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   288

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32,    33
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,    12,    13,    16,    17,    20,    23,    26,
      29,    33,    36,    39,    47,    59,    67,    71,    75,    79,
      83,    87,    90,    93,    95,    99,   103,   109,   111,   115,
     119,   125,   129,   131,   135,   139,   141,   143,   146,   149,
     153,   155,   157,   159,   163,   167,   171,   175
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      35,     0,    -1,    36,     3,     4,    13,    14,     5,    37,
       6,    -1,    -1,    36,    24,    -1,    -1,    37,    38,    -1,
      49,     7,    -1,    44,     7,    -1,    47,     7,    -1,     8,
      49,     7,    -1,    40,     7,    -1,    43,     7,    -1,    15,
      13,    39,    14,     5,    37,     6,    -1,    15,    13,    39,
      14,     5,    37,     6,    16,     5,    37,     6,    -1,    26,
      13,    39,    14,     5,    37,     6,    -1,    49,    19,    49,
      -1,    49,    20,    49,    -1,    49,    21,    49,    -1,    49,
      22,    49,    -1,    49,    23,    49,    -1,     3,    41,    -1,
      25,    42,    -1,    27,    -1,    27,    17,    49,    -1,    41,
      18,    27,    -1,    41,    18,    27,    17,    49,    -1,    27,
      -1,    27,    17,    25,    -1,    42,    18,    27,    -1,    42,
      18,    27,    17,    25,    -1,    27,    17,    49,    -1,    45,
      -1,     9,    11,    46,    -1,    45,    11,    46,    -1,    28,
      -1,    49,    -1,    10,    48,    -1,    12,    27,    -1,    48,
      12,    27,    -1,    29,    -1,    27,    -1,    25,    -1,    49,
      31,    49,    -1,    49,    30,    49,    -1,    49,    33,    49,
      -1,    49,    32,    49,    -1,    13,    49,    14,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    41,    41,    48,    49,    55,    57,    61,    65,    69,
      73,    77,    81,    85,    91,    99,   107,   111,   115,   119,
     123,   130,   134,   140,   145,   150,   155,   163,   168,   173,
     178,   188,   204,   208,   212,   219,   223,   231,   235,   242,
     252,   256,   269,   273,   278,   283,   288,   298
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "MAIN", "LEFT_BRACE",
  "RIGHT_BRACE", "SEMICOLON", "RETURN", "COUT", "CIN", "OUTPUT", "INPUT",
  "LEFT_PAREN", "RIGHT_PAREN", "IF", "ELSE", "ASSIGN", "COMMA",
  "GREATER_THAN", "LESS_THAN", "GREATER_EQUAL", "LESS_EQUAL", "EQUAL",
  "INCLUDE_DIRECTIVE", "FLOAT", "WHILE", "IDENTIFIER", "STRING", "NUMBER",
  "MINUS", "PLUS", "DIVIDE", "MULTIPLY", "$accept", "program", "includes",
  "statements", "statement", "condition", "declaration",
  "declaration_list_int", "declaration_list_float", "assignment",
  "cout_statement", "cout_target_list", "cout_content", "cin_statement",
  "cin_target_list", "expression", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    34,    35,    36,    36,    37,    37,    38,    38,    38,
      38,    38,    38,    38,    38,    38,    39,    39,    39,    39,
      39,    40,    40,    41,    41,    41,    41,    42,    42,    42,
      42,    43,    44,    45,    45,    46,    46,    47,    48,    48,
      49,    49,    49,    49,    49,    49,    49,    49
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     8,     0,     2,     0,     2,     2,     2,     2,
       3,     2,     2,     7,    11,     7,     3,     3,     3,     3,
       3,     2,     2,     1,     3,     3,     5,     1,     3,     3,
       5,     3,     1,     3,     3,     1,     1,     2,     2,     3,
       1,     1,     1,     3,     3,     3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,     1,     0,     4,     0,     0,     0,     5,
       0,     0,     2,     0,     0,     0,     0,     0,    42,     0,
      41,    40,     6,     0,     0,     0,    32,     0,     0,    23,
      21,    42,    41,     0,     0,     0,    37,     0,     0,    27,
      22,     0,     0,    11,    12,     8,     0,     9,     7,     0,
       0,     0,     0,     0,     0,    10,    35,    33,    36,    38,
       0,    47,     0,     0,     0,     0,     0,    31,    34,    44,
      43,    46,    45,    24,    25,    39,     0,     0,     0,     0,
       0,     0,    28,    29,     0,     0,     5,    16,    17,    18,
      19,    20,     0,     5,    26,     0,    30,     0,    13,    15,
       0,     5,     0,    14
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,     2,    10,    22,    62,    23,    30,    40,    24,
      25,    26,    57,    27,    36,    28
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -85
static const yytype_int16 yypact[] =
{
     -85,    10,    -2,   -85,     8,   -85,     3,    13,    21,   -85,
       5,    14,   -85,    82,    24,    36,    82,    38,    22,    42,
      39,   -85,   -85,    56,    68,    69,    67,    76,    12,    74,
      75,   -85,   -85,    83,    33,    72,    90,    87,    82,    86,
      92,    82,    82,   -85,   -85,   -85,    33,   -85,   -85,    82,
      82,    82,    82,    82,    85,   -85,   -85,   -85,   -26,   -85,
      99,   -85,   113,   102,   103,   104,   115,   -26,   -85,    -9,
      -9,   -85,   -85,   -26,   119,   -85,   125,    82,    82,    82,
      82,    82,   -85,   120,   133,    82,   -85,   -26,   -26,   -26,
     -26,   -26,   114,   -85,   -26,    44,   -85,    71,   124,   -85,
     136,   -85,    79,   -85
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -85,   -85,   -85,   -84,   -85,   101,   -85,   -85,   -85,   -85,
     -85,   -85,    97,   -85,   -85,   -13
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      33,     4,    95,    37,    49,    50,    51,    52,    11,    97,
       3,    12,     6,    13,    14,    15,     7,   102,    16,    48,
      17,    58,     5,    51,    52,    63,     9,     8,    63,    67,
      18,    19,    20,    58,    21,    34,    69,    70,    71,    72,
      73,    29,    49,    50,    51,    52,    16,    11,    35,    39,
      98,    38,    13,    14,    15,    41,    42,    16,    31,    17,
      32,    56,    21,    43,    87,    88,    89,    90,    91,    18,
      19,    20,    94,    21,    11,    44,    45,    99,    46,    13,
      14,    15,    11,    47,    16,   103,    17,    13,    14,    15,
      55,    53,    16,    54,    17,    16,    18,    19,    20,    59,
      21,    61,    60,    64,    18,    19,    20,    31,    21,    32,
      65,    21,    74,    49,    50,    51,    52,    49,    50,    51,
      52,    77,    78,    79,    80,    81,    75,    76,    82,    84,
      86,    83,    49,    50,    51,    52,    85,    92,    93,    96,
     100,   101,    66,    68
};

static const yytype_uint8 yycheck[] =
{
      13,     3,    86,    16,    30,    31,    32,    33,     3,    93,
       0,     6,     4,     8,     9,    10,    13,   101,    13,     7,
      15,    34,    24,    32,    33,    38,     5,    14,    41,    42,
      25,    26,    27,    46,    29,    11,    49,    50,    51,    52,
      53,    27,    30,    31,    32,    33,    13,     3,    12,    27,
       6,    13,     8,     9,    10,    13,    17,    13,    25,    15,
      27,    28,    29,     7,    77,    78,    79,    80,    81,    25,
      26,    27,    85,    29,     3,     7,     7,     6,    11,     8,
       9,    10,     3,     7,    13,     6,    15,     8,     9,    10,
       7,    17,    13,    18,    15,    13,    25,    26,    27,    27,
      29,    14,    12,    17,    25,    26,    27,    25,    29,    27,
      18,    29,    27,    30,    31,    32,    33,    30,    31,    32,
      33,    19,    20,    21,    22,    23,    27,    14,    25,    14,
       5,    27,    30,    31,    32,    33,    17,    17,     5,    25,
      16,     5,    41,    46
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    35,    36,     0,     3,    24,     4,    13,    14,     5,
      37,     3,     6,     8,     9,    10,    13,    15,    25,    26,
      27,    29,    38,    40,    43,    44,    45,    47,    49,    27,
      41,    25,    27,    49,    11,    12,    48,    49,    13,    27,
      42,    13,    17,     7,     7,     7,    11,     7,     7,    30,
      31,    32,    33,    17,    18,     7,    28,    46,    49,    27,
      12,    14,    39,    49,    17,    18,    39,    49,    46,    49,
      49,    49,    49,    49,    27,    27,    14,    19,    20,    21,
      22,    23,    25,    27,    14,    17,     5,    49,    49,    49,
      49,    49,    17,     5,    49,    37,    25,    37,     6,     6,
      16,     5,    37,     6
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yyvsp = yylval;

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
     `$$ = $1'.

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

/* Line 1464 of yacc.c  */
#line 42 "parser.y"
    {
        // Parsing complete, main function syntax is correct
        std::cout << "Parsed main function successfully.\n";
    ;}
    break;

  case 4:

/* Line 1464 of yacc.c  */
#line 50 "parser.y"
    {
        // Just recognize and report the include directive
    ;}
    break;

  case 7:

/* Line 1464 of yacc.c  */
#line 62 "parser.y"
    {
        std::cout << "Evaluated an expression.\n";
    ;}
    break;

  case 8:

/* Line 1464 of yacc.c  */
#line 66 "parser.y"
    {
        std::cout << "Processed cout statement.\n";
    ;}
    break;

  case 9:

/* Line 1464 of yacc.c  */
#line 70 "parser.y"
    {
        std::cout << "Processed cin statement.\n";
    ;}
    break;

  case 10:

/* Line 1464 of yacc.c  */
#line 74 "parser.y"
    {
        std::cout << "Processed return statement.\n";
    ;}
    break;

  case 11:

/* Line 1464 of yacc.c  */
#line 78 "parser.y"
    {
        std::cout << "Processed variable declaration(s).\n";
    ;}
    break;

  case 12:

/* Line 1464 of yacc.c  */
#line 82 "parser.y"
    {
        std::cout << "Processed assignment.\n";
    ;}
    break;

  case 13:

/* Line 1464 of yacc.c  */
#line 86 "parser.y"
    {
        if ((yyvsp[(3) - (7)].intValue)) {
            // Execute statements inside the if block.
        }
    ;}
    break;

  case 14:

/* Line 1464 of yacc.c  */
#line 92 "parser.y"
    {
        if ((yyvsp[(3) - (11)].intValue)) {
            // Execute statements inside the if block.
        } else {
            // Execute statements inside the else block.
        }
    ;}
    break;

  case 15:

/* Line 1464 of yacc.c  */
#line 100 "parser.y"
    {
           std::cout << "Parsed while loop with condition.\n";
           // Just parse the contents without executing
       ;}
    break;

  case 16:

/* Line 1464 of yacc.c  */
#line 108 "parser.y"
    {
        (yyval.intValue) = ((yyvsp[(1) - (3)].intValue) > (yyvsp[(3) - (3)].intValue));
    ;}
    break;

  case 17:

/* Line 1464 of yacc.c  */
#line 112 "parser.y"
    {
        (yyval.intValue) = ((yyvsp[(1) - (3)].intValue) < (yyvsp[(3) - (3)].intValue));
    ;}
    break;

  case 18:

/* Line 1464 of yacc.c  */
#line 116 "parser.y"
    {
        (yyval.intValue) = ((yyvsp[(1) - (3)].intValue) >= (yyvsp[(3) - (3)].intValue));
    ;}
    break;

  case 19:

/* Line 1464 of yacc.c  */
#line 120 "parser.y"
    {
        (yyval.intValue) = ((yyvsp[(1) - (3)].intValue) <= (yyvsp[(3) - (3)].intValue));
    ;}
    break;

  case 20:

/* Line 1464 of yacc.c  */
#line 124 "parser.y"
    {
        (yyval.intValue) = ((yyvsp[(1) - (3)].intValue) == (yyvsp[(3) - (3)].intValue));
    ;}
    break;

  case 21:

/* Line 1464 of yacc.c  */
#line 131 "parser.y"
    {
        // Handle int declarations
    ;}
    break;

  case 22:

/* Line 1464 of yacc.c  */
#line 135 "parser.y"
    {
        // Handle float declarations
    ;}
    break;

  case 23:

/* Line 1464 of yacc.c  */
#line 141 "parser.y"
    {
        variables[(yyvsp[(1) - (1)].strValue)] = 0; // Default initialization to 0 for int
        std::cout << "Declared int variable " << (yyvsp[(1) - (1)].strValue) << " with default value 0.\n";
    ;}
    break;

  case 24:

/* Line 1464 of yacc.c  */
#line 146 "parser.y"
    {
        variables[(yyvsp[(1) - (3)].strValue)] = (yyvsp[(3) - (3)].intValue); // Initialize with the given expression
        std::cout << "Declared int variable " << (yyvsp[(1) - (3)].strValue) << " with value " << (yyvsp[(3) - (3)].intValue) << ".\n";
    ;}
    break;

  case 25:

/* Line 1464 of yacc.c  */
#line 151 "parser.y"
    {
        variables[(yyvsp[(3) - (3)].strValue)] = 0; // Default initialization to 0 for int
        std::cout << "Declared int variable " << (yyvsp[(3) - (3)].strValue) << " with default value 0.\n";
    ;}
    break;

  case 26:

/* Line 1464 of yacc.c  */
#line 156 "parser.y"
    {
        variables[(yyvsp[(3) - (5)].strValue)] = (yyvsp[(5) - (5)].intValue); // Initialize with the given expression
        std::cout << "Declared int variable " << (yyvsp[(3) - (5)].strValue) << " with value " << (yyvsp[(5) - (5)].intValue) << ".\n";
    ;}
    break;

  case 27:

/* Line 1464 of yacc.c  */
#line 164 "parser.y"
    {
        float_variables[(yyvsp[(1) - (1)].strValue)] = 0.0; // Default initialization to 0.0 for float
        std::cout << "Declared float variable " << (yyvsp[(1) - (1)].strValue) << " with default value 0.0\n";
    ;}
    break;

  case 28:

/* Line 1464 of yacc.c  */
#line 169 "parser.y"
    {
        float_variables[(yyvsp[(1) - (3)].strValue)] = yylval.floatValue; // Initialize with the given float value
        std::cout << "Declared float variable " << (yyvsp[(1) - (3)].strValue) << " with value " << yylval.floatValue << "\n";
    ;}
    break;

  case 29:

/* Line 1464 of yacc.c  */
#line 174 "parser.y"
    {
        float_variables[(yyvsp[(3) - (3)].strValue)] = 0.0; // Default initialization to 0.0 for float
        std::cout << "Declared float variable " << (yyvsp[(3) - (3)].strValue) << " with default value 0.0\n";
    ;}
    break;

  case 30:

/* Line 1464 of yacc.c  */
#line 179 "parser.y"
    {
        float_variables[(yyvsp[(3) - (5)].strValue)] = yylval.floatValue; // Initialize with the given float value
        std::cout << "Declared float variable " << (yyvsp[(3) - (5)].strValue) << " with value " << yylval.floatValue << "\n";
    ;}
    break;

  case 31:

/* Line 1464 of yacc.c  */
#line 189 "parser.y"
    {
        std::string var((yyvsp[(1) - (3)].strValue));
        if (variables.find(var) != variables.end()) {
            variables[var] = static_cast<int>((yyvsp[(3) - (3)].intValue)); // Cast to int if it's in the int map
            std::cout << "Assigned int value " << (yyvsp[(3) - (3)].intValue) << " to variable " << var << ".\n";
        } else if (float_variables.find(var) != float_variables.end()) {
            float_variables[var] = (yyvsp[(3) - (3)].intValue); // Assign directly if it's in the float map
            std::cout << "Assigned float value " << (yyvsp[(3) - (3)].intValue) << " to variable " << var << ".\n";
        } else {
            yyerror("Variable not declared");
        }
    ;}
    break;

  case 33:

/* Line 1464 of yacc.c  */
#line 209 "parser.y"
    {
        std::cout << "Output: ";
    ;}
    break;

  case 34:

/* Line 1464 of yacc.c  */
#line 213 "parser.y"
    {
        // Empty, as it's just chaining the OUTPUT operation
    ;}
    break;

  case 35:

/* Line 1464 of yacc.c  */
#line 220 "parser.y"
    {
        std::cout << (yyvsp[(1) - (1)].strValue); // Directly output the string literal
    ;}
    break;

  case 36:

/* Line 1464 of yacc.c  */
#line 224 "parser.y"
    {
        std::cout << (yyvsp[(1) - (1)].intValue); // Output the evaluated expression's value
    ;}
    break;

  case 38:

/* Line 1464 of yacc.c  */
#line 236 "parser.y"
    {
        std::cout << "Input statement for variable: " << (yyvsp[(2) - (2)].strValue) << std::endl;
        int temp;
        std::cin >> temp;
        variables[std::string((yyvsp[(2) - (2)].strValue))] = temp;
    ;}
    break;

  case 39:

/* Line 1464 of yacc.c  */
#line 243 "parser.y"
    {
        std::cout << "Input statement for variable: " << (yyvsp[(3) - (3)].strValue) << std::endl;
        int temp;
        std::cin >> temp;
        variables[std::string((yyvsp[(3) - (3)].strValue))] = temp;
    ;}
    break;

  case 40:

/* Line 1464 of yacc.c  */
#line 253 "parser.y"
    {
        (yyval.intValue) = (yyvsp[(1) - (1)].intValue);
    ;}
    break;

  case 41:

/* Line 1464 of yacc.c  */
#line 257 "parser.y"
    {
            std::string var((yyvsp[(1) - (1)].strValue));
            if(variables.find(var) != variables.end()) {
                (yyval.intValue) = variables[var];
            } else if(float_variables.find(var) != float_variables.end()) {
                (yyval.intValue) = float_variables[var];
            } else {
                std::stringstream errMsg;
                errMsg << "Variable '" << var << "' not declared or initialized";
                yyerror(errMsg.str().c_str());
            }
        ;}
    break;

  case 42:

/* Line 1464 of yacc.c  */
#line 270 "parser.y"
    {
            (yyval.intValue) = (yyvsp[(1) - (1)].floatValue);
        ;}
    break;

  case 43:

/* Line 1464 of yacc.c  */
#line 274 "parser.y"
    {
        (yyval.intValue) = (yyvsp[(1) - (3)].intValue) + (yyvsp[(3) - (3)].intValue);
        std::cout << "Addition expression evaluated.\n";
    ;}
    break;

  case 44:

/* Line 1464 of yacc.c  */
#line 279 "parser.y"
    {
        (yyval.intValue) = (yyvsp[(1) - (3)].intValue) - (yyvsp[(3) - (3)].intValue);
        std::cout << "Subtraction expression evaluated.\n";
    ;}
    break;

  case 45:

/* Line 1464 of yacc.c  */
#line 284 "parser.y"
    {
        (yyval.intValue) = (yyvsp[(1) - (3)].intValue) * (yyvsp[(3) - (3)].intValue);
        std::cout << "Multiplication expression evaluated.\n";
    ;}
    break;

  case 46:

/* Line 1464 of yacc.c  */
#line 289 "parser.y"
    {
        if((yyvsp[(3) - (3)].intValue) == 0) {
            yyerror("Division by zero");
            (yyval.intValue) = 0;
        } else {
            (yyval.intValue) = (yyvsp[(1) - (3)].intValue) / (yyvsp[(3) - (3)].intValue);
        }
        std::cout << "Division expression evaluated.\n";
    ;}
    break;

  case 47:

/* Line 1464 of yacc.c  */
#line 299 "parser.y"
    {
        (yyval.intValue) = (yyvsp[(2) - (3)].intValue);
        std::cout << "Parenthesized expression evaluated.\n";
    ;}
    break;



/* Line 1464 of yacc.c  */
#line 1891 "parser.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1684 of yacc.c  */
#line 305 "parser.y"


void printSyntaxBuffer() {
    std::cout << "Lexical Analysis:\n" << syntaxBuffer.str();
}

int main(int argc, char *argv[]) {
    int choice;
    std::string line;
    std::stringstream accumulatedInput;
    std::cout << "Select input method:\n";
    std::cout << "1. Enter code via terminal\n";
    std::cout << "2. Read code from a text file\n";
    std::cout << "Enter choice (1 or 2): ";
    std::cin >> choice;
    std::cin.ignore();

    if (choice == 1) {
        std::cout << "Enter your code (type 'end' to finish):\n";
           while (true) {
               std::getline(std::cin, line);
               if (line == "end") {
                   break;
               }
               accumulatedInput << line << '\n';
           }
           yy_scan_string(accumulatedInput.str().c_str());
    } else if (choice == 2) {
        std::string filepath;
        bool fileOpened = false;
        while (!fileOpened) {
            std::cout << "Enter the path to the text file (or type 'exit' to quit): ";
            std::getline(std::cin, filepath);

            if (filepath == "exit") {
                break;
            }
            yyin = fopen(filepath.c_str(), "r");

            if (yyin) {
                fileOpened = true;
            } else {
                perror("Error opening file");
                std::cout << "Please try again or type 'exit' to quit.\n";
            }
        }
        if (!fileOpened) {
            std::cout << "No file was opened. Exiting program." << std::endl;
            return 1;
        }
    } else {
        std::cerr << "Invalid choice." << std::endl;
        return 1;
    }
    std::cout << "TOKEN\t\tTYPE\t\tLINE NUMBER\n";
    yyparse();
    if (!errorMessages.empty()) {
        std::cerr << "Syntax errors:" << std::endl;
        for (const auto& msg : errorMessages) {
            std::cerr << msg << std::endl;
        }
    }
    if (yyin != nullptr) {
        fclose(yyin);
    }

    return 0;
}
void yyerror(const char *s) {
    std::stringstream error;
    error << s << " at line " << yylineno;
    errorMessages.push_back(error.str()); // Save error message
}


