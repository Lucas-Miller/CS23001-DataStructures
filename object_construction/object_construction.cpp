// object_construction.cpp
// Lucas Miller
// 2/21/19

#include "object_construction.hpp"

Object::Object(){
    std::cout << "Default Constructor being called" << std::endl;
}

Object::~Object(){
    std::cout << "Destructor being called" << std::endl;
}

Object::Object(const Object& copy){
    std::cout << "Copy Constructor being called" << std::endl;
}

Object Object::operator=(const Object& rhs){
    Object temp;
    std::cout << "Assignment being called" << std::endl;
    return temp;
}
