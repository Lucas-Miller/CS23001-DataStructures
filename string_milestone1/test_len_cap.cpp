#include "string.hpp"
#include <cassert>

int main() {
    String One = "abcde";
    
    int resultOne = One.length();
    int resultTwo = One.capacity();
    std::cout << "length: " << resultOne << std::endl;
    std::cout << "Capacity: " << resultTwo << std::endl;
    assert(resultOne == 5);
    assert(resultTwo == 255);

}
