

#ifndef CS2_STACK_UTIL
#define CS2_STACK_UTIL
#include<iostream>
#include <fstream>
#include "../string/string.hpp"
#include "stack.hpp"

void toPostfix(std::ifstream& in, std::ostream& out); 
void toAssembly(std::ifstream& in, std::ostream& out);
std::string intToString(int);
std::string getOperator(const std::string& op);
std::string getToken(std::ifstream& in); 
#endif
