#include <iostream>
#include<string>
#include <vector>
int main() {
	
	std::vector<std::string> names(2);

	names.at(0) = "unni";
	names.at(1) = "manu";

	try {
		names.at(3) = "abcd";
	}
	catch (const std::out_of_range& ex) {
		std::cout << "out_of_range :  " << ex.what() << std::endl;
	}


	for (std::string name : names) {
		std::cout << name << std::endl;
	}

	return 0;
}