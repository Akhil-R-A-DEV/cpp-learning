#include <iostream>
#include <array>

int main() {

	//std::array<int, 5> myIntArray;
	//std::array<int, 5> myIntArray{0,0,0,0,0};
	//std::array<int, 5> myIntArray{};
	std::array<int, 5> myIntArray{1,2};

	myIntArray[0] = 8;
	myIntArray[1] = 5;
	myIntArray[2] = 2;
	myIntArray[3] = 7;
	myIntArray[4] = 4;

	for (int a : myIntArray) {
		std::cout << a << std::endl ;
	}

	std::cout << "size of array : " << myIntArray.size() << std::endl;

	return 0;
}