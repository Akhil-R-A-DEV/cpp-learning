#include <iostream>

int main() {

	enum Birection {UP,DOWN,LEFT,RIGHT,STAND};

	Birection myDirection = STAND;

	std::cout << myDirection << std::endl;

	if (myDirection == UP) {
		std::cout << "UP!" << std::endl;
	}
	else if (myDirection == DOWN) {
		std::cout << "DOWN!" << std::endl;
	}
	else if (myDirection == LEFT) {
		std::cout << "LEFT!" << std::endl;
	}
	else if (myDirection == RIGHT) {
		std::cout << "RIGHT!" << std::endl;
	}
	else if (myDirection == STAND) {
		std::cout << "STAND!" << std::endl;
	}

	return 0;
}