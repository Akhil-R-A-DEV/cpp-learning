#include <iostream>
int main() {

	int age = 10;
	std::cout << "your age is : " << age << std::endl;

	if (age >= 18) {
		std::cout << "you can vote" << std::endl;
	}
	else {
		std::cout << "you can't vote" << std::endl;
	}

	return 0;
}