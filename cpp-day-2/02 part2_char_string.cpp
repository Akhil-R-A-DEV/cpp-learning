#include <iostream>
#include <string>//string is not directly built into c++ so include it 

int main() {
	char singleChar = 'a'; //char datatype value will be a single charecter with in ''
	std::string myName = "Akhil"; //string  datatype value will be a collection of charecters with in ""
	std::cout << "Haloo " << myName << std::endl; 
	return 0;
}