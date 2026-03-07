#include <iostream>

int main() {

	//int* intPtr = new int(123);

	int* intPtr = new int;
	*intPtr = 456;
	bool* boolPtr = new bool(true);
	std::cout << std::boolalpha;
	std::cout << *intPtr << std::endl;
	std::cout << *boolPtr << std::endl;

	delete intPtr;
	intPtr = nullptr;

	delete boolPtr;
	boolPtr = nullptr;

	return 0;
}