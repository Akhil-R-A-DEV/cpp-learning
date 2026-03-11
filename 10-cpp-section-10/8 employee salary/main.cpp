#include <iostream>
#include <fstream>
#include <vector>
#include<iomanip>

int main() {
	double tempSalary;
	int totalEmployee;
	double sum = 0;
	double average;
	int salGreter50000 = 0;

	float totalPayRoll;

	std::vector<double>salaryList;

	std::ifstream salaries("salaries.txt");

	if (!salaries) {
		std::cerr << "sorry cant read the file" << std::endl;
		return 1;
	}

	//tempSalary > 0 && tempSalary < 1000000 &&

	while (salaries >> tempSalary) {  
		if ( tempSalary != 0 && tempSalary > 0 && tempSalary < 1000000 ) {
			salaryList.push_back(tempSalary);
		}
	}

	for (int i = 0; i < salaryList.size(); i++) {
		//std::cout << salaryList[i] << std::endl;
		sum += salaryList[i];
		if (salaryList[i] >= 50000) {
			salGreter50000 += 1;
		}
	}

	
	totalEmployee = salaryList.size();
	average = sum / totalEmployee;
	totalPayRoll = sum;

	std::cout << std::fixed << std::showpoint << std::setprecision(2);
	std::cout << "------------------------------------------------------------" << std::endl;
	std::cout << "     Total Employee                       : " << totalEmployee << std::endl;
	std::cout << "     Average Salary                       : " << average << std::endl;
	std::cout << "     Total PayRoll                        : " << totalPayRoll << std::endl;
	std::cout << "     Number of Employee Earning (>50000)  : " << salGreter50000 << std::endl;
	std::cout << "------------------------------------------------------------" << std::endl;
	salaries.close();
	return 0;
}