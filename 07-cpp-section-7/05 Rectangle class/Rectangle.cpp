#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle() {
	this->length = 0.1;
	this->width = 0.1;
};
Rectangle::Rectangle(double length, double width) {
	this->length = length;
	this->width = width;
};
void Rectangle::setlength(double length) {
	this->length = length;
	
};
void Rectangle::setWidth( double width) {
	
	this->width = width;
};
double Rectangle::getlength() const {
	return length;
};
double Rectangle::getWidth() const {
	return width;
};
double Rectangle::area() const {
	return length * width;
};
double Rectangle::perimeter() const {
	return 2 * (length + width);
};