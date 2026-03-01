#include <iostream>
#include <string>

// Function declarations (Function Overloading)
int getResult(int a, int b);
std::string getResult(std::string a, std::string b);
int getResult(int a);


int main()
{
    // Sum of two numbers
    std::cout << "sum : "<< getResult(5, 8)<< std::endl;

    // Combine two strings (Full name)
    std::cout << "full name : "<< getResult("abcd", "efgh") << std::endl;

    // Cube of a number
    std::cout << "cube : " << getResult(3) << std::endl;

    return 0;
}


// Function definitions

// Overload 1: Sum of two integers
int getResult(int a, int b)
{
    return a + b;
}


// Overload 2: Concatenate two strings
std::string getResult(std::string a, std::string b)
{
    return a + " " + b;
}


// Overload 3: Cube of a number
int getResult(int a)
{
    return a * a * a;
}