// bigint Test Program
//
// Tests:  multiply, uses ==
//
#include <iostream>
#include <cassert>
#include "bigint.hpp"

//===========================================================================
int main () {
    
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(0);
        bigint right(0);
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   == 0);
        assert(right  == 0);
        assert(result == 0);
    }
    
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(1);
        bigint right(1);
        bigint result;
        
        // Test 
        result = left * right;
        std::cout << "Multiply Result: " << result << std::endl; 
        // Verify
        assert(left   == 1);
        assert(right  == 1);
        assert(result == 1);
    }
    
     {
        //------------------------------------------------------
        // Setup fixture
        bigint left(1000000);
        bigint right(2);
        bigint result;
        
        // Test 
        result = left * right;
        std::cout << "Multiply Result: " << result << std::endl;
        // Verify
        assert(left   == 1000000);
        assert(right  == 2);
        assert(result == 2000000);
    }

     {
        //------------------------------------------------------
        // Setup fixture
        bigint left("1874326745632");
        bigint right("1234567890456");
        bigint result;
        
        // Test 
        result = left * right;
        std::cout << "Multiply Result: " << result << std::endl;
        // Verify
        assert(left   == "1874326745632");
        assert(right  == "1234567890456");
        assert(result == "2313983616380157952488192");
    }   

 
     {
        //------------------------------------------------------
        // Setup fixture
        bigint left("0");
        bigint right("1");
        bigint result;
        
        // Test 
        result = left * right;
        std::cout << "Multiply Result: " << result << std::endl;
        // Verify
        assert(left   == "0");
        assert(right  == "1");
        assert(result == "0");
    }   


     {
        //------------------------------------------------------
        // Setup fixture
        bigint left("0");
        bigint right("1");
        bigint result;
        
        // Test 
        result = left * right;
        std::cout << "Multiply Result: " << result << std::endl;
        // Verify
        assert(left   == "0");
        assert(right  == "1");
        assert(result == "0");
    }  

     {
        //------------------------------------------------------
        // Setup fixture
        bigint left("9999999999999999999");
        bigint right(100);
        bigint result;
        
        // Test 
        result = left * right;
        std::cout << "Multiply Result: " << result << std::endl;
        // Verify
        assert(left   == "9999999999999999999");
        assert(right  == 100);
        assert(result == "999999999999999999900");
    } 

    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(0);
        bigint right(0);
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   == 0);
        assert(right  == 0);
        assert(result == 0);
    }
    
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(1);
        bigint right(0);
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   == 1);
        assert(right  == 0);
        assert(result == 0);
    }
    
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(0);
        bigint right(1);
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   == 0);
        assert(right  == 1);
        assert(result == 0);
    }
    

        //------------------------------------------------------

 
    //Add test cases as needed.

    std::cout << "Done testing multiply" << std::endl;
}
