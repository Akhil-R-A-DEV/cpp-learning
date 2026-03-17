#include<iostream>
#include<map>
#include<unordered_map>
#include <string>

int main() {

	std::cout << "std::map........." << std::endl;

	std::map<std::string, int>orderedMap;

	orderedMap["a"] = 10;
	orderedMap["b"] = 20;
	orderedMap["c"] = 30;
	orderedMap["d"] = 40;

	for (std::pair<std::string, int>p:orderedMap) {
		std::cout << p.first << " - " << p.second << std::endl;
	}

	std::cout << "To Find C -----" << std::endl;

	auto it1 = orderedMap.find("c");
	if (it1 != orderedMap.end()) {
		std::cout << "found c - " << it1->second;
	}



	std::cout << ".................." << std::endl;

	std::cout << "unordered map........." << std::endl;


	std::unordered_map<std::string, int> unorderedMap;
	unorderedMap["a"] = 10;
	unorderedMap["b"] = 20;
	unorderedMap["c"] = 30;
	unorderedMap["d"] = 40;



	for (const auto& pair  : unorderedMap) {
		std::cout << pair.first << " - " << pair.second << std::endl;
	}

	auto it2 = unorderedMap.find("b");

	if (it2 != unorderedMap.end()) {
		std::cout << "found b " << " - " << it2->second << std::endl;
	}


	return 0;
}