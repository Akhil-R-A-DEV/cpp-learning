#include <iostream>
#include <vector>
#include<stdexcept>


int main() {

	std::vector<int>data;

	try{
		data.resize(data.max_size() + 1);
	}
	catch (const std::length_error& ex) {
		std::cerr << "length_error : " << ex.what() << std::endl;
	}

	

	//length_error 

	std::cout << "largest vector" << std::endl;

	return 0;
}