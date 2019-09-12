#include <fstream>
#include <iostream>
#include "utilities.hpp"

int main(int argc, char const* argv[])
{
    if (argc < 2) {
        std::cerr << "No input file, please specify a file to read from!" << std::endl;
    }

    std::ifstream infixFile(argv[1]);

    if (!infixFile) {
        std::cerr << "Specified infix file could not be opened" << std::endl;
    }

    std::ofstream postfixFile(argv[2]);

    if (!postfixFile) {
        toPostfix(infixFile, std::cout);
    }
        
    
    toPostfix(infixFile, postfixFile);
    infixFile.close();
    postfixFile.close();
    
    
    std::ofstream asmFile(argv[3]);
    std::ifstream input(argv[1]);
    if(!asmFile) {
        toAssembly(input, std::cout);
    }

    toAssembly(input, asmFile);
    asmFile.close();

    return 0;
}






