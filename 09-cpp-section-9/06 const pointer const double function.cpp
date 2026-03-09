#include <iostream>

void ncp2ncd(const double* const doublePtr);

int main() {

	double* doubleVal = new double(3.123);

	ncp2ncd(doubleVal);

	delete doubleVal;
	doubleVal = nullptr;

	return 0;
}

void ncp2ncd(const double* const doublePtr) {
	
	//*doublePtr = 1.25;
	//doublePtr = new double(1.235);

	std::cout << "doublePtr : " << *doublePtr << std::endl;

}