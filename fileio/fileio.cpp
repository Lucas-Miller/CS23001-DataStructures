#include <iostream>
#include <fstream>

void fileioRead() {
    std::ifstream file ("fileio-text.txt");
    if(!file.is_open()) {
        std::cout << "Unable to open file" << std::endl;
    }
    else {
        char ch;
        file.get(ch);
        while(ch != ' '){
            std::cout << ch;
            file.get(ch);
        }
    }
    std::cout << std::endl;
    file.close();
}

void fileIoAdd() {
    std::ifstream file("fileio-data-1.txt");
    if(!file.is_open()) {
        std::cout << "Unable to open file" << std::endl;
    }
    
    if(file.is_open()) {
        int lhs, rhs;
        char ch;
        if(!file.eof())
            file >> lhs;
        if(!file.eof())
            file.get(ch);
        if(!file.eof())
            file >> rhs;
        std::cout << rhs + lhs << std::endl;
        
    }
    file.close();
}

int main() {
    fileioRead();
    fileIoAdd();
}
