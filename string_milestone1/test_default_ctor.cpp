//  String class test program
//
//  Tests: Default Ctor
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
        String  str;

        // VERIFY
        assert(str == '\0');
    }

    // ADD ADDITIONAL TESTS AS NECESSARY
    
    std::cout << "Done testing Default Ctor." << std::endl;

}

