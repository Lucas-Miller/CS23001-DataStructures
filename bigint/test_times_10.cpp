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
        bigint bi(3);

        // Test 
        bi = bi.times10(0);
        std::cerr << "Times10 Result: " << bi << std::endl;
        // Verify
        assert(bi == 3);  //Wrong. Will FAIL, fix and add tests cases
    }

    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(3);

        // Test 
        bi = bi.times10(2);
        std::cerr << "Times10 Result: " << bi << std::endl;
        // Verify
        assert(bi == 300);  //Wrong. Will FAIL, fix and add tests cases
    }

    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(300);

        // Test 
        bi = bi.times10(2);
        // Verify
        assert(bi == 30000);  //Wrong. Will FAIL, fix and add tests cases
    } 

    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi("1000000000000");

        // Test 
        bi = bi.times10(2);
        // Verify
        assert(bi == "100000000000000");  //Wrong. Will FAIL, fix and add tests cases
    } 
  
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi("9843642718302843");

        // Test 
        bi = bi.times10(5);
        // Verify
        assert(bi == "984364271830284300000");  //Wrong. Will FAIL, fix and add tests cases
    } 

  
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi("9843642718302843");

        // Test 
        bi = bi.times10(0);
        // Verify
        assert(bi == "9843642718302843");  //Wrong. Will FAIL, fix and add tests cases
    }

    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi("9843642718302843");

        // Test 
        bi = bi.times10(9);
        // Verify
        assert(bi == "9843642718302843000000000");  //Wrong. Will FAIL, fix and add tests cases
    } 
 

    //Add test cases as needed.

    std::cout << "Done testing times_10" << std::endl;
}

