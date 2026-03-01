#include <iostream>

// Global variable
int globalint = 100;

// Function declaration (prototyping)
void myFunction(int a);

int main()
{
    // localvarInsideFuncton = 10; 
    // Error: local variable of myFunction (not accessible here)

    // staticVarInsideFunction = 11; 
    // Error: static variable inside myFunction (scope limited to function)

    myFunction(10);
    myFunction(11);
    myFunction(12);
    myFunction(13);

    return 0;
}


// Function definition
void myFunction(int a)
{
    std::cout << "a : " << a << std::endl;

    // Local variable (resets every call)
    int localvarInsideFuncton = 80;
    std::cout << "localvarInsideFuncton : " << localvarInsideFuncton << std::endl;

    localvarInsideFuncton++;
    std::cout << "localvarInsideFuncto ++ : "
        << localvarInsideFuncton << std::endl;


    // Global variable (shared across program)
    std::cout << "globalint : " << globalint << std::endl;

    globalint++;
    std::cout << "globalint ++ : " << globalint << std::endl;


    // Static local variable (remembers value)
    static int staticVarInsideFunction = 96;
    std::cout << "staticVarInsideFunction : "
        << staticVarInsideFunction << std::endl;

    staticVarInsideFunction++;
    std::cout << "staticVarInsideFunction ++ : "
        << staticVarInsideFunction << std::endl;

    std::cout << std::endl;
}