#include "string.hpp"
#include <cassert>
#include <iostream>
#include <fstream>
//tests input

int main() {
    std::ifstream inFile;
    inFile.open("input_test.txt");
    
    String one;
    while(inFile >> one){
        std::cout << one << std::endl;
    }
    
    inFile.close();
    std::cout << "Done testing input operator" << std::endl;
}
