#include <iostream>

int main() {

	int nums;
	int sum = 0;
	std::cout << "enter a +ve number (-Ve number to exit and see the sum) : ";
	std::cin >> nums;

	while (nums >= 0) {
		sum += nums;
		std::cout << "enter the number : ";
		std::cin >> nums;
	}
	std::cout << "the sum is : " << sum << std::endl;

	return 0;
}