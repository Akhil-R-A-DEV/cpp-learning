#include <iostream>

int main() {
	// + Addition
	// - subtraction
	// * multiplication
	// / division
	// % modulous 

	// +=
	// -=
	// *=
	// /=
	// %=

	int a;
	int b;
	int addition;
	int subtraction;
	int multiplication;
	int division;
	int modulous;
	
	a = 100;
	b = 7;
	addition = a + b;
	subtraction = a - b;
	multiplication = a * b;
	division = a / b;
	modulous = a % b;

	std::cout << "Sum : " << addition << std::endl;
	std::cout << "Difference : " << subtraction << std::endl;
	std::cout << "Product : " << multiplication << std::endl;
	std::cout << "Quotient : " << division << std::endl;
	std::cout << "Remainder : " << modulous << std::endl;

	int incriDecri = 5;
	incriDecri++;
	std::cout << "increment operator : " << incriDecri << std::endl;

	incriDecri--;
	std::cout << "decrement operator : " << incriDecri << std::endl;

	int value = 100;
	value += 10;
	std::cout << "value : " << value << std::endl;
	
	return 0;
}