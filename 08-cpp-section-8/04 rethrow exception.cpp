#include <iostream>
#include<stdexcept>

void doSomething(int a );
void checkPositive(int a );


int main() {

	try {
		doSomething(-10);
		std::cout << "success" << std::endl;
	}
	catch (const std::invalid_argument& err) {
		std::cout << "main says error" << std::endl;
		std::cout << err.what() << std::endl;
	}

	return 0;
}

void doSomething(int a) {
	try {
		checkPositive(a);
		std::cout << "possitive done" << std::endl;
	}
	catch(const std::invalid_argument& err){
		throw;
	}
}
void checkPositive(int a) {
	if (a > 0) {
		std::cout << "its possitive" << std::endl;
	}
	else {
		throw std::invalid_argument("sorry its -ve");
	}
}
