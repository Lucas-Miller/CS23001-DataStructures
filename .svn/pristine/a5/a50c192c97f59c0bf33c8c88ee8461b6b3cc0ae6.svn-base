// bigint Test Program
//
// Tests:  times_10, uses ==
//
#include <iostream>
#include <cassert>
#include "bigint.hpp"

//===========================================================================
int main () {
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(12);

        // Test 
        bi = bi.timesDigit(1);
        std::cout << "RESULT: " << bi << std::endl;

        // Verify
        assert(bi == 12);  //Will FAIL, fix and add test cases.
    
    }
    
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(12);

        // Test 
        bi = bi.timesDigit(2);
        std::cout << "RESULT: " << bi << std::endl;

        // Verify
        assert(bi == 24);  //Will FAIL, fix and add test cases.
    
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(1246);

        // Test 
        bi = bi.timesDigit(7);
        std::cout << "RESULT: " << bi << std::endl;

        // Verify
        assert(bi == 8722);  //Will FAIL, fix and add test cases.
    
    }
    
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(99234);

        // Test 
        bi = bi.timesDigit(9);
        std::cout << "RESULT: " << bi << std::endl;

        // Verify
        assert(bi == 893106);  //Will FAIL, fix and add test cases.
    
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi("126983233223");

        // Test 
        bi = bi.timesDigit(6);
        std::cout << "RESULT: " << bi << std::endl;

        // Verify
        assert(bi == "761899399338");  //Will FAIL, fix and add test cases.
    
    }

    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi("99992929492949249");

        // Test 
        bi = bi.timesDigit(0);
        std::cout << "RESULT: " << bi << std::endl;

        // Verify
        assert(bi == 0);  //Will FAIL, fix and add test cases.
    
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi("999999999");

        // Test 
        bi = bi.timesDigit(1);
        std::cout << "RESULT: " << bi << std::endl;

        // Verify
        assert(bi == "999999999");  //Will FAIL, fix and add test cases.
    
    }
    //Add test cases as needed.
    
    std::cout << "Done testing bigint * digit" << std::endl;
}
