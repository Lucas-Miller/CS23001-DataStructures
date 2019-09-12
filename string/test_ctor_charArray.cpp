//  String class test program
//
//  Tests: Char Array Ctor
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

        // TEST
        //char x[5] = {'a','b','c','d','e'};
        String  str("abcde");

        // VERIFY
        assert(str == "abcde");
    }



    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        //char x[5] = {'a','b','c','d','e'};
        String  a("g");
        String b('g');

        // VERIFY
        assert(a == b);
    }





    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        char x[8] = {'a','b','c','d','e','1','2','9'};
        String  str(x);

        // VERIFY
        assert(str == String(x));
    }

    std::cout << "Done testing Char Array Ctor" << std::endl;
    
    // ADD ADDITIONAL TESTS AS NECESSARY
    

}

