
#include "Cat.h"
#include <string>
#include <iostream>

Cat::Cat(std::string name, double weight) :Animal(name, weight) {

}

std::string Cat::makeNoise()const {
	return "maww";
}
std::string Cat::eat() const {
	return "cat food";
}
void Cat::chaiseMouse() const {
	std::cout<<"chasing mouse"<<std::endl;
}