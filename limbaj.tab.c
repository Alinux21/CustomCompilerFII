/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "limbaj.y"

#include <iostream>
#include <vector>
#include <math.h>
#include <cstring>
#include <sstream>
#include <stdexcept>
#include "AST.h"
#include "IdList.h"
extern FILE* yyin;
extern char* yytext;
extern int yylineno;
extern int yyleng;
extern int yylex();
void yyerror(const char * s);
using namespace std;
class IdList ids;
class AST ast;
bool isInteger(const std::string& str) {
    try {
        std::stoi(str);
        return true;
    } catch (const std::invalid_argument& ia) {
        return false;
    } catch (const std::out_of_range& oor) {
        return false;
    }
}

bool isFloat(const std::string& str) {
    try {
        std::stof(str);
        return true;
    } catch (const std::invalid_argument& ia) {
        return false;
    } catch (const std::out_of_range& oor) {
        return false;
    }
}

bool isBoolean(const std::string& str) {
    return (str == "true" || str == "false");
}

#line 116 "limbaj.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "limbaj.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_BGIN = 3,                       /* BGIN  */
  YYSYMBOL_END = 4,                        /* END  */
  YYSYMBOL_ASSIGN = 5,                     /* ASSIGN  */
  YYSYMBOL_BGINSTRUCT = 6,                 /* BGINSTRUCT  */
  YYSYMBOL_ENDSTRUCT = 7,                  /* ENDSTRUCT  */
  YYSYMBOL_CONST = 8,                      /* CONST  */
  YYSYMBOL_IF = 9,                         /* IF  */
  YYSYMBOL_ELSE = 10,                      /* ELSE  */
  YYSYMBOL_WHILE = 11,                     /* WHILE  */
  YYSYMBOL_BGINGLOBAL = 12,                /* BGINGLOBAL  */
  YYSYMBOL_ENDGLOBAL = 13,                 /* ENDGLOBAL  */
  YYSYMBOL_BGINFUNC = 14,                  /* BGINFUNC  */
  YYSYMBOL_ENDFUNC = 15,                   /* ENDFUNC  */
  YYSYMBOL_EVAL = 16,                      /* EVAL  */
  YYSYMBOL_LT = 17,                        /* LT  */
  YYSYMBOL_LE = 18,                        /* LE  */
  YYSYMBOL_GT = 19,                        /* GT  */
  YYSYMBOL_GE = 20,                        /* GE  */
  YYSYMBOL_EQ = 21,                        /* EQ  */
  YYSYMBOL_NEQ = 22,                       /* NEQ  */
  YYSYMBOL_AND = 23,                       /* AND  */
  YYSYMBOL_OR = 24,                        /* OR  */
  YYSYMBOL_NOT = 25,                       /* NOT  */
  YYSYMBOL_ID = 26,                        /* ID  */
  YYSYMBOL_TYPE = 27,                      /* TYPE  */
  YYSYMBOL_TYPEOF = 28,                    /* TYPEOF  */
  YYSYMBOL_INT = 29,                       /* INT  */
  YYSYMBOL_FLOAT = 30,                     /* FLOAT  */
  YYSYMBOL_BOOL = 31,                      /* BOOL  */
  YYSYMBOL_CHAR = 32,                      /* CHAR  */
  YYSYMBOL_STRING = 33,                    /* STRING  */
  YYSYMBOL_STRUCTURA = 34,                 /* STRUCTURA  */
  YYSYMBOL_35_ = 35,                       /* '+'  */
  YYSYMBOL_36_ = 36,                       /* '-'  */
  YYSYMBOL_37_ = 37,                       /* '*'  */
  YYSYMBOL_38_ = 38,                       /* '/'  */
  YYSYMBOL_39_ = 39,                       /* '^'  */
  YYSYMBOL_40_ = 40,                       /* '('  */
  YYSYMBOL_41_ = 41,                       /* ')'  */
  YYSYMBOL_42_ = 42,                       /* '['  */
  YYSYMBOL_43_ = 43,                       /* ']'  */
  YYSYMBOL_44_ = 44,                       /* '{'  */
  YYSYMBOL_45_ = 45,                       /* '}'  */
  YYSYMBOL_46_ = 46,                       /* ';'  */
  YYSYMBOL_47_ = 47,                       /* '<'  */
  YYSYMBOL_48_ = 48,                       /* ','  */
  YYSYMBOL_YYACCEPT = 49,                  /* $accept  */
  YYSYMBOL_progr = 50,                     /* progr  */
  YYSYMBOL_user_defined_data_types = 51,   /* user_defined_data_types  */
  YYSYMBOL_structures_list = 52,           /* structures_list  */
  YYSYMBOL_structure = 53,                 /* structure  */
  YYSYMBOL_list_struct_fields = 54,        /* list_struct_fields  */
  YYSYMBOL_methods = 55,                   /* methods  */
  YYSYMBOL_param = 56,                     /* param  */
  YYSYMBOL_global_variables = 57,          /* global_variables  */
  YYSYMBOL_global_variables_list = 58,     /* global_variables_list  */
  YYSYMBOL_decl = 59,                      /* decl  */
  YYSYMBOL_functions = 60,                 /* functions  */
  YYSYMBOL_functions_list = 61,            /* functions_list  */
  YYSYMBOL_decl_func = 62,                 /* decl_func  */
  YYSYMBOL_list1 = 63,                     /* list1  */
  YYSYMBOL_statement1 = 64,                /* statement1  */
  YYSYMBOL_expr = 65,                      /* expr  */
  YYSYMBOL_op = 66,                        /* op  */
  YYSYMBOL_list_param = 67,                /* list_param  */
  YYSYMBOL_main = 68,                      /* main  */
  YYSYMBOL_list = 69,                      /* list  */
  YYSYMBOL_statement = 70,                 /* statement  */
  YYSYMBOL_statement_eval = 71,            /* statement_eval  */
  YYSYMBOL_statement_typeof = 72,          /* statement_typeof  */
  YYSYMBOL_list_param_call = 73,           /* list_param_call  */
  YYSYMBOL_param_call = 74,                /* param_call  */
  YYSYMBOL_declarations = 75,              /* declarations  */
  YYSYMBOL_array_list = 76,                /* array_list  */
  YYSYMBOL_assignments = 77,               /* assignments  */
  YYSYMBOL_eval = 78,                      /* eval  */
  YYSYMBOL_expression = 79                 /* expression  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   309

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  103
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  208

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   289


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      40,    41,    37,    35,    48,    36,     2,    38,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    46,
      47,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    42,     2,    43,    39,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    44,     2,    45,     2,     2,     2,     2,
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
static const yytype_int16 yyrline[] =
{
       0,    76,    76,    79,    80,    83,    84,    87,    90,    91,
      94,    95,    97,   100,   101,   103,   104,   107,   112,   113,
     115,   116,   119,   120,   121,   123,   124,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   139,   142,
     142,   142,   142,   147,   148,   151,   155,   156,   159,   162,
     165,   167,   168,   169,   170,   171,   175,   176,   193,   194,
     197,   197,   197,   197,   199,   201,   215,   221,   227,   230,
     236,   241,   246,   251,   256,   261,   266,   272,   273,   274,
     283,   293,   305,   318,   333,   337,   342,   347,   352,   357,
     362,   367,   372,   377,   382,   387,   392,   397,   402,   407,
     408,   409,   410,   411
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "BGIN", "END",
  "ASSIGN", "BGINSTRUCT", "ENDSTRUCT", "CONST", "IF", "ELSE", "WHILE",
  "BGINGLOBAL", "ENDGLOBAL", "BGINFUNC", "ENDFUNC", "EVAL", "LT", "LE",
  "GT", "GE", "EQ", "NEQ", "AND", "OR", "NOT", "ID", "TYPE", "TYPEOF",
  "INT", "FLOAT", "BOOL", "CHAR", "STRING", "STRUCTURA", "'+'", "'-'",
  "'*'", "'/'", "'^'", "'('", "')'", "'['", "']'", "'{'", "'}'", "';'",
  "'<'", "','", "$accept", "progr", "user_defined_data_types",
  "structures_list", "structure", "list_struct_fields", "methods", "param",
  "global_variables", "global_variables_list", "decl", "functions",
  "functions_list", "decl_func", "list1", "statement1", "expr", "op",
  "list_param", "main", "list", "statement", "statement_eval",
  "statement_typeof", "list_param_call", "param_call", "declarations",
  "array_list", "assignments", "eval", "expression", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-139)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      36,  -139,    80,    70,     1,  -139,  -139,    74,  -139,    73,
    -139,    17,  -139,    98,    59,  -139,    81,    66,    -4,  -139,
    -139,  -139,  -139,  -139,  -139,    96,    86,   212,    99,    93,
    -139,  -139,   116,   104,   106,   136,    29,   132,   -13,   131,
    -139,  -139,  -139,  -139,   157,   140,   145,     4,   177,   -13,
     -13,   -13,    88,   175,   173,   165,   -13,  -139,  -139,  -139,
    -139,   -13,  -139,   213,  -139,   168,   163,  -139,   184,  -139,
    -139,   -12,   214,   118,   143,   151,  -139,  -139,  -139,  -139,
    -139,  -139,  -139,  -139,  -139,  -139,   183,   170,   186,   240,
    -139,   176,   -13,   -13,   -13,   -13,   -13,   -13,   -13,   -13,
     -13,   -13,   -13,   -13,   -13,   243,  -139,  -139,  -139,   243,
     235,   237,   238,  -139,  -139,   175,   278,   242,  -139,   241,
     241,   241,   241,     2,     2,   236,   224,    37,    37,   245,
     245,  -139,    22,  -139,  -139,  -139,  -139,  -139,  -139,  -139,
    -139,  -139,     3,   281,   244,    -2,    51,  -139,  -139,   246,
    -139,   277,  -139,    95,    82,   247,  -139,  -139,    47,   263,
     252,   253,   289,   269,  -139,   250,  -139,  -139,   101,   292,
     196,   196,   119,  -139,  -139,    57,  -139,  -139,   270,  -139,
    -139,  -139,  -139,   257,   254,   259,  -139,  -139,  -139,  -139,
    -139,  -139,  -139,  -139,   258,   196,   260,  -139,  -139,  -139,
      89,    78,   293,  -139,   261,  -139,   102,  -139
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       3,     5,     0,    13,     0,     1,    15,    18,     4,     0,
       6,     0,    20,     0,     0,    14,     0,     0,    22,    50,
       2,     9,    17,    16,    19,     0,     0,     0,    11,     0,
      21,    45,     0,     0,     0,     0,     0,     0,     0,     0,
      53,    51,    52,    56,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    64,     0,   103,   100,   101,
     102,     0,    54,    57,    46,    12,     0,     8,     0,    24,
      43,     0,    78,     0,     0,     0,    70,    71,    72,    73,
      74,    75,    63,    60,    61,    62,     0,    59,     0,     0,
      92,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     7,    12,    23,     0,
       0,     0,     0,    84,    55,     0,     0,     0,    99,    93,
      94,    95,    96,    97,    98,    90,    91,    85,    86,    87,
      88,    89,     0,    44,    79,    80,    81,    82,    83,    50,
      50,    58,     0,     0,     0,     0,     0,    76,    77,     0,
      26,    47,    49,     0,     0,     0,    68,    69,     0,     0,
       0,     0,     0,     0,    10,     0,    50,    65,     0,     0,
       0,     0,     0,    27,    25,     0,    66,    67,     0,    39,
      40,    41,    42,     0,     0,     0,    28,    29,    30,    33,
      32,    31,    48,    34,     0,     0,     0,    26,    38,    50,
       0,     0,    35,    37,     0,    26,     0,    36
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -139,  -139,  -139,  -139,  -139,  -139,  -139,   -28,  -139,  -139,
    -139,  -139,  -139,  -139,  -133,  -139,   135,   112,   203,  -139,
    -138,  -139,  -139,  -139,   194,  -139,  -139,  -139,  -139,  -139,
     -46
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,     4,    10,    28,    45,    70,     7,    11,
      17,    13,    18,    26,   154,   165,   183,   184,    71,    20,
      27,    39,    40,    62,    86,    87,    41,   158,    42,    43,
      63
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      46,   145,   146,    73,    74,    75,    32,    33,     8,    34,
      90,    24,    56,    57,    35,    91,    58,    59,    60,    92,
      93,    94,    95,    25,    36,    37,    38,    61,   175,   108,
      15,    68,   147,   148,    52,     9,   109,   100,   101,   102,
     103,   104,     1,   151,    16,    69,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,    32,
      33,   201,    34,   144,   200,    32,    33,    35,    34,    53,
     109,    54,   206,    35,   102,   103,   104,    36,    37,    38,
       5,   133,     6,    36,    37,    38,    32,    33,    12,    34,
     159,   160,   167,   161,    35,   168,   152,   159,   160,    14,
     161,    19,   192,    21,    36,    37,    38,    22,   162,   163,
     159,   160,    23,   161,    76,   162,   163,    77,    78,    79,
      80,    81,    29,   203,   156,   157,    44,   164,   162,   163,
     176,   177,    30,    47,   202,    92,    93,    94,    95,    96,
      97,    98,    99,    48,    49,   186,    50,   207,   187,   188,
     189,   190,   191,   100,   101,   102,   103,   104,    55,   111,
      92,    93,    94,    95,    96,    97,    98,    99,    92,    93,
      94,    95,    96,    97,    98,    99,    51,    64,   100,   101,
     102,   103,   104,    65,   112,    66,   100,   101,   102,   103,
     104,    67,   113,    92,    93,    94,    95,    96,    97,    98,
      99,    82,    88,    72,    83,    84,    85,    89,   105,   106,
     107,   100,   101,   102,   103,   104,    31,   118,   115,   110,
      32,    33,   179,    34,   114,   180,   181,   182,    35,   116,
      92,    93,    94,    95,    96,    97,    98,    99,    36,    37,
      38,    92,    93,    94,    95,    96,    97,    98,   100,   101,
     102,   103,   104,    92,    93,    94,    95,    96,    97,   100,
     101,   102,   103,   104,   134,   135,   136,   137,   138,   117,
      68,   100,   101,   102,   103,   104,   100,   101,   102,   103,
     104,   139,   140,   142,   104,   143,   149,   155,   150,   169,
     153,   166,   170,   171,   172,   173,   174,   178,   194,   193,
     196,   195,   197,   204,   199,   205,   185,   198,   132,   141
};

static const yytype_uint8 yycheck[] =
{
      28,   139,   140,    49,    50,    51,     8,     9,     7,    11,
      56,    15,    25,    26,    16,    61,    29,    30,    31,    17,
      18,    19,    20,    27,    26,    27,    28,    40,   166,    41,
      13,    27,    29,    30,     5,    34,    48,    35,    36,    37,
      38,    39,     6,    45,    27,    41,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,     8,
       9,   199,    11,    41,   197,     8,     9,    16,    11,    40,
      48,    42,   205,    16,    37,    38,    39,    26,    27,    28,
       0,   109,    12,    26,    27,    28,     8,     9,    14,    11,
       8,     9,    45,    11,    16,    48,    45,     8,     9,    26,
      11,     3,    45,    44,    26,    27,    28,    26,    26,    27,
       8,     9,    46,    11,    26,    26,    27,    29,    30,    31,
      32,    33,    26,    45,    29,    30,    27,    45,    26,    27,
      29,    30,    46,    40,    45,    17,    18,    19,    20,    21,
      22,    23,    24,    27,    40,    26,    40,    45,    29,    30,
      31,    32,    33,    35,    36,    37,    38,    39,    26,    41,
      17,    18,    19,    20,    21,    22,    23,    24,    17,    18,
      19,    20,    21,    22,    23,    24,    40,    46,    35,    36,
      37,    38,    39,    26,    41,    45,    35,    36,    37,    38,
      39,    46,    41,    17,    18,    19,    20,    21,    22,    23,
      24,    26,    29,    26,    29,    30,    31,    42,    40,    46,
      26,    35,    36,    37,    38,    39,     4,    41,    48,     5,
       8,     9,    26,    11,    41,    29,    30,    31,    16,    43,
      17,    18,    19,    20,    21,    22,    23,    24,    26,    27,
      28,    17,    18,    19,    20,    21,    22,    23,    35,    36,
      37,    38,    39,    17,    18,    19,    20,    21,    22,    35,
      36,    37,    38,    39,    29,    30,    31,    32,    33,    29,
      27,    35,    36,    37,    38,    39,    35,    36,    37,    38,
      39,    44,    44,     5,    39,    43,     5,    10,    44,    26,
      44,    44,    40,    40,     5,    26,    46,     5,    41,    29,
      41,    47,    44,    10,    44,    44,   171,   195,   105,   115
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     6,    50,    51,    52,     0,    12,    57,     7,    34,
      53,    58,    14,    60,    26,    13,    27,    59,    61,     3,
      68,    44,    26,    46,    15,    27,    62,    69,    54,    26,
      46,     4,     8,     9,    11,    16,    26,    27,    28,    70,
      71,    75,    77,    78,    27,    55,    56,    40,    27,    40,
      40,    40,     5,    40,    42,    26,    25,    26,    29,    30,
      31,    40,    72,    79,    46,    26,    45,    46,    27,    41,
      56,    67,    26,    79,    79,    79,    26,    29,    30,    31,
      32,    33,    26,    29,    30,    31,    73,    74,    29,    42,
      79,    79,    17,    18,    19,    20,    21,    22,    23,    24,
      35,    36,    37,    38,    39,    40,    46,    26,    41,    48,
       5,    41,    41,    41,    41,    48,    43,    29,    41,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    67,    56,    29,    30,    31,    32,    33,    44,
      44,    73,     5,    43,    41,    69,    69,    29,    30,     5,
      44,    45,    45,    44,    63,    10,    29,    30,    76,     8,
       9,    11,    26,    27,    45,    64,    44,    45,    48,    26,
      40,    40,     5,    26,    46,    69,    29,    30,     5,    26,
      29,    30,    31,    65,    66,    65,    26,    29,    30,    31,
      32,    33,    45,    29,    41,    47,    41,    44,    66,    44,
      63,    69,    45,    45,    10,    44,    63,    45
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    49,    50,    51,    51,    52,    52,    53,    54,    54,
      55,    55,    56,    57,    57,    58,    58,    59,    60,    60,
      61,    61,    62,    62,    62,    63,    63,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    65,    66,
      66,    66,    66,    67,    67,    68,    69,    69,    69,    69,
      69,    70,    70,    70,    70,    70,    71,    72,    73,    73,
      74,    74,    74,    74,    75,    75,    76,    76,    76,    76,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    78,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     4,     0,     3,     0,     2,     7,     3,     0,
       8,     0,     2,     0,     3,     0,     3,     2,     0,     3,
       0,     3,     0,     5,     4,     3,     0,     2,     3,     3,
       3,     3,     3,     3,     4,     7,    11,     7,     3,     1,
       1,     1,     1,     1,     3,     3,     3,     8,    12,     8,
       0,     1,     1,     1,     2,     4,     1,     1,     3,     1,
       1,     1,     1,     1,     2,     9,     3,     3,     1,     1,
       3,     3,     3,     3,     3,     3,     6,     6,     3,     5,
       5,     5,     5,     5,     4,     3,     3,     3,     3,     3,
       3,     3,     2,     3,     3,     3,     3,     3,     3,     3,
       1,     1,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
  case 2: /* progr: user_defined_data_types global_variables functions main  */
#line 76 "limbaj.y"
                                                               {cout<<"The programme is correct!\n";
                                                                        ids.printVars();}
#line 1339 "limbaj.tab.c"
    break;

  case 17: /* decl: TYPE ID  */
#line 107 "limbaj.y"
                      { if(!ids.existsVar((yyvsp[0].string))) {   //int x;
                          ids.addVar((yyvsp[-1].string),(yyvsp[0].string),NULL,NULL,NULL,false);
                     }
                    }
#line 1348 "limbaj.tab.c"
    break;

  case 38: /* expr: op '<' op  */
#line 139 "limbaj.y"
                { }
#line 1354 "limbaj.tab.c"
    break;

  case 47: /* list: list IF '(' expression ')' '{' list '}'  */
#line 156 "limbaj.y"
                                                {if (ast.evaluateTree()!="true"&&ast.evaluateTree()!="false"){
                                                  yyerror("'if' accepts only boolean expressions");
     }}
#line 1362 "limbaj.tab.c"
    break;

  case 48: /* list: list IF '(' expression ')' '{' list '}' ELSE '{' list '}'  */
#line 159 "limbaj.y"
                                                                 {if (ast.evaluateTree()!="true"&&ast.evaluateTree()!="false"){
                                                  yyerror("'if' accepts only boolean expressions");
     }}
#line 1370 "limbaj.tab.c"
    break;

  case 49: /* list: list WHILE '(' expression ')' '{' list '}'  */
#line 162 "limbaj.y"
                                                  {if (ast.evaluateTree()!="true"&&ast.evaluateTree()!="false"){
                                                  yyerror("'while' accepts only boolean expressions");
     }}
#line 1378 "limbaj.tab.c"
    break;

  case 56: /* statement_eval: eval  */
#line 175 "limbaj.y"
                     { cout << "Eval value: " << ast.evaluateTree() << endl; ast.printTree(); }
#line 1384 "limbaj.tab.c"
    break;

  case 57: /* statement_typeof: expression  */
#line 176 "limbaj.y"
                             {cout << "TypeOf value: ";
    string resultValue = ast.evaluateTree();

    // // Assuming your evaluateTree() function returns a string representation of the result
    
    if (isFloat(resultValue)) {
        cout << "Float" << endl;
    } else  if (isInteger(resultValue)) {
        cout << "Integer" << endl;
    } 
     else if (isBoolean(resultValue)) {
        cout << "Boolean" << endl;
    } else {
        cout << "Unknown" << endl;
    }

    ast.printTree(); }
#line 1406 "limbaj.tab.c"
    break;

  case 64: /* declarations: TYPE ID  */
#line 199 "limbaj.y"
                     {   if(!ids.existsVar((yyvsp[0].string)))   
                         {    ids.addVar((yyvsp[-1].string),(yyvsp[0].string),NULL,NULL,NULL,false);}}
#line 1413 "limbaj.tab.c"
    break;

  case 65: /* declarations: TYPE ID '[' INT ']' ASSIGN '{' array_list '}'  */
#line 201 "limbaj.y"
                                                            {
                            char* token = strtok((yyvsp[-1].string), " ");
                            int index = 0;
                            while (token != NULL) {
                                if (token[0] != '\0') {
                                    ids.addVar((yyvsp[-8].string), (string((yyvsp[-7].string)) + "[" + to_string(index) + "]").c_str(), token, NULL, NULL, false);
                                    index++;
                                   if(index>(yyvsp[-5].num)){string err="Array's '"+string((yyvsp[-7].string))+"' max size is: "+to_string((yyvsp[-5].num));yyerror(err.c_str());}
                                }
                                token = strtok(NULL, " ");
                            }
}
#line 1430 "limbaj.tab.c"
    break;

  case 66: /* array_list: array_list ',' INT  */
#line 215 "limbaj.y"
                                {
    (yyval.string) = (char*)malloc(strlen((yyvsp[-2].string)) + strlen(to_string((yyvsp[0].num)).c_str()) + 2); // +2 for the space and null terminator
    strcpy((yyval.string), (yyvsp[-2].string));
    strcat((yyval.string), to_string((yyvsp[0].num)).c_str());
    strcat((yyval.string), " ");
}
#line 1441 "limbaj.tab.c"
    break;

  case 67: /* array_list: array_list ',' FLOAT  */
#line 221 "limbaj.y"
                      {
    (yyval.string) = (char*)malloc(strlen((yyvsp[-2].string)) + strlen(to_string((yyvsp[0].num_cu_pct)).c_str()) + 2); // +2 for the space and null terminator
    strcpy((yyval.string), (yyvsp[-2].string));
    strcat((yyval.string), to_string((yyvsp[0].num_cu_pct)).c_str());
    strcat((yyval.string), " ");
}
#line 1452 "limbaj.tab.c"
    break;

  case 68: /* array_list: INT  */
#line 227 "limbaj.y"
      {
    (yyval.string) = strdup(to_string((yyvsp[0].num)).c_str()); strcat((yyval.string)," ");
}
#line 1460 "limbaj.tab.c"
    break;

  case 69: /* array_list: FLOAT  */
#line 230 "limbaj.y"
        {
    (yyval.string) = strdup(to_string((yyvsp[0].num_cu_pct)).c_str()); strcat((yyval.string)," ");  
}
#line 1468 "limbaj.tab.c"
    break;

  case 70: /* assignments: ID ASSIGN ID  */
#line 236 "limbaj.y"
                          {    if(!ids.existsVar((yyvsp[-2].string))){ string err="Variable '"+string((yyvsp[-2].string))+"' was not declared ";yyerror(err.c_str());}
                              else if(!ids.existsVar((yyvsp[0].string))){ string err="Variable '"+string((yyvsp[0].string))+"' was not declared ";yyerror(err.c_str());}
                              else if(ids.TypeOf((yyvsp[-2].string))!=ids.TypeOf((yyvsp[0].string))) {{ string err="Variables '"+string((yyvsp[-2].string))+"' and '"+string((yyvsp[0].string))+"' have different types";yyerror(err.c_str());}}
                              else { string val=ids.get_val((yyvsp[0].string)); ids.addVal((yyvsp[-2].string),val.c_str());}     //x:=y;
                         }
#line 1478 "limbaj.tab.c"
    break;

  case 71: /* assignments: ID ASSIGN INT  */
#line 241 "limbaj.y"
                          { if(!ids.existsVar((yyvsp[-2].string))){ string err="Variable '"+string((yyvsp[-2].string))+"' was not declared ";yyerror(err.c_str());}
                              if(ids.TypeOf((yyvsp[-2].string))!="int"){
                              string err="Cannot assign 'int' to an '"+ids.TypeOf((yyvsp[-2].string))+"'";yyerror(err.c_str());
                              }else {ids.addVal((yyvsp[-2].string),to_string((yyvsp[0].num)).c_str());}             
           }
#line 1488 "limbaj.tab.c"
    break;

  case 72: /* assignments: ID ASSIGN FLOAT  */
#line 246 "limbaj.y"
                            { if(!ids.existsVar((yyvsp[-2].string))){ string err="Variable '"+string((yyvsp[-2].string))+"' was not declared ";yyerror(err.c_str());}
                              if(ids.TypeOf((yyvsp[-2].string))!="float"){
                              string err="Cannot assign 'float' to an '"+ids.TypeOf((yyvsp[-2].string))+"'";yyerror(err.c_str());
                              }else {ids.addVal((yyvsp[-2].string),to_string((yyvsp[0].num_cu_pct)).c_str());}             
           }
#line 1498 "limbaj.tab.c"
    break;

  case 73: /* assignments: ID ASSIGN BOOL  */
#line 251 "limbaj.y"
                           { if(!ids.existsVar((yyvsp[-2].string))){ string err="Variable '"+string((yyvsp[-2].string))+"' was not declared ";yyerror(err.c_str());}
                              if(ids.TypeOf((yyvsp[-2].string))!="bool"){
                              string err="Cannot assign 'bool' to an'"+ids.TypeOf((yyvsp[-2].string))+"''";yyerror(err.c_str());
                              }else {ids.addVal((yyvsp[-2].string),to_string((yyvsp[0].bul)).c_str()? "true" : "false");}             
           }
#line 1508 "limbaj.tab.c"
    break;

  case 74: /* assignments: ID ASSIGN CHAR  */
#line 256 "limbaj.y"
                           { if(!ids.existsVar((yyvsp[-2].string))){ string err="Variable '"+string((yyvsp[-2].string))+"' was not declared ";yyerror(err.c_str());}
                              if(ids.TypeOf((yyvsp[-2].string))!="char"){
                              string err="Cannot assign 'char' to an '"+ids.TypeOf((yyvsp[-2].string))+"''";yyerror(err.c_str());
                              }else {string str(1,(yyvsp[0].chr));ids.addVal((yyvsp[-2].string),str.c_str());}             
           }
#line 1518 "limbaj.tab.c"
    break;

  case 75: /* assignments: ID ASSIGN STRING  */
#line 261 "limbaj.y"
                             { if(!ids.existsVar((yyvsp[-2].string))){ string err="Variable '"+string((yyvsp[-2].string))+"' was not declared ";yyerror(err.c_str());}
                              if(ids.TypeOf((yyvsp[-2].string))!="string"){
                              string err="Cannot assign 'string' to an'"+ids.TypeOf((yyvsp[-2].string))+"'";yyerror(err.c_str());
                              }else {ids.addVal((yyvsp[-2].string),(yyvsp[0].string));}             
           }
#line 1528 "limbaj.tab.c"
    break;

  case 76: /* assignments: ID '[' INT ']' ASSIGN INT  */
#line 266 "limbaj.y"
                                        { string id=string((yyvsp[-5].string))+"["+to_string((yyvsp[-3].num))+"]";
            if(!ids.existsVar(id.c_str())){ string err="Variable '"+string(id.c_str())+"' was not declared ";yyerror(err.c_str());}
                              if(ids.TypeOf(id.c_str())!="int"){
                              string err="Cannot assign 'int' to an '"+ids.TypeOf(id.c_str())+"'";yyerror(err.c_str());
                              }else {ids.addVal(id.c_str(),to_string((yyvsp[0].num)).c_str());}
           }
#line 1539 "limbaj.tab.c"
    break;

  case 78: /* assignments: CONST TYPE ID  */
#line 273 "limbaj.y"
                { yyerror("Constant must have value assigned at declaration!");}
#line 1545 "limbaj.tab.c"
    break;

  case 79: /* assignments: CONST TYPE ID ASSIGN INT  */
#line 274 "limbaj.y"
                                     {   
                                   if(!ids.existsVar((yyvsp[-2].string)))   
                                        {        if(strcmp((yyvsp[-3].string),"int")==0){
                                             ids.addVar((yyvsp[-3].string),(yyvsp[-2].string),to_string((yyvsp[0].num)).c_str(),NULL,NULL,true);
                                             }else {string err = "Constant " + string((yyvsp[-2].string)) + " has type " + (yyvsp[-3].string) + ", assigned value has type int"; 
                                                  yyerror(err.c_str());}
                                        }                    
                              else {  yyerror("variable already declared");}
                              }
#line 1559 "limbaj.tab.c"
    break;

  case 80: /* assignments: CONST TYPE ID ASSIGN FLOAT  */
#line 283 "limbaj.y"
                                       {   
                                   if(!ids.existsVar((yyvsp[-2].string)))   
                                        {    if(strcmp((yyvsp[-3].string),"float")==0){
                                             ids.addVar((yyvsp[-3].string),(yyvsp[-2].string),to_string((yyvsp[0].num_cu_pct)).c_str(),NULL,NULL,true);
                                             }else {string err = "Constant " + string((yyvsp[-3].string)) + " has type " + (yyvsp[-3].string) + ", assigned value has type float"; 
                                                  yyerror(err.c_str());}
                                        }                    
                              else {  yyerror("variable already declared");}    

          }
#line 1574 "limbaj.tab.c"
    break;

  case 81: /* assignments: CONST TYPE ID ASSIGN BOOL  */
#line 293 "limbaj.y"
                                     { 
                               if (!ids.existsVar((yyvsp[-2].string))) {
                                   if (strcmp((yyvsp[-3].string), "bool") == 0) {
                                       ids.addVar((yyvsp[-3].string), (yyvsp[-2].string), (yyvsp[0].bul) ? "true" : "false", NULL, NULL,true);
                                   } else {
                                       string err = "Constant " + string((yyvsp[-2].string)) + " has type " + (yyvsp[-3].string) + ", assigned value has type bool";
                                       yyerror(err.c_str());
                                   }
                               } else {
                                   yyerror("Variable already declared");
                               }
          }
#line 1591 "limbaj.tab.c"
    break;

  case 82: /* assignments: CONST TYPE ID ASSIGN CHAR  */
#line 305 "limbaj.y"
                                     {
              if (!ids.existsVar((yyvsp[-2].string))) {
                  if (strcmp((yyvsp[-3].string), "char") == 0) {
                      string str(1,(yyvsp[0].chr));
                      ids.addVar((yyvsp[-3].string), (yyvsp[-2].string), str.c_str(), NULL, NULL,true);
                  } else {
                      string err = "Constant " + string((yyvsp[-2].string)) + " has type " + (yyvsp[-3].string) + ", assigned value has type char";
                      yyerror(err.c_str());
                  }
              } else {
                  yyerror("Variable already declared");
              }
          }
#line 1609 "limbaj.tab.c"
    break;

  case 83: /* assignments: CONST TYPE ID ASSIGN STRING  */
#line 318 "limbaj.y"
                                       {
              if (!ids.existsVar((yyvsp[-2].string))) {
                  if (strcmp((yyvsp[-3].string), "string") == 0) {
                     ids.addVar((yyvsp[-3].string), (yyvsp[-2].string), (yyvsp[0].string), NULL, NULL,true);

                  } else {
                      string err = "Constant " + string((yyvsp[-2].string)) + " has type " + (yyvsp[-3].string) + ", assigned value has type string";
                      yyerror(err.c_str());
                  }
              } else {
                  yyerror("Variable already declared");
              }
          }
#line 1627 "limbaj.tab.c"
    break;

  case 84: /* eval: EVAL '(' expression ')'  */
#line 333 "limbaj.y"
                               {
       (yyval.nod) = (yyvsp[-1].nod);  
       }
#line 1635 "limbaj.tab.c"
    break;

  case 85: /* expression: expression '+' expression  */
#line 337 "limbaj.y"
                                        { 
                    if((yyvsp[-2].nod)->type=="bool"||(yyvsp[0].nod)->type=="bool"){yyerror("Cannot perform mathematical operations on type 'bool'");}
                    if((yyvsp[-2].nod)->type!=(yyvsp[0].nod)->type){string err="Operands have different types! '"+(yyvsp[-2].nod)->type+"' + '"+(yyvsp[0].nod)->type+"'";yyerror(err.c_str());}
                    (yyval.nod) = new Node{(yyvsp[-2].nod), (yyvsp[0].nod), "+",(yyvsp[-2].nod)->type}; 
                    ast.AddNode("+",(yyvsp[-2].nod),(yyvsp[0].nod),(yyvsp[-2].nod)->type);}
#line 1645 "limbaj.tab.c"
    break;

  case 86: /* expression: expression '-' expression  */
#line 342 "limbaj.y"
                                       { 
                    if((yyvsp[-2].nod)->type=="bool"||(yyvsp[0].nod)->type=="bool"){yyerror("Cannot perform mathematical operations on type 'bool'");}
                    if((yyvsp[-2].nod)->type!=(yyvsp[0].nod)->type){string err="Operands have different types! '"+(yyvsp[-2].nod)->type+"' - '"+(yyvsp[0].nod)->type+"'";yyerror(err.c_str());}
                    (yyval.nod) = new Node{(yyvsp[-2].nod), (yyvsp[0].nod), "-",(yyvsp[-2].nod)->type}; 
                    ast.AddNode("-",(yyvsp[-2].nod),(yyvsp[0].nod),(yyvsp[-2].nod)->type);}
#line 1655 "limbaj.tab.c"
    break;

  case 87: /* expression: expression '*' expression  */
#line 347 "limbaj.y"
                                       { 
                    if((yyvsp[-2].nod)->type=="bool"||(yyvsp[0].nod)->type=="bool"){yyerror("Cannot perform mathematical operations on type 'bool'");}
                    if((yyvsp[-2].nod)->type!=(yyvsp[0].nod)->type){string err="Operands have different types! '"+(yyvsp[-2].nod)->type+"' * '"+(yyvsp[0].nod)->type+"'";yyerror(err.c_str());}
                    (yyval.nod) = new Node{(yyvsp[-2].nod), (yyvsp[0].nod), "*",(yyvsp[-2].nod)->type}; 
                    ast.AddNode("*",(yyvsp[-2].nod),(yyvsp[0].nod),(yyvsp[-2].nod)->type);}
#line 1665 "limbaj.tab.c"
    break;

  case 88: /* expression: expression '/' expression  */
#line 352 "limbaj.y"
                                       { 
                    if((yyvsp[-2].nod)->type=="bool"||(yyvsp[0].nod)->type=="bool"){yyerror("Cannot perform mathematical operations on type 'bool'");}
                    if((yyvsp[-2].nod)->type!=(yyvsp[0].nod)->type){string err="Operands have different types! '"+(yyvsp[-2].nod)->type+"' / '"+(yyvsp[0].nod)->type+"'";yyerror(err.c_str());}
                    (yyval.nod) = new Node{(yyvsp[-2].nod), (yyvsp[0].nod), "/",(yyvsp[-2].nod)->type}; 
                    ast.AddNode("/",(yyvsp[-2].nod),(yyvsp[0].nod),(yyvsp[-2].nod)->type);}
#line 1675 "limbaj.tab.c"
    break;

  case 89: /* expression: expression '^' expression  */
#line 357 "limbaj.y"
                                       { 
                    if((yyvsp[-2].nod)->type=="bool"||(yyvsp[0].nod)->type=="bool"){yyerror("Cannot perform mathematical operations on type 'bool'");}
                    if((yyvsp[-2].nod)->type!=(yyvsp[0].nod)->type){string err="Operands have different types! '"+(yyvsp[-2].nod)->type+"' ^ '"+(yyvsp[0].nod)->type+"'";yyerror(err.c_str());}
                    (yyval.nod) = new Node{(yyvsp[-2].nod), (yyvsp[0].nod), "^",(yyvsp[-2].nod)->type}; 
                    ast.AddNode("^",(yyvsp[-2].nod),(yyvsp[0].nod),(yyvsp[-2].nod)->type);}
#line 1685 "limbaj.tab.c"
    break;

  case 90: /* expression: expression AND expression  */
#line 362 "limbaj.y"
                                      {
                    if((yyvsp[-2].nod)->type=="int"||(yyvsp[-2].nod)->type=="float"||(yyvsp[0].nod)->type=="int"||(yyvsp[0].nod)->type=="float"){
                         string err="Operation && only supports bool operands ! '"+(yyvsp[-2].nod)->type+"' && '"+(yyvsp[0].nod)->type+"'";yyerror(err.c_str());}
                    (yyval.nod) = new Node{(yyvsp[-2].nod), (yyvsp[0].nod),"&&",(yyvsp[-2].nod)->type}; 
                    ast.AddNode("&&",(yyvsp[-2].nod),(yyvsp[0].nod),(yyvsp[-2].nod)->type); }
#line 1695 "limbaj.tab.c"
    break;

  case 91: /* expression: expression OR expression  */
#line 367 "limbaj.y"
                                     {
                    if((yyvsp[-2].nod)->type=="int"||(yyvsp[-2].nod)->type=="float"||(yyvsp[0].nod)->type=="int"||(yyvsp[0].nod)->type=="float"){
                         string err="Operation || only supports bool operands ! '"+(yyvsp[-2].nod)->type+"' || '"+(yyvsp[0].nod)->type+"'";yyerror(err.c_str());}
                    (yyval.nod) = new Node{(yyvsp[-2].nod), (yyvsp[0].nod),"||",(yyvsp[-2].nod)->type}; 
                    ast.AddNode("||",(yyvsp[-2].nod),(yyvsp[0].nod),(yyvsp[-2].nod)->type);}
#line 1705 "limbaj.tab.c"
    break;

  case 92: /* expression: NOT expression  */
#line 372 "limbaj.y"
                           {
                    if((yyvsp[0].nod)->type=="int"||(yyvsp[0].nod)->type=="float"){
                         string err="Operation ! only supports bool operand! !'"+(yyvsp[0].nod)->type+"''";yyerror(err.c_str());}
                    (yyval.nod) = new Node{(yyvsp[0].nod), NULL,"!",(yyvsp[0].nod)->type}; 
                    ast.AddNode("!",(yyvsp[0].nod),NULL,(yyvsp[0].nod)->type); }
#line 1715 "limbaj.tab.c"
    break;

  case 93: /* expression: expression LT expression  */
#line 377 "limbaj.y"
                                      { 
                    if((yyvsp[-2].nod)->type=="bool"||(yyvsp[0].nod)->type=="bool"){yyerror("Cannot perform mathematical operations on type 'bool'");}
                    if((yyvsp[-2].nod)->type!=(yyvsp[0].nod)->type){string err="Operands have different types! '"+(yyvsp[-2].nod)->type+"' < '"+(yyvsp[0].nod)->type+"'";yyerror(err.c_str());}
                    (yyval.nod) = new Node{(yyvsp[-2].nod), (yyvsp[0].nod), "<","bool"}; 
                    ast.AddNode("<",(yyvsp[-2].nod),(yyvsp[0].nod),"bool");}
#line 1725 "limbaj.tab.c"
    break;

  case 94: /* expression: expression LE expression  */
#line 382 "limbaj.y"
                                      { 
                    if((yyvsp[-2].nod)->type=="bool"||(yyvsp[0].nod)->type=="bool"){yyerror("Cannot perform mathematical operations on type 'bool'");}
                    if((yyvsp[-2].nod)->type!=(yyvsp[0].nod)->type){string err="Operands have different types! '"+(yyvsp[-2].nod)->type+"' <= '"+(yyvsp[0].nod)->type+"'";yyerror(err.c_str());}
                    (yyval.nod) = new Node{(yyvsp[-2].nod), (yyvsp[0].nod), "<=","bool"}; 
                    ast.AddNode("<=",(yyvsp[-2].nod),(yyvsp[0].nod),"bool");}
#line 1735 "limbaj.tab.c"
    break;

  case 95: /* expression: expression GT expression  */
#line 387 "limbaj.y"
                                      { 
                    if((yyvsp[-2].nod)->type=="bool"||(yyvsp[0].nod)->type=="bool"){yyerror("Cannot perform mathematical operations on type 'bool'");}
                    if((yyvsp[-2].nod)->type!=(yyvsp[0].nod)->type){string err="Operands have different types! '"+(yyvsp[-2].nod)->type+"' > '"+(yyvsp[0].nod)->type+"'";yyerror(err.c_str());}
                    (yyval.nod) = new Node{(yyvsp[-2].nod), (yyvsp[0].nod), ">","bool"}; 
                    ast.AddNode(">",(yyvsp[-2].nod),(yyvsp[0].nod),"bool");}
#line 1745 "limbaj.tab.c"
    break;

  case 96: /* expression: expression GE expression  */
#line 392 "limbaj.y"
                                      { 
                    if((yyvsp[-2].nod)->type=="bool"||(yyvsp[0].nod)->type=="bool"){yyerror("Cannot perform mathematical operations on type 'bool'");}
                    if((yyvsp[-2].nod)->type!=(yyvsp[0].nod)->type){string err="Operands have different types! '"+(yyvsp[-2].nod)->type+"' >= '"+(yyvsp[0].nod)->type+"'";yyerror(err.c_str());}
                    (yyval.nod) = new Node{(yyvsp[-2].nod), (yyvsp[0].nod), ">=","bool"}; 
                    ast.AddNode(">=",(yyvsp[-2].nod),(yyvsp[0].nod),"bool");}
#line 1755 "limbaj.tab.c"
    break;

  case 97: /* expression: expression EQ expression  */
#line 397 "limbaj.y"
                                      { 
                    if((yyvsp[-2].nod)->type=="bool"||(yyvsp[0].nod)->type=="bool"){yyerror("Cannot perform mathematical operations on type 'bool'");}
                    if((yyvsp[-2].nod)->type!=(yyvsp[0].nod)->type){string err="Operands have different types! '"+(yyvsp[-2].nod)->type+"' == '"+(yyvsp[0].nod)->type+"'";yyerror(err.c_str());}
                    (yyval.nod) = new Node{(yyvsp[-2].nod), (yyvsp[0].nod), "==","bool"}; 
                    ast.AddNode("==",(yyvsp[-2].nod),(yyvsp[0].nod),"bool");}
#line 1765 "limbaj.tab.c"
    break;

  case 98: /* expression: expression NEQ expression  */
#line 402 "limbaj.y"
                                       { 
                    if((yyvsp[-2].nod)->type=="bool"||(yyvsp[0].nod)->type=="bool"){yyerror("Cannot perform mathematical operations on type 'bool'");}
                    if((yyvsp[-2].nod)->type!=(yyvsp[0].nod)->type){string err="Operands have different types! '"+(yyvsp[-2].nod)->type+"' != '"+(yyvsp[0].nod)->type+"'";yyerror(err.c_str());}
                    (yyval.nod) = new Node{(yyvsp[-2].nod), (yyvsp[0].nod), "!=","bool"}; 
                    ast.AddNode("!=",(yyvsp[-2].nod),(yyvsp[0].nod),"bool");}
#line 1775 "limbaj.tab.c"
    break;

  case 99: /* expression: '(' expression ')'  */
#line 407 "limbaj.y"
                               {(yyval.nod)=(yyvsp[-1].nod);}
#line 1781 "limbaj.tab.c"
    break;

  case 100: /* expression: INT  */
#line 408 "limbaj.y"
                   { (yyval.nod) = new Node{NULL, NULL, to_string((yyvsp[0].num)),"int"}; ast.AddNode(to_string((yyvsp[0].num)),NULL,NULL,"int");}
#line 1787 "limbaj.tab.c"
    break;

  case 101: /* expression: FLOAT  */
#line 409 "limbaj.y"
                   {(yyval.nod)=new Node{NULL,NULL,to_string((yyvsp[0].num_cu_pct)),"float"};ast.AddNode(to_string((yyvsp[0].num_cu_pct)),NULL,NULL,"float");}
#line 1793 "limbaj.tab.c"
    break;

  case 102: /* expression: BOOL  */
#line 410 "limbaj.y"
                  {(yyval.nod)=new Node{NULL,NULL,(yyvsp[0].bul)?"true":"false","bool"};ast.AddNode((yyvsp[0].bul)?"true":"false",NULL,NULL,"bool");}
#line 1799 "limbaj.tab.c"
    break;

  case 103: /* expression: ID  */
#line 411 "limbaj.y"
                { if(!ids.existsVar((yyvsp[0].string))) {string err="Variable '"+string((yyvsp[0].string))+"' was not declared!";yyerror(err.c_str());}
               (yyval.nod)=new Node{NULL,NULL,ids.get_val((yyvsp[0].string)),ids.TypeOf((yyvsp[0].string))}; ast.AddNode(ids.get_val((yyvsp[0].string)),NULL,NULL,ids.TypeOf((yyvsp[0].string)));}
#line 1806 "limbaj.tab.c"
    break;


#line 1810 "limbaj.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 416 "limbaj.y"

/* void yyerror(const char *s) {
    printf("error: '%s' at line '%d'\n", s, yylineno);

    printf("  | ");
    int i;
    for (i = 0; yytext[i] != '\n' && yytext[i] != '\0'; ++i) {
        putchar(yytext[i]);
    }
    putchar('\n');

    printf("  | ");
    for (int j = 0; j < yyleng - 1; ++j) {
        putchar(' ');
    }
    printf("^ %s\n", yytext);

    exit(EXIT_FAILURE);
} */

  void yyerror(const char * s){
printf("error: %s line:%d\n",s,yylineno);

}  

int main(int argc, char** argv){
     yyin=fopen(argv[1],"r");
     yyparse();

    
} 
