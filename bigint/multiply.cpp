// Lucas Miller
// Multiply.cpp
// CS23001

#include <iostream>
#include <fstream>
#include <cstdlib>
#include "bigint.hpp"

int main() {
    std::ifstream in("data1-2.txt");    // Define stream for input
    if(!in) {                           // Make sure it opened correctly.
        std::cerr << "Could not open data1-1.txt, exiting." << std::endl;
        exit(1);
    }

    bigint biOne;
    bigint biTwo;
    char c = ' ';
    
    while(in >> biOne && in >> biTwo){ 
        std::cout << "FIRST BIGINT: " << biOne << std::endl;
        std::cout << "SECOND BIGINT: " << biTwo << std::endl;

    
        bigint result = biOne * biTwo;
        std::cout << "SUM OF BIGINTS: " << result << std::endl;
        c = '0';
        std::cout << std::endl;
    }
    
    
    //Until end of file
       //Read two bigints
       //Print them out
       //Add them together
       //Print out results
 
    in.close();
    return 0;
}

