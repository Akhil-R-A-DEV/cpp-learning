#include <iostream>
int main() {
	char grade;

	std::cout << "Enter your grade (A - F) : ";
	std::cin >> grade;

	switch (grade) {
	case'A':
	case'a':
		std::cout << "Great job" << std::endl;
		break;
	case'B':
	case'b':
		std::cout << "Good job" << std::endl;
		break;
	case'C':
	case'c':
		std::cout << "You need to try hard" << std::endl;
		break;
	case'D':
	case'd':
		std::cout << "You need improvement" << std::endl;
		break;
	case'E':
	case'e':
		std::cout << "You were almost failed" << std::endl;
		break;
	case'F':
	case'f':
		std::cout << "You failed" << std::endl;
		break;
	default:
		std::cout << "Please enter a valid grade" << std::endl;
	}

	return 0;
}