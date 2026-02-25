/*
create an intiger array object of size 10
use regular for loop to populate the array with multiple of 2 from 0 to 9
donot manually store the numbers
concider using the loop contril variable for your advantage 
also use the size() member function (method) to your advantage when using regular for loop 
use range-based for loop for printing out the element you stored
*/

#include <iostream>
#include <array>
int main() {

	std::array<int, 10> myArray{};

	for (int i = 0; i < myArray.size(); i++) {
		myArray[i] = i * 2;
	}

	for (int a : myArray) {
		std::cout << a << std::endl;
	}

	return 0;
}