#include <iostream>

int main() {

	const int ARR_LENGTH = 10;
	int myArr[ARR_LENGTH];

	for (int i = 0; i < ARR_LENGTH; i++) {
		myArr[i] = i+1;
	}

	for (int contentsArr : myArr) {
		std::cout << contentsArr <<std::endl;
	}

	return 0;
}