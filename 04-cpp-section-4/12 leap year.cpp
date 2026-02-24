#include <iostream>

int main() {

	int startYear;
	int endYear;

	std::cout << "Entere the start year : ";
	std::cin >> startYear;
	std::cout << "Entere the End year : ";
	std::cin >> endYear;

	for (startYear; startYear <= endYear; startYear++) {
		//std::cout << startYear << std::endl;
		
		if (startYear % 400 == 0) {
			std::cout << startYear<< " : leap year" << std::endl;
		}
		else if (startYear % 4 == 0 && startYear % 100 != 0) {
			std::cout << startYear << " : leap year" << std::endl;
		}
		else
		{
			std::cout << startYear << " : not leap year" << std::endl;
		}


	}

	return 0;	
}