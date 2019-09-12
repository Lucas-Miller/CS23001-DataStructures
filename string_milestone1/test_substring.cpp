#include "string.hpp"
#include <cassert>

int main(){


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


    std::cout << "Done testing substr" << std::endl;


}
