#include "string.hpp"
#include <cassert>


//Tests: FindString


int main() {


    {
        String one = "1aapetest";
        
        int result = one.findstr(0, "ape"); 
        std::cout << "FindString Result: " << result << std::endl;
        
        assert(one.findstr(0, "ape") == 2);
    
    }




    {
        String one = "123apetest";
        
        int result = one.findstr(0, "ape"); 
        std::cout << "FindString Result: " << result << std::endl;
        
        assert(one.findstr(0, "ape") == 3);
    
    }


{
        String one = "pinepinetrees";
        
        int result = one.findstr(0, "pine"); 
        std::cout << "FindString Result: " << result << std::endl;
        
        assert(one.findstr(0, "pine") == 0);
    
    }


{
        String one = "pinepinetrees";
        
        int result = one.findstr(0, "pintglass"); 
        std::cout << "FindString Result: " << result << std::endl;
        
        assert(one.findstr(0, "pintglass") == -1);
    
    }





    {
        String one = "pinetrees";
        
        int result = one.findstr(0, "pine"); 
        std::cout << "FindString Result: " << result << std::endl;
        
        assert(one.findstr(0, "pine") == 0);
    
    }





    {
        String one = "ofapejkluy";
        
        int result = one.findstr(0, "ape"); 
        std::cout << "FindString Result: " << result << std::endl;
        
        assert(one.findstr(0, "ape") == 2);
    
    }











    {
       String one = "helloworld";
        String two = "world";
        
        int result = one.findstr(0, two); 
        std::cout << "FindString Result: " << result << std::endl;
        
        assert(result == 5);
    
    }

 
    {
        String one = "helloworld";
        String two = "hello";
        
        int result = one.findstr(0, two); 
        std::cout << "FindString Result: " << result << std::endl;
        
        assert(result == 0);
    
    }  


    {
        String one = "helloworld";
        String two = "rld";
        
        int result = one.findstr(3, two); 
        std::cout << "FindString Result: " << result << std::endl;
        
        assert(result == 7);
    
    }



    {
        String one = "01apefgh";
        String two = "ape";
        
        int result = one.findstr(2, two);
        std::cout << "FindString Result: " << result << std::endl;
        
        assert(result == 2);
    
    }



    {
        String a = "cdpapefgh";
        //String two = "ape";
        
        int result = a.findstr(0, "ape"); 
        std::cout << "FindString Result: " << result << std::endl;
        
        assert(a.findstr(0, "ape") == 3);
    
    }




    {
        String a = "apeapefgh";
        //String two = "ape";
        
        int result = a.findstr(3, "ape"); 
        std::cout << "FindString Result: " << result << std::endl;
        
        assert(a.findstr(3, "ape") == 3);
    
    }





    {
        String one = "012345ape6789efgh";
        //String two = "ape";
        
        int result = one.findstr(11, "ape"); 
        std::cout << "FindString Result: " << result << std::endl;
        
        assert(result == -1);
    
    }

 
    std::cout << "Done Testing FindString" << std::endl;
}
