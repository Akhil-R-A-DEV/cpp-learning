#include <iostream>
#include <string>
#include "IceCreamSundae.h"
#include <vector>


IceCreamSundae::IceCreamSundae(std::string flavor) {
	this->flavor = flavor;
	this->toppings = {};
};

void IceCreamSundae::addToppings(std::string topping) {
	toppings.push_back(topping);
};

std::string IceCreamSundae::getFlavor() const {
	return flavor;
};

std::vector<std::string> IceCreamSundae::getToppings() const {
	return toppings;
};

void IceCreamSundae::printSundae() const {
	std::cout << "flavor : " << flavor << std::endl;
	std::cout << "Toppings : " << std::endl;
	for (std::string a : toppings) {
		std::cout << a << std::endl;
	}
};


//std::string flavor;
//std::vector<std::string> toppings