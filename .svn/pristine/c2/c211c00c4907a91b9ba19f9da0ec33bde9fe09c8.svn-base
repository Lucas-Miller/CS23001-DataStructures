//  String class test program
//
//  Tests: Concat Test
//

#include "string.hpp"
#include <cassert>
#include <iostream>

//===========================================================================
int main ()
{
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  strOne("abcde");
        String strTwo("12345");

        // TEST
        String result = strOne + strTwo;
        std::cout << "Concat Resul: " << result << std::endl;

        // VERIFY
        assert(strOne    == "abcde");
        assert(strTwo == "12345");
        assert(result == "abcde12345");
    }

    // ADD ADDITIONAL TESTS AS NECESSARY
    
    std::cout << "Done testing Concat." << std::endl;
}

