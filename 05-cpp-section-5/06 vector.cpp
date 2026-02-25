#include <iostream>
#include <string>
#include <vector>
int main() {
	
	std::vector<int> numVec;
	std::vector<std::string> strVec(3);

	numVec.push_back(1);
	numVec.push_back(5);
	numVec.push_back(10);

	strVec[0] = "unni";
	strVec[1] = "manu";
	strVec[2] = "ramu";
	strVec.push_back("hari");

	for (int a : numVec) {
		std::cout << a << std::endl;
	}

	std::cout << std::endl;

	for (std::string a : strVec) {
		std::cout << a << std::endl;
	}
	std::cout << std::endl;

	std::cout << "size int : " << numVec.size() << std::endl;
	std::cout << "size str : " << strVec.size() << std::endl;

	std::cout << std::endl;

	std::cout << "Before Modification" << std::endl;
	std::cout << std::endl;

	std::cout << "front : "<< strVec.front() << std::endl;
	std::cout << "front : " << strVec.back() << std::endl;
	std::cout << std::endl;


	std::cout << "Modification" << std::endl;
	std::cout << std::endl;

	strVec.pop_back();
	strVec.insert(strVec.begin(), "sasi");
	std::cout << std::endl;

	std::cout << "After Modification" << std::endl;
	std::cout << std::endl;

	std::cout << "front : " << strVec.front() << std::endl;
	std::cout << "front : " << strVec.back() << std::endl;

	return 0;
}