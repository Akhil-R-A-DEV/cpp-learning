#include "Exhibit.h"
#include <iostream>
#include <string>

Exhibit::Exhibit(std::string name, int roomNumber, double displaySize) {
	this->name = name;
	this->roomNumber = roomNumber;
	this->displaySize = displaySize;
}
std::string Exhibit::getName() {
	return name;
}
int Exhibit::getRoomNumber() {
	return roomNumber;
}
double Exhibit::gerDisplaySize() {
	return displaySize;
}
