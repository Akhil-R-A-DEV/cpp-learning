#include "Car.h"
#include <iostream>
#include <string>

Car::Car() {
	this->brand = "unknown";
	this->seatingCapacity = 0;
	this->color = "unknown";
}


void Car::setBrand(std::string brand) {
	this->brand = brand;
}

Car::~Car() {
	std::cout << "Finished" << std::endl;
}
void Car::setSeatingCapacity(int  seatingCapacity) {
	this->seatingCapacity = seatingCapacity;
}
void Car::setColor(std::string color) {
	this->color = color;
}

std::string Car::getBrand() const {
	return brand;
}
int Car::getSeatingCapacity() const {
	return seatingCapacity;
}
std::string Car::getColor() const {
	return color;
}


void Car::print() const {
	std::cout << "brand : " << brand << std::endl;
	std::cout << "Seating capacity : " << seatingCapacity << std::endl;
	std::cout << "color : " << color << std::endl;
	std::cout << std::endl;
}