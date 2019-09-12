//  String class test program
//
//  Tests: Char Ctor
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
        String  str('X');

        // VERIFY
        assert(str == 'X');
    }


    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  str('Z');

        // VERIFY
        assert(str == 'Z');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  str(' ');

        // VERIFY
        assert(str == ' ');
    }



    // ADD ADDITIONAL TESTS AS NECESSARY
    
    std::cout << "Done testing Char Ctor." << std::endl;

}

