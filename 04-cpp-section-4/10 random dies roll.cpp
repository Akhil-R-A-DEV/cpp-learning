#include <iostream>
#include <cstdlib>
#include<ctime>

int main() {

	srand(time(nullptr));

	for (int i = 1; i <= 10; i++) {
		int randomValue = rand() % 6 + 1;
		std::cout << "dies role " << (i) << ": " << randomValue << std::endl;
	}

	return 0;
}