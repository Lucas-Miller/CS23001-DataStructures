#include <iostream>

    
int fib(int n) {
    if (n == 0)
        return 0;

    if (n == 1)
        return 1;

    return fib(n-1)+fib(n-2);
}  
    
        

//Tail recursion, function is called last or is executed last
//

int main() {
    std::cout << "enter a num: " << std::endl;
    int num;
    std::cin >> num;
    int i = 0;
    while(i <= num) {
        std::cout << fib(i) << ", ";
        ++i;
    }
}
