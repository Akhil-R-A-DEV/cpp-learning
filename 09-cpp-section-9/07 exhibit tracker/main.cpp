#include<iostream>
#include "Exhibit.h"
#include <string>
int main() {

	const int arrSize = 3;

	Exhibit* arrPtr[arrSize];

	arrPtr[0] = new Exhibit("ex1", 1, 1.5);
	arrPtr[1] = new Exhibit("ex2", 2, 2.2);
	arrPtr[2] = new Exhibit("ex3", 3, 3.3);


	for (int i = 0; i < arrSize;i++) {
		std::cout << "Name : " << arrPtr[i]->getName() << std::endl;
		std::cout << "Room Number : " << arrPtr[i]->getRoomNumber() << std::endl;
		std::cout << "Display Size : " << arrPtr[i]->gerDisplaySize() << std::endl;

		std::cout << std::endl;
	}

	for (int i = 0; i < arrSize; i++) {
		delete arrPtr[i];
		arrPtr[i] = nullptr;
	}

	return 0;
}