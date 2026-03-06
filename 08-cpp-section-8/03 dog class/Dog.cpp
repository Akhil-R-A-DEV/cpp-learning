#include<iostream>
#include "Dog.h"
#include <stdexcept>

Dog::Dog(std::string breed) {
	if (breed != "poodle") {
		this->breed = breed;
	}
	else {
		throw std::runtime_error("sorry poodle");
	}
}
std::string Dog::getBreed() const  {

	return breed;
}