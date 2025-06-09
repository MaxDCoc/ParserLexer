
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     DOCTYPE = 258,
     DOCTOKEN = 259,
     ARTICLE = 260,
     HTTPS = 261,
     FTPS = 262,
     HTTP = 263,
     FTP = 264,
     PORT = 265,
     DOM = 266,
     ROUTE = 267,
     FRAG = 268,
     ENDTAG_ART = 269,
     ENDTAG_S = 270,
     ENDTAG_TT1 = 271,
     ENDTAG_TT2 = 272,
     ENDTAG_TB = 273,
     ENDTAG_TH = 274,
     ENDTAG_TF = 275,
     ENDTAG_TG = 276,
     ENDTAG_ET = 277,
     ENDTAG_ETBL = 278,
     LINK = 279,
     ENDTAG_IT = 280,
     ENDTAG_SS = 281,
     ENDTAG_INFO = 282,
     ENDTAG_RW = 283,
     ENDTAG_ABS = 284,
     ENDTAG_ADD = 285,
     ENDTAG_AUT = 286,
     ENDTAG_COM = 287,
     ENDTAG_SP = 288,
     ENDTAG_EMP = 289,
     ENDTAG_P = 290,
     ENDTAG_IMP = 291,
     ENDTAG_FN = 292,
     ENDTAG_SN = 293,
     ENDTAG_ST = 294,
     ENDTAG_CT = 295,
     ENDTAG_STT = 296,
     ENDTAG_PH = 297,
     ENDTAG_EM = 298,
     ENDTAG_DT = 299,
     ENDTAG_YR = 300,
     ENDTAG_HD = 301,
     ENDTAG_IL = 302,
     ENDTAG_LI = 303,
     ENDTAG_MOBJ = 304,
     ENDTAG_CP = 305,
     ENDTAG = 306,
     SECTION = 307,
     SIMPLESECTION = 308,
     TITLE = 309,
     TITLE2 = 310,
     LISTITEM = 311,
     INFO = 312,
     TGROUP = 313,
     ENTRY = 314,
     ROW = 315,
     THEAD = 316,
     TFOOT = 317,
     TBODY = 318,
     INFORMALTABLE = 319,
     ITEMIZEDLIST = 320,
     ABSTRACT = 321,
     ADDRESS = 322,
     AUTHOR = 323,
     COMMENT = 324,
     SIMPARA = 325,
     EMPHASIS = 326,
     PARA = 327,
     IMPORTANT = 328,
     ENTRYBL = 329,
     FIRSTNAME = 330,
     SURNAME = 331,
     STREET = 332,
     CITY = 333,
     STATE = 334,
     PHONE = 335,
     EMAIL = 336,
     DATE = 337,
     YEAR = 338,
     HOLDER = 339,
     COPYRIGHT = 340,
     MEDIAOBJECT = 341,
     IMAGEDATA = 342,
     VIDEODATA = 343,
     TOKEN = 344
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 18 ".\\parser.y"

    char * texto;



/* Line 1676 of yacc.c  */
#line 147 "parser.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


