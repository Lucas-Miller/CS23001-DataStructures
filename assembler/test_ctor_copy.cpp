#include "stack.hpp"
#include <cassert>
#include <iostream>
#include "../string/string.hpp"
int main() {
    //Test copy ctor
    
    {
        stack<int> test;
        test.push(1);
        stack<int> copyTest(test);
        
        assert(test.top() == copyTest.top()); 
    }



    {
        stack<char> test;
        test.push('a');
        stack<char> copyTest(test);
        
        assert(test.top() == copyTest.top()); 
    }


    {
        stack<char> test;
        test.push('b');
        test.push('a');
        stack<char> copyTest(test);
        
        assert(test.top() == copyTest.top()); 
    }

    {
        stack<int> test;
        test.push(10000);
        test.push(2);
        stack<int> copyTest(test);
        
        assert(test.top() == copyTest.top()); 
    }


    {
        stack<String> test;
        test.push("Abc");
        test.push("def");
        stack<String> copyTest(test);
        
        assert(test.top() == copyTest.top()); 
    }


    {
        stack<String> test;
        test.push("Abc");
        test.push("def");
        test.push("1234224");
        stack<String> copyTest(test);
        
        assert(test.top() == copyTest.top()); 
    }


    {
        stack<String> test;
        test.push("Abc");
        test.push("def");
        test.push("1234224");
        test.push("999999");
        stack<String> copyTest(test);
        
        assert(test.top() == copyTest.top()); 
    }


}
