%option noyywrap
%{
#include "parser.tab.h"
#include <stdlib.h>
#include <string.h>
extern int yyparse(void);
char input_buffer[4096] = {0};
int buffer_index = 0;
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

"end"                       {
                                input_buffer[buffer_index] = '\0';
                                yy_scan_string(input_buffer);
                                yyparse();
                                exit(0);
                            }
"("                         { return LEFT_PAREN; }
")"                         { return RIGHT_PAREN; }
"{"                         { return LEFT_BRACE; }
"}"                         { return RIGHT_BRACE; }
"main"                      { return MAIN; }

"return"                    { return RETURN; }
[a-zA-Z][a-zA-Z0-9]*       { yylval.strValue = strdup(yytext); return IDENTIFIER; }
[ \t\n]+                    { /* Ignore whitespace and newlines */ }
.                           {
                                input_buffer[buffer_index] = yytext[0];
                                buffer_index++;
                            }

%%
