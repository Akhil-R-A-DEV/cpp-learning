#include <iostream>

int main() {

	/*
	relational operators helps as to make decisions based on if something is true or false
	*/

	// > greater than
	// < less than
	// >= greater than or equal to 
	// <= less than or equal to 
	// == equal to 
	// != not equal to

	std::cout << std::boolalpha;

	int a = 10;
	int b = 11;
	
	std::cout << (a < b) << std::endl;

	bool areEqualTo = (a == b);
	std::cout << areEqualTo << std::endl;


	return 0;
}