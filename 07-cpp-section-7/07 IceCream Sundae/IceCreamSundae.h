#ifndef ICECREAMSUNDAE_H
#define ICECREAMSUNDAE_H
#include <string>
#include <vector>

class IceCreamSundae {
public:
	IceCreamSundae(std::string flavor);
	void addToppings(std::string topping);
	std::string getFlavor() const;
	std::vector<std::string> getToppings() const;
	void printSundae() const;

private:
	std::string flavor;
	std::vector<std::string> toppings;
};

#endif // !ICECREAMSUNDAE_H