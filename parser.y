%{
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
%}

%union {
    int intValue;
    char* strValue;
    float floatValue;
}
%token INT MAIN LEFT_BRACE RIGHT_BRACE SEMICOLON RETURN COUT CIN OUTPUT INPUT LEFT_PAREN RIGHT_PAREN IF ELSE
%token ASSIGN COMMA GREATER_THAN LESS_THAN GREATER_EQUAL LESS_EQUAL EQUAL
%token INCLUDE_DIRECTIVE
%token <floatValue> FLOAT
%token WHILE
%token FOR
%type <strValue> cin_target_list
%type <intValue> expression
%type <intValue> condition
%token <strValue> IDENTIFIER STRING
%token <intValue> NUMBER
%type <strValue> declaration

%error-verbose
%left PLUS MINUS
%left MULTIPLY DIVIDE
%%

program:
    includes INT MAIN LEFT_PAREN RIGHT_PAREN LEFT_BRACE statements RIGHT_BRACE
    {

        std::cout << "Parsed main function successfully.\n";
    }
    ;

includes:
    | includes INCLUDE_DIRECTIVE
    {

    }
    ;

statements:

    | statements statement
    ;

statement:
    expression SEMICOLON
    {
        std::cout << "Evaluated an expression.\n";
    }
    | cout_statement SEMICOLON
    {
        std::cout << "Processed cout statement.\n";
    }
    | cin_statement SEMICOLON
    {
        std::cout << "Processed cin statement.\n";
    }
    | RETURN expression SEMICOLON
    {
        std::cout << "Processed return statement.\n";
    }
    | declaration SEMICOLON
    {
        std::cout << "Processed variable declaration(s).\n";
    }
    | assignment SEMICOLON
    {
        std::cout << "Processed assignment.\n";
    }
    | IF LEFT_PAREN condition RIGHT_PAREN LEFT_BRACE statements RIGHT_BRACE
    {
        if ($3) {

        }
    }
    | IF LEFT_PAREN condition RIGHT_PAREN LEFT_BRACE statements RIGHT_BRACE ELSE LEFT_BRACE statements RIGHT_BRACE
    {
        if ($3) {

        } else {

        }
    }
   | WHILE LEFT_PAREN condition RIGHT_PAREN LEFT_BRACE statements RIGHT_BRACE
       {
           std::cout << "Parsed while loop with condition.\n";

       }
   | FOR LEFT_PAREN for_initialization SEMICOLON condition SEMICOLON for_increment RIGHT_PAREN LEFT_BRACE statements RIGHT_BRACE
       {
           std::cout << "Parsed for loop.\n";

       }
       ;


for_initialization:

    declaration
    | assignment
    ;

for_increment:

    assignment
    ;

condition:
    expression GREATER_THAN expression
    {
        $$ = ($1 > $3);
    }
    | expression LESS_THAN expression
    {
        $$ = ($1 < $3);
    }
    | expression GREATER_EQUAL expression
    {
        $$ = ($1 >= $3);
    }
    | expression LESS_EQUAL expression
    {
        $$ = ($1 <= $3);
    }
    | expression EQUAL expression
    {
        $$ = ($1 == $3);
    }
    ;

declaration:
    INT declaration_list_int
    {

    }
    | FLOAT declaration_list_float
    {

    }
;
declaration_list_int:
    IDENTIFIER
    {
        variables[$1] = 0;
        std::cout << "Declared int variable " << $1 << " with default value 0.\n";
    }
    | IDENTIFIER ASSIGN expression
    {
        variables[$1] = $3;
        std::cout << "Declared int variable " << $1 << " with value " << $3 << ".\n";
    }
    | declaration_list_int COMMA IDENTIFIER
    {
        variables[$3] = 0;
        std::cout << "Declared int variable " << $3 << " with default value 0.\n";
    }
    | declaration_list_int COMMA IDENTIFIER ASSIGN expression
    {
        variables[$3] = $5;
        std::cout << "Declared int variable " << $3 << " with value " << $5 << ".\n";
    }
;

declaration_list_float:
    IDENTIFIER
    {
        float_variables[$1] = 0.0;
        std::cout << "Declared float variable " << $1 << " with default value 0.0\n";
    }
    | IDENTIFIER ASSIGN FLOAT
    {
        float_variables[$1] = yylval.floatValue;
        std::cout << "Declared float variable " << $1 << " with value " << yylval.floatValue << "\n";
    }
    | declaration_list_float COMMA IDENTIFIER
    {
        float_variables[$3] = 0.0;
        std::cout << "Declared float variable " << $3 << " with default value 0.0\n";
    }
    | declaration_list_float COMMA IDENTIFIER ASSIGN FLOAT
    {
        float_variables[$3] = yylval.floatValue;
        std::cout << "Declared float variable " << $3 << " with value " << yylval.floatValue << "\n";
    }
;



assignment:
    IDENTIFIER ASSIGN expression
    {
        std::string var($1);
        if (variables.find(var) != variables.end()) {
            variables[var] = static_cast<int>($3);
            std::cout << "Assigned int value " << $3 << " to variable " << var << ".\n";
        } else if (float_variables.find(var) != float_variables.end()) {
            float_variables[var] = $3;
            std::cout << "Assigned float value " << $3 << " to variable " << var << ".\n";
        } else {
            yyerror("Variable not declared");
        }
    }
;

cout_statement:
    cout_target_list
    ;

cout_target_list:
    COUT OUTPUT cout_content
    {
        std::cout << "Output: ";
    }
    | cout_target_list OUTPUT cout_content
    {

    }
    ;

cout_content:
    STRING
    {
        std::cout << $1;
    }
    | expression
    {
        std::cout << $1;
    }
    ;


cin_statement:
    CIN cin_target_list
    ;

cin_target_list:
    INPUT IDENTIFIER
    {
        std::cout << "Input statement for variable: " << $2 << std::endl;
        int temp;
        std::cin >> temp;
        variables[std::string($2)] = temp;
    }
    | cin_target_list INPUT IDENTIFIER
    {
        std::cout << "Input statement for variable: " << $3 << std::endl;
        int temp;
        std::cin >> temp;
        variables[std::string($3)] = temp;
    }
    ;

expression:
    NUMBER
    {
        $$ = $1;
    }
    | IDENTIFIER
        {
            std::string var($1);
            if(variables.find(var) != variables.end()) {
                $$ = variables[var];
            } else if(float_variables.find(var) != float_variables.end()) {
                $$ = float_variables[var];
            } else {
                std::stringstream errMsg;
                errMsg << "Variable '" << var << "' not declared or initialized";
                yyerror(errMsg.str().c_str());
            }
        }
    | FLOAT
        {
            $$ = $1;
        }
    | expression PLUS expression
    {
        $$ = $1 + $3;
        std::cout << "Addition expression evaluated.\n";
    }
    | expression MINUS expression
    {
        $$ = $1 - $3;
        std::cout << "Subtraction expression evaluated.\n";
    }
    | expression MULTIPLY expression
    {
        $$ = $1 * $3;
        std::cout << "Multiplication expression evaluated.\n";
    }
    | expression DIVIDE expression
    {
        if($3 == 0) {
            yyerror("Division by zero");
            $$ = 0;
        } else {
            $$ = $1 / $3;
        }
        std::cout << "Division expression evaluated.\n";
    }
    | LEFT_PAREN expression RIGHT_PAREN
    {
        $$ = $2;
        std::cout << "Parenthesized expression evaluated.\n";
    }
    ;

%%

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
    errorMessages.push_back(error.str());
}

