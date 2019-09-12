#include "string.hpp"
#include <cassert>


//Tests: LessThan


int main() {

    {
        String one = 'a';
        String two = 'b';
        
        bool result = one < two;
        std::cout << "LessThan Result: " << result << std::endl;
        
        assert(result == true);
    
    
    
    }



    {
        String one = 'a';
        String two = 'b';
        
        bool result = two < one;
        std::cout << "LessThan Result: " << result << std::endl;
        
        assert(result == false);
    
    
    
    }


    {
        String one = "abcd";
        String two = "bcde";
        
        bool result = two < one;
        std::cout << "LessThan Result: " << result << std::endl;
        
        assert(result == false);
    
    
    }





    {
        String one;
        String two = 'b';
        
        bool result = one < two;
        std::cout << "LessThan Result: " << result << std::endl;
        
        assert(result == true);
    
    
    
    }



    {
        String one;
        String two = "bcdasdwrwasws";
        
        bool result = one < two;
        std::cout << "LessThan Result: " << result << std::endl;
        
        assert(result == true);
    
    
    
    }
    
    std::cout << "Done Testing LessThan" << std::endl;
}
