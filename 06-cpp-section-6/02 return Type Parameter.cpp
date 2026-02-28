#include <iostream>

// Function Declarations (Prototypes)
void printHalo();
void printNum(int a);
int giveMe10();
int addthese(int num1, int num2);


int main() {

    int num1 = 100;
    int num2 = 150;

    printHalo();
    printNum(1000);

    int give10 = giveMe10();
    std::cout << give10 << std::endl;

    int added = addthese(num1, num2);
    std::cout << "The added value : " << added << std::endl;

    printNum(addthese(num1, num2));

    return 0;
}


// Function Definitions

void printHalo() {
    std::cout << "Haloo ! " << std::endl;
}

void printNum(int a) {
    std::cout << a << std::endl;
}

int giveMe10() {
    return 10;
}

int addthese(int num1, int num2) {
    return num1 + num2;
}