#include <iostream>

int main() {

	const int ARRAY_LENGTH = 5;
	int myArray[ARRAY_LENGTH];

	myArray[0] = 10;
	myArray[1] = 9;
	myArray[2] = 8;
	myArray[3] = 7;
	myArray[4] = 6;

	for (int i = 0; i < ARRAY_LENGTH; i++) {
		std::cout << i << std::endl;
	}

	return 0;
}