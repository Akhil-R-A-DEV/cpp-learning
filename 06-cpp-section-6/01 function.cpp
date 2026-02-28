#include <iostream>

void myFunc(); // prototyping

int main() {
	
	myFunc(); //function call
	myFunc();
	myFunc();
	myFunc();

	return 0;
}

void myFunc() { // function definition
	std::cout << "Halo this is a function" << std::endl;
}