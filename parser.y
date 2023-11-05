%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <iostream>
#include <sstream>
#include <map>
#include <cstdio>

std::map<std::string, int> variables;
bool errorOccurred = false;
std::stringstream outputBuffer;
std::stringstream errorBuffer;

extern void yy_scan_string(const char *);
extern int yylex();
extern void yyerror(const char *s);
extern FILE *yyin;
%}
%union {
    int intValue;
    char* strValue;
}

%token <strValue> IDENTIFIER STRING
%token <intValue> NUMBER
%type <intValue> expression
%token INT
%token ASSIGN SEMICOLON
%token MAIN LEFT_BRACE RIGHT_BRACE RETURN
%token COMMA
%token LEFT_PAREN RIGHT_PAREN
%token COUT OUTPUT
%token CIN INPUT
%left OUTPUT

%left '+' '-'
%left '*' '/'

%%

program:
    INT MAIN LEFT_PAREN RIGHT_PAREN LEFT_BRACE statement_list RIGHT_BRACE
    | statement_list
    ;

statement_list:
    statement_list statement
    |
    ;

statement:
    declaration SEMICOLON
    | declaration { yyerror("Cannot run the program, semicolon is missing after declaration"); }
    | assignment SEMICOLON
    | cin_statement SEMICOLON
    | cin_statement { yyerror("Cannot run the program, semicolon is missing after cin statement"); }
    | expression SEMICOLON { outputBuffer << "Expression result: " << $1 << "\n"; }
    | cout_statement SEMICOLON
    | RETURN expression SEMICOLON { outputBuffer << "Return value: " << $2 << "\n"; }
    | error SEMICOLON { yyerror("Syntax error"); }
    ;

declaration:
    INT var_list { outputBuffer << "Declaration completed\n"; }
    | INT SEMICOLON { outputBuffer << "Type declaration without variable\n"; }
    ;

var_list:
    var_list COMMA IDENTIFIER { outputBuffer << "Declared variable: " << $3 << "\n"; }
    | IDENTIFIER { outputBuffer << "Declared variable: " << $1 << "\n"; }
    | IDENTIFIER ASSIGN expression {
        variables[$1] = $3;
        outputBuffer << "Declared and assigned: " << $1 << " = " << $3 << "\n";
        free($1);
    }
    ;

assignment:
    IDENTIFIER ASSIGN expression {
        variables[$1] = $3;
        outputBuffer << "Assigned " << $1 << " = " << $3 << "\n";
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
        }
    }
    | expression '+' expression { $$ = $1 + $3; }
    | expression '-' expression { $$ = $1 - $3; }
    | expression '*' expression { $$ = $1 * $3; }
    | expression '/' expression { $$ = $1 / $3; }
    | '(' expression ')' { $$ = $2; }
    ;

cout_statement:
    COUT OUTPUT expression {
        outputBuffer << $3;
    }
    | COUT OUTPUT STRING {
        std::string strValue = std::string($3).substr(1, strlen($3) - 2);
        outputBuffer << strValue;
    }
    | cout_statement OUTPUT expression {
        if(outputBuffer.str().back() != ' ')
            outputBuffer << " ";
        outputBuffer << $3;
    }
    | cout_statement OUTPUT STRING {
        std::string strValue = std::string($3).substr(1, strlen($3) - 2);
        if (outputBuffer.str().back() != ' ' && !strValue.empty() && strValue[0] != ' ') {
            outputBuffer << " ";
        }
        outputBuffer << strValue;
    }
    ;

cin_statement:
    CIN INPUT IDENTIFIER {
        int temp;
        std::cout << "Enter value for " << $3 << ": ";
        std::cin >> temp;
        variables[$3] = temp;
        free($3);
    }
    | cin_statement INPUT IDENTIFIER {
        int temp;
        std::cout << "Enter value for " << $3 << ": ";
        std::cin >> temp;
        variables[$3] = temp;
        free($3);
    }
    ;
%%
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

    errorOccurred = false;
    yyparse();

    if (yyin != nullptr) {
        fclose(yyin);
    }

    if (errorOccurred) {
        std::cerr << errorBuffer.str();
    } else {
        std::cout << outputBuffer.str();
    }

    return 0;
}

void yyerror(const char *s) {
    errorBuffer << s << std::endl;
    errorOccurred = true;
}

void checkErrors() {
    if(errorOccurred) {
        std::cerr << "Errors occurred during parsing." << std::endl;
        exit(1);
    }
}