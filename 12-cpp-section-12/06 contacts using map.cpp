#include<iostream>
#include<string>
#include<map>

int main() {

	std::map<std::string, std::string> contacts;
	contacts["a"] = "1********1";
	contacts["b"] = "2********2";
	contacts["c"] = "3********3";
	contacts["d"] = "4********4";
	contacts["e"] = "5********5";

	for (std::pair <std::string, std::string> element : contacts) {
		std::cout << element.first << " = " << element.second << std::endl;
	}
	
	return 0;
}