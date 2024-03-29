%{
#include "limbaj.tab.h"
#include <stdio.h>
%}
%option noyywrap
%%"
"int"|"float"|"char"|"string"|"bool" {yylval.string = strdup(yytext);return TYPE;}
"const" {return CONST;}
"begin_struct" {return BGINSTRUCT;}
"end_struct" {return ENDSTRUCT;}
"begin_progr" {return BGIN;}
"end_progr" {return END;}
"begin_global" {return BGINGLOBAL;}
"end_global" {return ENDGLOBAL;}
"begin_functions" {return BGINFUNC;}
"end_functions" {return ENDFUNC;}
"structure" {return STRUCTURA;}
"TypeOf" {return TYPEOF;}
"Eval" {return EVAL;}
"if" {return IF;}
"else" {return ELSE;}
"while" {return WHILE;}
"true"  { yylval.bul = true; return BOOL; }
"false" { yylval.bul = false; return BOOL; }
\"[0-9a-zA-Z ]*\" { yylval.string = strdup(yytext); return STRING; }
['][0-9a-zA-Z]['] { yylval.chr= yytext[1]; return CHAR; }
[a-zA-Z][a-zA-Z0-9]* {yylval.string = strdup(yytext); return ID;}
":=" {return ASSIGN;}
"=="            { return EQ; }
"!="            { return NEQ; }
">"             { return GT; }
"<"             { return LT; }
">="            { return GE; }
"<="            { return LE; }
"&&"            { return AND; }
"||"            { return OR; }
"!"             { return NOT; }
[1-9]+[1-9]*[.][0-9]+[0-9]* {    yylval.num_cu_pct = atof(yytext);return FLOAT;}
[0].[0-9]+[0-9]* {   yylval.num_cu_pct = atof(yytext);return FLOAT;}
[1-9][0-9]* { yylval.num = atoi(yytext); return INT; }
0 { yylval.num = 0; return INT; } 
[ \t] ;
\n {yylineno++;}
. {return yytext[0];}
