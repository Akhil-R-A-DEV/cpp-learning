#include "Car.h"

Car::Car(std::string color, int numDoors) {
	this->color = color;
	this->numDoors = numDoors;
}
std::string Car::getColor() {
	return color;
}
int  Car::getNumDoors() {
	return numDoors;
}