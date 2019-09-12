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
        String str ="a";
        //std::cout << str << std::endl;
        std::cout << "Length: " << str.length() << std::endl;
        std::cout << "Capacity: " << str.capacity() << std::endl;
            
        String strTwo("b");

        std::cout << "Length: " << str.length() << std::endl;
        std::cout << "Capacity: " << str.capacity() << std::endl;

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



    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String a("g");
        String b('g');
        String c = "g";
        String d = "g";
        // TEST
        bool result = (a == "g");

        // VERIFY
        assert(a == 'g');
        assert(a == "g");
        assert(b == "g");
        assert(b == 'g');

        assert(c == 'g');
        assert(c == "g");
        assert(d == "g");
        assert(d == 'g');

        assert(a == "g");
        assert(result == true);
    }



    // ADD ADDITIONAL TESTS AS NECESSARY
    
    std::cout << "Done testing Equality." << std::endl;
}

