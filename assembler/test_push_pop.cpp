#include "stack.hpp"
#include <cassert>
#include <iostream>
#include "../string/string.hpp"
int main() {
    
    {
        stack<int> test;
        test.push(1);
        
        assert(test.empty() == false);
        assert(test.top() == 1);
    }
    
    
        
    {
        stack<int> test;
        test.push(1);
        test.pop();
        
        assert(test.empty() == true);
    }
    
         
    {
        stack<char> test;
        test.push('a');
        test.pop();
        
        assert(test.empty() == true);
    }   

     {
        stack<char> test;
        test.push('c');
        test.push('a');
        test.pop();
        
        assert(test.empty() == false);
        assert(test.top() == 'c');
    }          
    {
        stack<String> test;
        test.push("Abc");
        test.pop();
        
        assert(test.empty() == true);
    }


            
    {
        stack<String> test;
        test.push("Abc");
        test.push("123");
        test.pop();
        
        assert(test.empty() != true);
    }


}
