#include <iostream>
#include <fstream>
#include <string>

int main() {

	std::string tempName;
	int tempAge;

	std::ifstream namesData("names.txt");
	std::ifstream agesData("ages.txt");
	std::ofstream outputData("output.txt");


	if (!namesData || !agesData || !outputData) {
		std::cout << "sorry cant open file";
		return 1;
	}
	      
	while (std::getline(namesData, tempName) && agesData >> tempAge) {
		std::cout << tempName << " " << tempAge << std::endl;
		outputData << tempName << " " << tempAge <<std::endl;
	}
	

	namesData.close();
	agesData.close();
	agesData.close();

	return 0;
}