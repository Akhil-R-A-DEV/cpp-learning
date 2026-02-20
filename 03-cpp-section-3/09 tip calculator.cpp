/*
create a new project called tip calculator 
ask user to enter bill amount 
ask user to enter the tip % they want to leave
calculate the tip amount and the total amount including tip
output the result clearly to the screen
*/

#include <iostream>
#include <iomanip>
int main() {

	double billAmount;
	double tipPercentage;
	double percentageToAmount;
	double totalPayAmount;

	std::cout << std::fixed << std::setprecision(2); //this is a stitckey manipulater use to manipulate the decimal places 

	std::cout << "enter the bill anount : " << std::endl;
	std::cin >> billAmount;
	std::cout << "enter the tip % you would like to leave : " << std::endl;
	std::cin >> tipPercentage;

	percentageToAmount = billAmount * (tipPercentage / 100);
	totalPayAmount = billAmount + percentageToAmount;

	std::cout << "bill anount for you : " << billAmount << std::endl;
	std::cout << "tip percentage you like to leave is : " << tipPercentage << std::endl;
	std::cout << "total amount after tip % is added  : " << totalPayAmount << std::endl;
	std::cout << "Thank you ...." << std::endl;

	return 0;
}