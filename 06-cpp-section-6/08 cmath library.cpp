#include <iostream>
#include<cmath>

int main() {

	int powerVar = std::pow(2, 3);
	int squtVar = std::sqrt(25);
	int ceilVar = std::ceil(4.14);
	int floorVar = std::floor(4.12);
	int log2Result = std::log2(512);

	std::cout<< "powerVar : " << powerVar <<std::endl;
	std::cout << "squtVar : " << squtVar << std::endl;
	std::cout << "ceilVar : " << ceilVar << std::endl;
	std::cout << "floorVar : " << floorVar << std::endl;
	std::cout << "log2 result : " << log2Result << std::endl;
	return 0;
}



