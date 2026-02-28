#include <iostream>

int squareFunction(int num);

int main() {

	int num = 8;
	int squareOfNum = squareFunction(num);
	std::cout << "the square of " << num << " is : " << squareOfNum << std::endl;
	return 0;
}

int squareFunction(int num) {
	int squareOfNum = num * num ;
	return squareOfNum;
}