#include <iostream>

int main() {

	int age;
	std::cout << "What is your age your age : ";
	std::cin >> age;

	if (age >= 25) { //checks if your age is greater than or equal to 25
		std::cout << "Build your Career" << std::endl; //if age is <= 25 then this line exicutes else skip this and check the next condition 
	}
	else if (age >= 18) { //checks if your age is greater than or equal to 18
		std::cout << "Learn and grow" << std::endl; // if age is <= 18 then this line exicutes else skip this and check the next condition 
	}
	else // in any other case this will get exicuted 
	{
		std::cout << "you can have an icecream" << std::endl;
	}

	


	for (int i = 1; i <= age; i++) { //loop runs according to the entered age
		std::cout << "Thank you for coming" << std::endl; 
	}
	return 0;
}