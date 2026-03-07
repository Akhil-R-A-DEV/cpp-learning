#include<iostream>

int main() {

	double myDouble = 3.14;
	double* myDoublePtr = &myDouble;

	std::cout << "myDouble : " << myDouble << std::endl;
	std::cout << "myDoublePtr : " << myDoublePtr << std::endl;
	std::cout << "myDoublePtr Data : " << *myDoublePtr << std::endl;
	*myDoublePtr = 3.11111;
	std::cout << "myDoublePtr New Data : " << *myDoublePtr << std::endl;

	return 0;
}