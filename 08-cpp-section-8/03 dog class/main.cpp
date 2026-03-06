#include <iostream>
#include "Dog.h"
#include <stdexcept>
int main() {

	try {
		Dog b1("breed1");
		Dog b2("breed2");
		Dog b3("breed3");
		//Dog b4("poodle");

		std::cout << b1.getBreed() << std::endl;
		std::cout << b2.getBreed() << std::endl;
		std::cout << b3.getBreed() << std::endl;
		//std::cout << b4.getBreed() << std::endl;
	}
	catch (const std::runtime_error& ex) {
		std::cerr << "runtime_error : " << ex.what() << std::endl;
	}

	return 0;
}