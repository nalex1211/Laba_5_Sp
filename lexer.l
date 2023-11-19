%option noyywrap
%{
#include "parser.tab.h"
#include <stdlib.h>
#include <string.h>
#include <iostream>

void print_token(const char* tokenType, const char* yytext, int yylineno);
%}

%option yylineno

%%


"#include"[ \t]*(<[^>]*>|\"[^\"]*\") {
    print_token("Include Directive", yytext, yylineno);
    return INCLUDE_DIRECTIVE;
}
int                     { print_token("Keyword", yytext, yylineno); return INT; }
main                    { print_token("Identifier", yytext, yylineno); return MAIN; }
float                   { print_token("Keyword", yytext, yylineno); return FLOAT; }
[0-9]+"."[0-9]+         { print_token("Float", yytext, yylineno); yylval.floatValue = atof(yytext); return FLOAT; }
if                      { print_token("Keyword", yytext, yylineno); return IF; }
else                    { print_token("Keyword", yytext, yylineno); return ELSE; }
while                   { print_token("Keyword", yytext, yylineno); return WHILE; }
"("                     { print_token("Operator", yytext, yylineno); return LEFT_PAREN; }
")"                     { print_token("Operator", yytext, yylineno); return RIGHT_PAREN; }
"{"                     { print_token("Operator", yytext, yylineno); return LEFT_BRACE; }
"}"                     { print_token("Operator", yytext, yylineno); return RIGHT_BRACE; }
";"                     { print_token("Operator", yytext, yylineno); return SEMICOLON; }
"<<"                    { print_token("Operator", yytext, yylineno); return OUTPUT; }
">>"                    { print_token("Operator", yytext, yylineno); return INPUT; }
"+"                     { print_token("Operator", yytext, yylineno); return PLUS; }
"-"                     { print_token("Operator", yytext, yylineno); return MINUS; }
"*"                     { print_token("Operator", yytext, yylineno); return MULTIPLY; }
"/"                     { print_token("Operator", yytext, yylineno); return DIVIDE; }
"="                     { print_token("Operator", yytext, yylineno); return ASSIGN; }
">"                     { print_token("Operator", yytext, yylineno); return GREATER_THAN; }
"<"                     { print_token("Operator", yytext, yylineno); return LESS_THAN; }
">="                    { print_token("Operator", yytext, yylineno); return GREATER_EQUAL; }
"<="                    { print_token("Operator", yytext, yylineno); return LESS_EQUAL; }
"=="                    { print_token("Operator", yytext, yylineno); return EQUAL; }
"return"                { print_token("Keyword", yytext, yylineno); return RETURN; }
cout                    { print_token("Identifier", yytext, yylineno); return COUT; }
cin                     { print_token("Identifier", yytext, yylineno); return CIN; }
","                     { print_token("Operator", yytext, yylineno); return COMMA; }
[0-9]+                  { print_token("Constant", yytext, yylineno); yylval.intValue = atoi(yytext); return NUMBER; }
\"([^"\n\\]|\\.)*\" {
    print_token("String Literal", yytext, yylineno);
    yylval.strValue = strdup(yytext);
    return STRING;
}

[a-zA-Z_][a-zA-Z_0-9]*  { print_token("Identifier", yytext, yylineno); yylval.strValue = strdup(yytext); return IDENTIFIER; }
[ \t\n]+                { /* Ignore whitespace */ }
.                       { print_token("Unknown", yytext, yylineno); return *yytext; }

%%

void print_token(const char* tokenType, const char* yytext, int yylineno) {
    std::cout << yytext << "\t\t" << tokenType << "\t\t" << yylineno << "\n";
}