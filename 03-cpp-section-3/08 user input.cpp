#include <iostream>
#include <string>
int main() {
	int age;
	std::string fullName;

	std::cout << "Enter your age : " << std::endl;
	std::cin >> age;            // will only consider the input before the white space 
	std::cout << "you are : " << age << " years old " << std::endl;

	 std::cout << "enter your full name : " << std::endl;
	 std::cin.get(); // remove the line in the input buffer 
	 std::getline(std::cin, fullName); // get the input and store it in fullName. And Will consider the input including the white space 
	 std::cout << "your full name is : "<< fullName << std::endl;

	return 0;
}