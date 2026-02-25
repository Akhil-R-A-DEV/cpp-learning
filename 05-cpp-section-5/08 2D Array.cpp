#include <iostream>
int main() {

	int myArr[2][3] = {
		{1,2,3},
		{4,5,6}
	};

	std::cout << myArr[0][2] << std::endl;

	myArr[0][2] = 14;
	std::cout << myArr[0][2] << std::endl;

	std::cout << std::endl;

	for (int row = 0; row < 2; row++) {
		for (int col = 0; col < 3; col++) {
			std::cout << myArr[row][col] << " ";
		}
		std::cout << std::endl;
	}

	std::cout << std::endl;

	for (int rowRev = 1; rowRev >= 0; rowRev--) {
		for (int colRev = 2; colRev >= 0; colRev--) {
			std::cout << myArr[rowRev][colRev] << " ";
		}
		std::cout << std::endl;
	}

	return 0;
}