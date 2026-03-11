#include<iostream>
#include<fstream>
#include<iomanip>

int main() {

	std::cout << "file opening" << std::endl;
	std::ofstream outfile("test.txt");

	if (!outfile) {
		std::cerr << "sorry , something went wrong ";
		return 1;
	}

	std::cout << std::fixed << std::showpoint;
	outfile << std::fixed << std::showpoint;

	for (int i = 0; i < 10; i++) {
		double val1 = i * 1.2353;
		double val2 = i * 3.14515;

		std::cout << std::setw(12) << std::setprecision(2) << val1
			<< std::setw(12) << std::setprecision(3) << val2 <<std::endl;

		outfile<< std::setw(12) << std::setprecision(2) << val1
			<< std::setw(12) << std::setprecision(3) << val2 << std::endl;

	}



	outfile << "haloo world" << std::endl;

	outfile.close();

	return 0;
}