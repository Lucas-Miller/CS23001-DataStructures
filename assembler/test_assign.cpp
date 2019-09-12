#include "stack.hpp"
#include <cassert>
#include <iostream>
#include "../string/string.hpp"
int main() {
    
    {
        stack<int> test;
        test.push(1);
        
        stack<int> two;
        
        two = test;
        
        assert(test.empty() == false);
        assert(test.top() == 1);
        
        assert(two.empty() == false);
        assert(two.top() == 1);
    }
   

    {
        stack<char> test;
        test.push('a');
        
        stack<char> two;
        
        two = test;
        
        assert(test.empty() == false);
        assert(test.top() == 'a');
        
        assert(two.empty() == false);
        assert(two.top() == 'a');
    }



    {
        stack<char> test;
        test.push('b');
        
        stack<char> two;
        
        two = test;
        
        assert(test.empty() == false);
        assert(test.top() != 'a');
        
        assert(two.empty() == false);
        assert(two.top() == 'b');
    }


    {
        stack<String> test;
        test.push("abcd");
        
        stack<String> two;
        
        two = test;
        
        assert(test.empty() == false);
        assert(test.top() == "abcd");
        
        assert(two.empty() == false);
        assert(two.top() == "abcd");
        assert(two.top() == test.top());
    }
 
    {
        stack<String> test;
        test.push("12345");
        
        stack<String> two;
        
        two = test;
        
        assert(test.empty() == false);
        assert(test.top() == "12345");
        
        assert(two.empty() == false);
        assert(two.top() == "12345");
        assert(two.top() == test.top());
    }

    {
        stack<String> test;
        test.push("12345");
        test.push("abcd");
        stack<String> two;
        
        two = test;
        
        assert(test.empty() == false);
        assert(test.top() == "abcd");
        
        assert(two.empty() == false);
        assert(two.top() == "abcd");
        assert(two.top() == test.top());
    }





    {
        stack<String> test;
        test.push("12345 0sda");
        stack<String> two;
        
        two = test;
        
        assert(test.empty() == false);
        assert(test.top() == "12345 0sda");
        
        assert(two.empty() == false);
        assert(two.top() == "12345 0sda");
        assert(two.top() == test.top());
    }









}
