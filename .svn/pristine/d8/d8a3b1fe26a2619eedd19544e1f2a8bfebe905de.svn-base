#include <iostream>
#include <vector>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include "stack.hpp"
#include "../string/string.hpp"


int main(int argc, char *argv[]) {

    std::ifstream in(argv[1]);
    if(!in) {                      
        std::cerr << "Couldn\'t open " << argv[1] << ", exiting.\n"; 
        exit(1);
    }

    if(argc == 0) {
        std::cerr << "Usage: " << argv[1] << " file_name\n"; 
        exit(1);
    }
    
    String temp;
    stack<String> post;
    while(!in.eof()) {
        in >> temp;
        post = post.postfix(temp);
        while(post.tos != 0) {
            if(post.tos->data != ' ')
                std::cout << post.pop();
            else
                post.tos = post.tos->next;
        }
        std::cout << std::endl;
    }
    return 0;
}
