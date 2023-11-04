%option noyywrap
%{
#include "parser.tab.h"
#include <stdlib.h>
#include <string.h>
extern int yyparse(void);
%}

%%

[0-9]+                      { yylval.intValue = atoi(yytext); return NUMBER; }
"int"                       { return INT; }
";"                         { return SEMICOLON; }
"+"                         { return '+'; }
"-"                         { return '-'; }
"*"                         { return '*'; }
"/"                         { return '/'; }
","                         { return COMMA; }
"="                         { return ASSIGN; }
"cout"                      { return COUT; }
"<<"                        { return OUTPUT; }
"cin"                        { return CIN; }
">>"                         { return INPUT; }
\"[^"]*\"   {
               yylval.strValue = strdup(yytext);
               return STRING;
           }
"("                         { return LEFT_PAREN; }
")"                         { return RIGHT_PAREN; }
"{"                         { return LEFT_BRACE; }
"}"                         { return RIGHT_BRACE; }
"main"                      { return MAIN; }
"return"                    { return RETURN; }
[a-zA-Z][a-zA-Z0-9]*       { yylval.strValue = strdup(yytext); return IDENTIFIER; }
[ \t\n]+                    { /* Ignore whitespace and newlines */ }
.                           { /* Handle other characters */ }

%%