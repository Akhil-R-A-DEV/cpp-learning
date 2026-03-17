#include<iostream>
#include<vector>
#include <map>
#include<unordered_map>
#include <algorithm>

void printVector(const std::vector<std::string>& vec);

int main() {

	std::vector<std::string>myVec;

	myVec.push_back("car");
	myVec.push_back("banana");
	myVec.push_back("test");
	myVec.push_back("watch");
	myVec.push_back("fruits");

	myVec.emplace_back("bus");
	myVec.emplace_back("mango");
	myVec.emplace_back("orange");
	myVec.emplace_back("pen");
	myVec.emplace_back("sticlk");
	myVec.emplace_back("wash");

	std::cout << "......originl vector......" << std::endl;
	printVector(myVec);

	//remove all string <= length 3
	
	for (auto it = myVec.begin(); it != myVec.end();) {
		if (it->length() <= 3) {
			it = myVec.erase(it);
		}
		else
		{
			it++;
		}
	}

	std::cout << "......after removing length <=3......" << std::endl;
	printVector(myVec);

	std::cout << "...... if test removing it ......" << std::endl;
	myVec.erase(remove(myVec.begin(), myVec.end(), "test"), myVec.end());
	printVector(myVec);

	std::map<std::string, int>ordered;
	std::unordered_map<std::string, int>unordered;

	for (const auto& vec : myVec) {
		ordered[vec] = vec.length();
	}
	for (const auto& vec : myVec) {
		unordered[vec] = vec.length();
	}

	for (const auto& pair : ordered) {
		std::cout << pair.first << " has a length of " << pair.second << std::endl;
	}

	std::string query = "wash";


	if (ordered.find(query) != ordered.end()) {
		std::cout << query << " query found" << std::endl;
	}
	else
	{
		std::cout << query << " query NOT found" << std::endl;
	
	}

	std::cout << std::endl;

	for (const auto& pair : unordered) {
		std::cout << pair.first << " has a length of " << pair.second << std::endl;
	}

	if (unordered.find(query) != unordered.end()) {
		std::cout << query << " query found" << std::endl;
	} 
	else
	{
		std::cout << query << " query NOT found" << std::endl;
	}

	return 0;
}

void printVector(const std::vector<std::string>& vec) {

	for (auto p : vec) {
		std::cout << p << std::endl;
	}
	std::cout << std::endl;

}