#include <iostream>

// Function Declarations

void passVal(int num);
void passRef(int& num);



int main() {

    int initialNum = 20;

    //  Pass by Value 
    std::cout << "pass by value\n" << std::endl;

    std::cout << "before" << std::endl;
    std::cout << initialNum << std::endl;

    passVal(initialNum);

    std::cout << "after" << std::endl;
    std::cout << initialNum << std::endl;
    std::cout << std::endl;


    //  Pass by Reference 
    std::cout << "pass by reference" << std::endl;
    std::cout << std::endl;

    std::cout << "before" << std::endl;
    std::cout << initialNum << std::endl;

    passRef(initialNum);

    std::cout << "after" << std::endl;
    std::cout << initialNum << std::endl;

    return 0;
}

// Function Definitions

// Pass by Value (original variable not changed)
void passVal(int num) {
    num = 100;
    std::cout << num << std::endl;
}

// Pass by Reference (original variable changed)
void passRef(int& num) {
    num = 100;
    std::cout << num << std::endl;
}