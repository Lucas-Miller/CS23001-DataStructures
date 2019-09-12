//  String class test program
//
//  Tests: Equality
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
        String  str("a");
        String strTwo("a");
        // TEST
        bool result = (str == strTwo);

        // VERIFY
        assert(str    == "a");
        assert(strTwo == "a");
        assert(result == true);
    }


    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("a");
        String strTwo("b");
        // TEST
        bool result = (str == strTwo);

        // VERIFY
        assert(str    == "a");
        assert(strTwo == "b");
        assert(result != true);
    }


    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("a1b23c");
        String strTwo("a1b23c");
        // TEST
        bool result = (str == strTwo);

        // VERIFY
        assert(str    == "a1b23c");
        assert(strTwo == "a1b23c");
        assert(result == true);
    }


    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("100");
        String strTwo("a");
        // TEST
        bool result = (str == strTwo);

        // VERIFY
        assert(str    == "100");
        assert(strTwo == "a");
        assert(result == false);
    }

    // ADD ADDITIONAL TESTS AS NECESSARY
    
    std::cout << "Done testing Equality." << std::endl;
}

