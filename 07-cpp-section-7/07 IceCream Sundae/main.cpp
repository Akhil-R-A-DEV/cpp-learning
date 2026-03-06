#include <iostream>
#include <string>
#include "IceCreamSundae.h"


void printAll(const IceCreamSundae& name);
void printFlavor(const IceCreamSundae& name);
void printTopping(const IceCreamSundae& name);

int main() {

	IceCreamSundae ice1("vanilla");
	IceCreamSundae ice2("orange");

	ice1.getFlavor();
	ice1.addToppings("mango");
	ice1.addToppings("mango1");
	ice1.addToppings("mango2");
	ice1.addToppings("mango3");
	ice1.addToppings("mango4");



	ice2.getFlavor();
	ice2.addToppings("banana");
	ice2.addToppings("banana1");
	ice2.addToppings("banana2");
	ice2.addToppings("banana3");


	std::cout << "........................" << std::endl;
	printFlavor(ice1);
	printTopping(ice1);
	printAll(ice1);


	std::cout << "........................" << std::endl;

	printFlavor(ice2);
	printTopping(ice2);
	printAll(ice2);



	return 0;
}



void printFlavor(const IceCreamSundae& name) {
	std::cout << std::endl;
	std::cout << "       flavor" << std::endl;
	std::cout << "  flavor : " << name.getFlavor() << std::endl;
}

void printTopping(const IceCreamSundae& name) {

	std::cout << std::endl;
	std::cout << "       full toppings" << std::endl;
	std::vector<std::string> data = name.getToppings();
	for (std::string a : data) {
		std::cout << a << std::endl;
	}
}


void printAll(const IceCreamSundae& name) {
	std::cout << std::endl;
	std::cout << "       full details" << std::endl;
	std::cout << "  flavor : " << name.getFlavor() << std::endl;
	std::cout << "toppings : " << std::endl;
	std::vector<std::string> data = name.getToppings();
	for (std::string a : data) {
		std::cout << a << std::endl;
	}
}