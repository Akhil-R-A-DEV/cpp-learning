#include <iostream>

void threeTimesN(int input, int& output);

int main() {

	int inputNum = 3;
	int outputNum;
	threeTimesN(inputNum, outputNum);

	return 0;
}

void threeTimesN(int input, int& output) {
	output = input * 3;
	std::cout << "The output after 3 times the input is : " << output << std::endl;
}