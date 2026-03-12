#include "Animal.h"
#include "Dog.h"
#include <string>
#include<iostream>


Dog::Dog(std::string name, double weight, std::string breed) :Animal( name, weight) {
	this->breed = breed;
}
std::string Dog::getBreed() const {
	return breed;
}
void Dog::digHole()const {
	std::cout << "Digging hole" << std::endl;
}
std::string Dog::makeNoise() const {
	return "bark";
}
void Dog::catchCat() const {
	std::cout << "Looking for cat" << std::endl;
}