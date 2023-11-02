%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <map>
#include <string>

std::map<std::string, int> variables;

extern int yylex();
extern void yyerror(const char *s);
%}

%union {
    int intValue;
    char* strValue;
}

%token <strValue> IDENTIFIER
%token <intValue> NUMBER
%type <intValue> expression
%token INT
%token ASSIGN SEMICOLON
%token MAIN LEFT_BRACE RIGHT_BRACE RETURN
%token COMMA
%token LEFT_PAREN RIGHT_PAREN LEFT_BRACE RIGHT_BRACE MAIN


%left '+' '-'
%left '*' '/'

%%

program:
    INT MAIN LEFT_PAREN RIGHT_PAREN LEFT_BRACE statement_list RIGHT_BRACE
    | statement_list
    ;

statement_list:
    statement_list statement
    | /* empty */
    ;

statement:
    declaration SEMICOLON
    | assignment SEMICOLON
    | expression SEMICOLON { printf("Expression result: %d\n", $1); }
    | RETURN expression SEMICOLON { printf("Return value: %d\n", $2); }
    ;

declaration:
    INT var_list { printf("Declaration completed\n"); }
    | INT SEMICOLON { printf("Type declaration without variable\n"); }
    ;


var_list:
    var_list COMMA IDENTIFIER { printf("Declared variable: %s\n", $3); }
    | IDENTIFIER { printf("Declared variable: %s\n", $1); }
    | IDENTIFIER ASSIGN expression {
        variables[$1] = $3;
        printf("Declared and assigned: %s = %d\n", $1, $3);
        free($1);
    }
    ;

assignment:
    IDENTIFIER ASSIGN expression {
        variables[$1] = $3;
        printf("Assigned %s = %d\n", $1, $3);
        free($1);
    }
    ;

expression:
    NUMBER
    | IDENTIFIER {
        if(variables.find($1) != variables.end()) {
            $$ = variables[$1];
        } else {
            yyerror("Variable not initialized");
            exit(1);
        }
    }
    | expression '+' expression { $$ = $1 + $3; }
    | expression '-' expression { $$ = $1 - $3; }
    | expression '*' expression { $$ = $1 * $3; }
    | expression '/' expression { $$ = $1 / $3; }
    | '(' expression ')' { $$ = $2; }
    ;

%%
void yyerror(const char *s) {
    fprintf(stderr, "Parse error: %s\n", s);
    exit(1);
}
