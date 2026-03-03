#include <iostream>
#include <array>

void refArrProduct(std::array<int, 5>arrName, int& product);
int main() {
	int product = 1;
	std::array<int, 5>productArr = {1,2,3,4,5};
	refArrProduct(productArr, product);

	std::cout << "the product is : " << product; 

	return 0;
}
void refArrProduct(std::array<int, 5>arrName, int& product) {
	for (int a : arrName) {
		product *= a;
	}
}