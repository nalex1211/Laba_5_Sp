#include "parser.tab.h"
#include <iostream>
#include <string>
#include <sstream>

extern int yyparse();
extern void yy_scan_string(const char*);

int main() {
    std::string line;
    std::stringstream accumulatedInput;

    while (true) {
        std::getline(std::cin, line);
        if (line == "end") {
            break;
        }
        accumulatedInput << line << '\n';
    }

    yy_scan_string(accumulatedInput.str().c_str());
    yyparse();

    return 0;
}
