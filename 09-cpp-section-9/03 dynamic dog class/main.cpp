#include <iostream>
#include "Dog.h"

int main() {

	Dog* myDog = new Dog ("N1", "B1");
	Dog* yourDog = new Dog("N2", "B2");

	std::cout << "using arrow" << std::endl;

	std::cout << "name : "<< myDog->getName() << std::endl;
	std::cout << "bread : " << myDog->getBreed() << std::endl;

	std::cout << "name : " << yourDog->getName() << std::endl;
	std::cout << "bread : " << yourDog->getBreed() << std::endl;

	std::cout<< std::endl;
	std::cout << "using dot and *" << std::endl;

	std::cout << "name : " << (*myDog).getName() << std::endl;
	std::cout << "bread : " << (*myDog).getBreed() << std::endl;

	std::cout << "name : " << (*yourDog).getName() << std::endl;
	std::cout << "bread : " << (*yourDog).getBreed() << std::endl;


	delete myDog;
	myDog = nullptr;

	delete yourDog;
	yourDog = nullptr;


	return 0;
}