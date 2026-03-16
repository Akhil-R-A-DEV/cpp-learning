#include<iostream>
#include<memory>


int main() {
	const int ARR_SIZE = 6;
	std::unique_ptr<double> myDoubPtr = std::make_unique<double>();
	*myDoubPtr = 3.1415;
	std::cout << *myDoubPtr << std::endl;

	auto arr = std::make_unique<int[]>(ARR_SIZE);

	for (int i = 0; i < ARR_SIZE; i++) {
		arr[i] = i * 2;
	}

	for (int i = 0; i < ARR_SIZE; i++) {
		std::cout << arr[i] << std::endl;
	}


	std::unique_ptr <double> otherDoubPtr = std::make_unique<double>();
	otherDoubPtr = std::move(myDoubPtr);

	std::cout<< "other ptr : " << *otherDoubPtr << std::endl;
	//std::cout << "my double ptr : " << *myDoubPtr << std::endl;


	return 0;
}