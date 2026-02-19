#include<iostream>
#include<string>
int main() {
	const std::string MY_NAME = "Akhil";
	 
	// MY_NAME = "unni"     // this will not work because MY_NAME is a constant and the value cannot be changed

	std::cout << MY_NAME << std::endl;

	return 0;
}