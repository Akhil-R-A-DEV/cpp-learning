#include <iostream>
#include <array>
int productArray(std::array<int, 5>PrductArr);

int main() {

	std::array<int, 5>PrductArr = {1,2,3,4,5};
	int a = productArray(PrductArr);
	std::cout << "product is : " << a;
	return 0;
}


int productArray(std::array<int, 5>PrductArr) {
	int product = 1;
	for (int a : PrductArr) {
		product *= a;
	}
	return product;
}