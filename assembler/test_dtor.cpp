#include "stack.hpp"
#include <cassert>
#include <iostream>
#include "../string/string.hpp"
int main() {
    //Test Default Ctor
    {
        stack<int> test;
        
        test.~stack();    
         
        assert(test.empty() == true);
    }
   
        
    
    {
        stack<int> test;
        test.push(1); 
        test.~stack();    
         
        assert(test.empty() == true);
    }

    
    {
        stack<int> test;
        test.push(1);
        test.push(2); 
        test.~stack();    
         
        assert(test.empty() == true);
    }
 


    
    
    {
        stack<char> test;
        test.push('a'); 
        test.~stack();    
         
        assert(test.empty() == true);
    }


    {
        stack<String> test;
        test.push("Abcd");
        test.push("efgh"); 
        test.~stack();    
         
        assert(test.empty() == true);
    }
    {
        stack<String> test;
        test.push("Abcd");
        test.push("efgh");
        test.push("123456"); 
        test.~stack();    
         
        assert(test.empty() == true);
    }

    {
        stack<int> test;
        test.push(4000000);
        test.~stack();    
         
        assert(test.empty() == true);
    }





}
