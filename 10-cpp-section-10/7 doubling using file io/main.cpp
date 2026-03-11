#include <iostream>
#include <fstream>

int main() {

	int tempNums;

	std::ifstream myNums("input.txt");
	std::ofstream outputData("output.txt");

	if (!myNums || !outputData) {
		std::cerr << "sorry cant open the file" << std::endl;
		return 1;
	}

	while (myNums >> tempNums) {

		int doubleData = tempNums * 2;
		std::cout<< doubleData << std::endl;
		outputData << doubleData << std::endl;
	}



	myNums.close();
	outputData.close();

	return 0;
}