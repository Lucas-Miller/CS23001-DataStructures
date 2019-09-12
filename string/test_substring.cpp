#include "string.hpp"
#include <cassert>

int main(){

    {
        String one = "gabc";
        String result = one.substr(0,0);
        std::cout << "String length: " << result.length() << std::endl;
        std::cout << "String Capacity: " << result.capacity() << std::endl;
        std::cout << "Substr Result: " << result << std::endl;
        assert(one.substr(0,0) == "g");
    }



    {
        String one = "data test";
        String result = one.substr(4,8);
        std::cout << "String length: " << result.length() << std::endl;
        std::cout << "String Capacity: " << result.capacity() << std::endl;
        std::cout << "Substr Result: " << result << std::endl;
        assert(one.substr(4,8) == " test");
    }

    {
        String one = "data test";
        String result = one.substr(2,6);
        std::cout << "String length: " << result.length() << std::endl;
        std::cout << "String Capacity: " << result.capacity() << std::endl;
        std::cout << "Substr Result: " << result << std::endl;
        assert(one.substr(2,6) == "ta te");
    }



    {
        String one = "adsfegfrhgtldjfejalasdasd";
        String result = one.substr(17,18);
        std::cout << "String length: " << result.length() << std::endl;
        std::cout << "String Capacity: " << result.capacity() << std::endl;
        std::cout << "Substr Result: " << result << std::endl;
        assert(one.substr(17,18) == "al");
    }

    {
        String one = 'g';
        String result = one.substr(0,0);
        std::cout << "String length: " << result.length() << std::endl;
        std::cout << "String Capacity: " << result.capacity() << std::endl;
        std::cout << "Substr Result: " << result << std::endl;
        assert(one.substr(0,0) == "g");
    }


    {
        String one("g");
        String result = one.substr(0,0);
        std::cout << "String length: " << result.length() << std::endl;
        std::cout << "String Capacity: " << result.capacity() << std::endl;
        std::cout << "Substr Result: " << result << std::endl;
        assert(result == "g");
    }
    {
        String one = "agb";
        std::cout << "Starting String length: " << one.length() << "and cap: " << one.capacity() << std::endl;
        std::cout << "String One at [0]: " << one[0] << std::endl;
        String result = one.substr(0,0);
        std::cout << "String length: " << result.length() << std::endl;
        std::cout << "String Capacity: " << result.capacity() << std::endl;
        std::cout << "THIS ONE Substr Result: " << result << std::endl;
        assert(result == "a");
    
    }



    {
        
        String one = "gbc";
        String result = one.substr(0,0);
        std::cout << "String length: " << result.length() << std::endl;
        std::cout << "String Capacity: " << result.capacity() << std::endl;
        std::cout << "Substr Result: " << result << std::endl;
        assert(one.substr(0,0) == "g"); 
        assert(one.substr(0,0) == "g");
    }


    {
        String one = "gba";
        String result = one.substr(1,1);
        std::cout << "String length: " << result.length() << std::endl;
        std::cout << "String Capacity: " << result.capacity() << std::endl;
        std::cout << "Substr Result: " << result << std::endl;
        assert(result == "b");
    }
    
    {
        String one = "agb";
        String result = one.substr(0,3);
        std::cout << "String length: " << result.length() << std::endl;
        std::cout << "String Capacity: " << result.capacity() << std::endl;
        std::cout << "Substr Result: " << result << std::endl;
        assert(result == "agb");
    
    
    }



    {
        String one = "gagbcegfe";
        String result = one.substr(2,7);
        std::cout << "String length: " << result.length() << std::endl;
        std::cout << "String Capacity: " << result.capacity() << std::endl;
        std::cout << "Substr Result: " << result << std::endl;
        assert(result == "gbcegf");
    
    
    }





    {
        String one = "gagbcegfe";
        String result = one.substr(2,8);
        std::cout << "String length: " << result.length() << std::endl;
        std::cout << "String Capacity: " << result.capacity() << std::endl;
        std::cout << "Substr Result: " << result << std::endl;
        assert(result == "gbcegfe");
    
    
    }



    {
        String one = "hbdfghijks";
        String result = one.substr(2,5);
        std::cout << "String length: " << result.length() << std::endl;
        std::cout << "String Capacity: " << result.capacity() << std::endl;
        std::cout << "Substr Result: " << result << std::endl;
        assert(result == "dfgh");
    
    }

    {
        String one = "gagbcdgfe";
        String result = one.substr(2,5);
        std::cout << "String length: " << result.length() << std::endl;
        std::cout << "String Capacity: " << result.capacity() << std::endl;
        std::cout << "Substr Result: " << result << std::endl;
        assert(result == "gbcd");
    
    }
   /* 
    {
        String str = "abcdefgh";
        String result1;
        String result2;
        String result3;
        
        result1 = str.substr(0,0);
        result2 = str.substr(0,4);
        
        assert(result1 == "");
        assert(result2 == "abcd");
        
        String strTwo = "Kent State University";
        
        result3 = strTwo.substr(0,10);
        assert(result3 == "Kent State"); 
    }
    */

    std::cout << "Done testing substr" << std::endl;


}
