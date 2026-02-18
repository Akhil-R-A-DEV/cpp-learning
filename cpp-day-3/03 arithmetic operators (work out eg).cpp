#include <iostream>

int main() {

	int myNum = 10;
	myNum += 5;
	myNum *= 2;
	myNum *= 2;
	myNum *= 2;

	std::cout << "final myNum : "<< myNum << std::endl;

	return 0;
}