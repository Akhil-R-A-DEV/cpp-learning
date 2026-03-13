#include<iostream>
#include<string>
#include "Animal.h"
#include "Dog.h"
#include "Cat.h"

int main() {

	//Animal cow("smallCow", 62);
	//Dog dog1("big dog", 20, "breed1");


	Animal* dogptr = new Dog("dog1", 20, "breed1");
	Cat bigCat("bcat1", 4);


	Animal* bigCatptr = new Cat("bcat", 6);
	Cat* realCat = dynamic_cast<Cat*>(bigCatptr);


	//Animal* catptr = new Cat("c1", 2);
	std::cout << " ----------------------------------------------------- " << std::endl;
	std::cout << " Noise : " << bigCatptr->makeNoise() << std::endl;
	std::cout << " eat : " << bigCatptr->eat() << std::endl;
	Cat* realCat = dynamic_cast<Cat*>(bigCatptr);
	if (realCat) {
		realCat->chaiseMouse();
	}
	


	std::cout << " ----------------------------------------------------- " << std::endl;
	std::cout << " Noise : " << dogptr->makeNoise() << std::endl;
	std::cout << " eat : " << dogptr->eat() << std::endl;
	std::cout << " ----------------------------------------------------- " << std::endl;

	delete dogptr;
	dogptr = nullptr;
	delete bigCatptr;
	bigCatptr = nullptr;


	std::cout << " ----------------------------------------------------- " << std::endl;
	std::cout << " Name : " << bigCat.getName() << std::endl;
	std::cout << " Weight : " << bigCat.getWeight() << std::endl;
	std::cout << " Noise :  " << bigCat.makeNoise() << std::endl;
	std::cout << " Eat :  " << bigCat.eat() << std::endl;

	bigCat.chaiseMouse();



	//std::cout << " Name : " << cow.getName() << std::endl;
	//std::cout << " Weight : " << cow.getWeight() << std::endl;
	//std::cout << " Noise :  " << cow.makeNoise() << std::endl;

	//std::cout << "-------------------------------------------------" << std::endl;

	//std::cout << " Name : " << dog1.getName() << std::endl;
	//std::cout << " Weight : " << dog1.getWeight() << std::endl;
	//std::cout << " Breed : " << dog1.getBreed() << std::endl;
	//dog1.digHole();
	//std::cout << " Noise : " << dog1.makeNoise() << std::endl;
	//dog1.catchCat();

	return 0;
}