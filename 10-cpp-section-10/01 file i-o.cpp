#include<iostream>
#include<fstream>
int main() {
	std::cout << "file input output " << std::endl;

	std::ofstream outfile("myFile.txt");
	std::cout << "creating or opening file " << std::endl;
	if (!outfile) {
		std::cerr << "couldnt open file "<< std::endl;
		return 1;
	}
	outfile << "haloo world" << std::endl;
	std::cout << "text added to file" << std::endl;
	outfile.close();
	std::cout << "file closed" << std::endl;

	return 0;
}