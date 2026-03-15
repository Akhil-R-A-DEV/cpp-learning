#include <iostream>
#include "Swapper.h"
int main() {

	Swapper num(1, 2);
	Swapper str("abcd", "efgh");
	std::cout << " Before swap " << std::endl;
	std::cout << num.getFirst() << std::endl;
	std::cout << num.getSecond() << std::endl;
	num.swap();
	std::cout << " Before swap " << std::endl;
	std::cout << num.getFirst() << std::endl;
	std::cout << num.getSecond() << std::endl;
	std::cout << " ....................... " << std::endl;
	std::cout << " Before swap " << std::endl;
	std::cout << str.getFirst() << std::endl;
	std::cout << str.getSecond() << std::endl;
	str.swap();
	std::cout << " Before swap " << std::endl;
	std::cout << str.getFirst() << std::endl;
	std::cout << str.getSecond() << std::endl;
	return 0;
}