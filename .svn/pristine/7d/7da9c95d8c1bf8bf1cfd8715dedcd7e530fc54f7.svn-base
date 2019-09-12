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
        String  str('A');

        // VERIFY
        assert(str == "A");
    }



    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  str('a');

        // VERIFY
        assert(str == "a");
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

    
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  str('a');
        std::cout << "Length: " << str.length() << std::endl;
        std::cout << "Capacity: " << str.capacity() << std::endl;
        String strTwo("a");
        std::cout << "Length: " << strTwo.length() << std::endl;
        std::cout << "Capacity: " << strTwo.capacity() << std::endl;
        // VERIFY
        assert(str == strTwo);
    }

    // ADD ADDITIONAL TESTS AS NECESSARY
    
    std::cout << "Done testing Char Ctor." << std::endl;

}

