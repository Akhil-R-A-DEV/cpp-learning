#include <iostream>
#include <string>

int main() {

	std::string names[5] = {"unni","manu","ravi","ram","ramu"};

	//for (int i = 0; i < 5;i++) {
	//	std::cout << names[i] << std::endl;
	//}

	//for (std::string name : names) {
	//	std::cout << name << std::endl;
	//}

	for (auto name : names) {
		std::cout << name << std::endl;
	}
	return 0;
}