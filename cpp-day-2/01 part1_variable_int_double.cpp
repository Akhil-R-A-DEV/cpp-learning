#include <iostream>
int main() {
	//Variable
	int mytInt; //declaration
	mytInt = 2; //initialization
	int myInt2 = 25  ;
	double myDouble = 3.141;

	int x = 10; //copy initialization (assignment)
	int(y) = 10; //direct initialization
	int z{ 3.14 };//uniform (brace) initialization , this prevent narrowing conversion or losy conversion

	int narrowingConversion = 3.14; // this will store ok as 3 and dnot concider .14 this is the narrowing conversion
	double wideningConversion = 3; // this is the lossless or widening conversion

	int thisIsCamelCase = 123; // this is the styling cnvension in c++ it uses camel casing
	std::cout << mytInt << std::endl;	
	std::cout << myDouble << std::endl;
	
	return 0;
}