#include<iostream>
#include<fstream>
#include<iomanip>

void printFormatted(std::ofstream& outfile, int highNum);

int main() {
	int highNum;
	std::cout << "file opening" << std::endl;
	std::ofstream outfile("test.txt");

	std::cout << "enter the high num : " << std::endl;
	std::cin >> highNum;

	if (!outfile) {
		std::cerr << "sorry , something went wrong ";
		return 1;
	}

	std::cout << std::fixed << std::showpoint;
	outfile << std::fixed << std::showpoint;


	printFormatted(outfile, highNum);


	outfile << "haloo world" << std::endl;

	outfile.close();





	return 0;
}


void printFormatted(std::ofstream& outfile, int highNum) {
	for (int i = 0; i < highNum; i++) {
		double val1 = i * 1.2353;
		double val2 = i * 3.14515;

		std::cout << std::setw(12) << std::setprecision(2) << val1
			<< std::setw(12) << std::setprecision(3) << val2 << std::endl;

		outfile << std::setw(12) << std::setprecision(2) << val1
			<< std::setw(12) << std::setprecision(3) << val2 << std::endl;

	}

}