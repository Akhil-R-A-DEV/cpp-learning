#include <iostream>
#include <cstdint> //to use srand() and rand()
#include<ctime> //to use time

int main() {

	srand(time(nullptr)); //seeds random nimber generation with current time .

	int val1 = std::rand() % 10;
	int val2 = std::rand() % 10 + 1;
	int val3 = std::rand();

	std::cout << val1 << std::endl;
	std::cout << val2 << std::endl;
	std::cout << val3 << std::endl;


	return 0;
}
