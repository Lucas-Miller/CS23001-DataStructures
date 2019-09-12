#include "stack.hpp"
#include <cassert>
#include <iostream>
#include "../string/string.hpp"
#include "utilities.hpp"
int main() {
    
    {
        std::ifstream in("postfix_testset.txt");
        toPostfix(in, std::cout);     
    }
    
    std::cout << "Postfix conversion tests done" << std::endl;
}
