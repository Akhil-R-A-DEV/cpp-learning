#include <iostream>
int main() {
	int age;
	char gender;

	std::cout << "whats your age : ";
	std::cin >> age;
	std::cout << "whats your gender (F/M) : ";
	std::cin >> gender;

	if ((age >= 60) && (gender == 'f') || (gender == 'F')) {
		std::cout << "You are eligible" << std::endl;
	}
	else {
		std::cout << "You are not eligible" << std::endl;
	}

	return 0;
}