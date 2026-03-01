#include <iostream>

int factorialNum(int num);

int main() {

	int a = factorialNum(6);
	std::cout << a << std::endl;

	return 0;
} 

int factorialNum(int num) {
	if (num > 1) {
		return num * factorialNum(num - 1);
	}
	return 1;
}