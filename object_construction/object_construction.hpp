// object_construction.hpp
// 2/21/19
// Lucas Miller

#include <iostream>

#ifndef Object_Construction
#define Object_Construction

class Object {
public:
     Object();  //Default ctor
    ~Object();  //dtor
     Object(const Object&); //copy ctor
     Object operator=(const Object&); //Assignment
     
private:

};




#endif
