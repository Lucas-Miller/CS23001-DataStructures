#include <fstream>
#include <vector>
#include <iostream>
#include "../assembler/stack.hpp"
#include "../string/string.hpp"
//#include <string>

void toPrefix(std::ifstream& in, std::ostream& out) {
    stack<String> s;
    String left, right, op, currentToken;
    char token[100];

    while (!in.eof()) {
        in >> token;
        currentToken = String(token);

        if (in.eof()) {
            break;
        }

        if (currentToken == ";") {
            out << s.top();
            out << ";";
            out << std::endl;
            s = stack<String>();
        } else if (currentToken == ")") {
            right = s.pop();
            op = s.pop();
            left = s.pop();
            s.push(op + left + right);
        } else {
            if (currentToken != "(") {
                s.push(currentToken + ' ');
            }
        }
    }


}

int main(int argc, char const* argv[])
{
    if (argc < 2) {
        std::cerr << "No input file, please specify a file to read from!" << std::endl;
    }

    std::ifstream infixFile(argv[1]);

    if (!infixFile) {
        std::cerr << "Specified infix file could not be opened" << std::endl;
    }

    std::ofstream prefixFile(argv[2]);

    if (!prefixFile) {
        toPrefix(infixFile, std::cout);
    }

    toPrefix(infixFile, prefixFile);

    infixFile.close();
    prefixFile.close();

    return 0;
}





