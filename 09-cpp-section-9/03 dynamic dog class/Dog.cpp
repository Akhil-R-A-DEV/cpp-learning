#include "Dog.h"

Dog::Dog(std::string name, std::string breed) {
	this->name = name;
	this->breed = breed;
}
std::string Dog::getName() {
	return name;
}
std::string Dog::getBreed() {
	return breed;
}