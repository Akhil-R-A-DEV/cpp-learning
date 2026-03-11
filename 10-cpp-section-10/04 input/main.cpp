#include <iostream>
#include <fstream>

int main() {
	int inputNum;
	int sum = 0;

	std::ifstream dataFile("text.txt");

	if (!dataFile) {
		std::cerr << "sory file cannot be opened ";
	}

	while (dataFile >> inputNum) { //while(!datafile.eof())
		sum += inputNum;
	}

	dataFile.close();

	std::cout << "sum : " << sum << std::endl;

	return 0;
}