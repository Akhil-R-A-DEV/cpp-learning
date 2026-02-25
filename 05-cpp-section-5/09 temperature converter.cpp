#include<iostream>
#include <array>

int main() {

	std::array < double , 7 > tempArr ;

	for (int i = 0; i < 7; i++) {
		std::cout << "Enter the temparature in fahrenheit for day " << i + 1 << " : ";
		std::cin >> tempArr[i];
	}

	for (double a : tempArr) {
		std::cout << "Fahrenheit => " << a << "  :  " << "Celsious => " << (a - 32) * 5.0 / 9 << std::endl;
	}

	return 0;
}