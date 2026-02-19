#include<iostream>
int main() {
	// && logical and operator
	// || logical or operator
	// ! not operator
	std::cout << std::boolalpha;
	bool raining = true;
	bool cold = true;

	//bool raining = false;
	//bool cold = true;

	//bool raining = true;
	//bool cold = false;

	//bool raining = false;
	//bool cold = false;

	std::cout << "and : " << (raining && cold) << std::endl;
	std::cout << "or : " << (raining || cold) << std::endl;
	std::cout << "not : " << (!raining) << std::endl;
	return 0;
}