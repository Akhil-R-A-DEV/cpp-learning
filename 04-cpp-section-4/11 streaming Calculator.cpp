/*
this is a program to calculate the monthly total of users based on
- the package they selected (Basic, Standaed, or premium)
- the number of simulataneous streams thet used this month

The streamng plans are as follows : 

- Package A (Basic)
	$9/month
	include 1 device
	each additional device : $6
 
 - Package B (Standerd)
	$14/month
	include 3 device
	each additional device : $4

- Package C (Premium)
	$20/month
	include 5 device
	each additional device : $2


-- in the progran you will prompt the user for 
	their package (A, B, or C)
	how many simultanious devices they used
*/



#include<iostream>

int main() {

	double monthlyTotal;
	char plan;
	int additionalDevice = 0;
	int numberOfDevice;

	int baseCostA = 9;
	int baseCostB = 14;
	int baseCostC = 20;

	int deviceForA = 1;
	int deviceForB = 3;
	int deviceForC = 5;

	int additionalDeviceCostA = 6 ;
	int additionalDeviceCostB = 4 ;
	int additionalDeviceCostC = 2 ;


	std::cout << "Which plan you like to chose  (A, B, or C ) : ";
	std::cin >> plan;
	std::cout << "How many simultanious devices you use : ";
	std::cin >> numberOfDevice;

	if (plan == 'A' || plan == 'a') {
		if (deviceForA < numberOfDevice) {
			additionalDevice = numberOfDevice - deviceForA;
			monthlyTotal = baseCostA + (additionalDevice * additionalDeviceCostA);
		}
		else
		{
			monthlyTotal = baseCostA;
		}
		
	}
	else if (plan == 'B' || plan == 'b') {
		if (deviceForB < numberOfDevice) {
			additionalDevice = numberOfDevice - deviceForB;
			monthlyTotal = baseCostB + (additionalDevice * additionalDeviceCostB);
		}
		else
		{
			monthlyTotal = baseCostB;
		}
		
	}
	else if (plan == 'C' || plan == 'c') {
		if (deviceForC < numberOfDevice) {
			additionalDevice = numberOfDevice - deviceForC;
			monthlyTotal = baseCostC + (additionalDevice * additionalDeviceCostC);
		}
		else
		{
			monthlyTotal = baseCostC;
		}
		
	}
	else
	{
		std::cout << "Enter a valid plan";
		return 0;
	}

	std::cout << "The plan you chosed is : " << plan << std::endl;
	std::cout << "simultanious devices you use: " << numberOfDevice << std::endl;
	std::cout << "your total payment amount : $" << monthlyTotal << std::endl;


	return 0;
}