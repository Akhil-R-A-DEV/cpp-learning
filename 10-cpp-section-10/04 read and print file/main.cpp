#include <iostream>
#include <fstream>
#include<vector>
int main() {
	int inputNum;
	int sum = 0;
	std::vector<int> numStore;

	std::ifstream dataFile("text.txt");

	if (!dataFile) {
		std::cerr << "sory file cannot be opened ";
	}

	while (dataFile >> inputNum) { //while(!datafile.eof())

		numStore.push_back(inputNum);
	}


	for (int i : numStore) {
		std::cout << i << std::endl;
		sum += i;
	}

	std::cout << "sum : " << sum << std::endl;


	dataFile.close();


	return 0;
}