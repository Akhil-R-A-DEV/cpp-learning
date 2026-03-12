#include<iostream>
#include<string>
#include "Animal.h"
#include "Dog.h"

int main() {

	Animal cow("smallCow", 62);
	Dog dog1("big dog", 20, "breed1");

	std::cout << " Name : " << cow.getName() << std::endl;
	std::cout << " Weight : " << cow.getWeight() << std::endl;
	std::cout << " Noise :  " << cow.makeNoise() << std::endl;

	std::cout << "-------------------------------------------------" << std::endl;

	std::cout << " Name : " << dog1.getName() << std::endl;
	std::cout << " Weight : " << dog1.getWeight() << std::endl;
	std::cout << " Breed : " << dog1.getBreed() << std::endl;
	dog1.digHole();
	std::cout << " Noise : " << dog1.makeNoise() << std::endl;
	dog1.catchCat();

	return 0;
}