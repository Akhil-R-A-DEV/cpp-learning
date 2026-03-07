#include <iostream>

int main() {

	const int ARRAY_SIZE = 5;

	int arrSize = 0;
	std::cout << "size of Array : ";
	std::cin >> arrSize;

	int* myArray =new int [arrSize];

	for (int i = 0; i < arrSize; i++) {
		myArray[i] = i * 2;
	}

	for (int i = 0; i < arrSize; i++) {
		std::cout << myArray[i] << std::endl;
	}

	delete[] myArray;
	myArray = nullptr;

}