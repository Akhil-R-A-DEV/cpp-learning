#include <iostream>
#include <string>
#include<queue>

int main() {

	std::queue<std::string>names;
	names.push("a");
	names.push("b");
	names.push("c");
	names.push("d");
	names.push("e");
	
	std::cout << std::boolalpha;
	


	while (!names.empty()) {
		std::cout << names.front() << std::endl;
		names.pop();
	}



	return 0;
}