#include "string.hpp"
#include <cassert>

int main() {
     
    {
        String testOne = "abcd1423";
        
        int resultOne = testOne.length();
        int resultTwo = testOne.capacity();
        
        std::cout << "length: " << resultOne << std::endl;
        std::cout << "Capacity: " << resultTwo << std::endl;
        assert(resultOne == 8);
        assert(resultTwo == 8);
    
    

    }



  {
        String testOne;
        
        int resultOne = testOne.length();
        int resultTwo = testOne.capacity();
        
        std::cout << "length: " << resultOne << std::endl;
        std::cout << "Capacity: " << resultTwo << std::endl;
        assert(resultOne == 0);
        assert(resultTwo == 0);
    
    

    
    }
    
    
    {
        String testOne = "abcd1423";
        
        int resultOne = testOne.length();
        int resultTwo = testOne.capacity();
        
        std::cout << "length: " << resultOne << std::endl;
        std::cout << "Capacity: " << resultTwo << std::endl;
        assert(resultOne == 8);
        assert(resultTwo == 8);
    
    

    }


    
    {
        String testOne = "ax";
        
        int resultOne = testOne.length();
        int resultTwo = testOne.capacity();
        
        std::cout << "length: " << resultOne << std::endl;
        std::cout << "Capacity: " << resultTwo << std::endl;
        assert(resultOne == 2);
        assert(resultTwo == 2);
    
    

    }








}
