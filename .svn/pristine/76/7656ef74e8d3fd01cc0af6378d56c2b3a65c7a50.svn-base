#include "string.hpp"
#include <cassert>


//Tests: FindChar


int main() {

    {
        String one = "abcde";
        char two = 'd';
        
        int result = one.findchar(two, 0); 
        std::cout << "FindChar Result: " << result << std::endl;
        
        assert(result == 3);
    
    }



    {
        String one = "abcde";
        char two = 'c';
        
        int result = one.findchar(two, 0); 
        std::cout << "FindChar Result: " << result << std::endl;
        
        assert(result == 2);
    
    }

    {
        String one = "abcde1234";
        char two = '3';
        
        int result = one.findchar(two, 3); 
        std::cout << "FindChar Result: " << result << std::endl;
        
        assert(result == 7);
    
    }

    
    std::cout << "Done Testing FindChar" << std::endl;
}
