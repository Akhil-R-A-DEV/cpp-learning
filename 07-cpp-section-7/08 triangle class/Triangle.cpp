#include "Triangle.h"
#include <iostream>
#include<math.h>

Triangle::Triangle() {
	this->sideA = 1;
	this->sideB = 1;
	this->sideC = 1;
};
Triangle::Triangle(double a, double b, double c) {
	this->sideA = a;
	this->sideB = b;
	this->sideC = c;
};

void Triangle::setSideA(double a) {
	this->sideA = a;
};
void Triangle::setSideB(double b) {
	this->sideB = b;
};
void Triangle::setSideC(double c) {
	this->sideC = c;
};

double Triangle::getSideA() const {
	return sideA;
};
double Triangle::getSideB() const {
	return sideB;
};
double Triangle::getSideC() const {
	return sideC;
};

bool Triangle::isValid() const {

	if ((sideA + sideB) > sideC && (sideA + sideC) > sideB && (sideB + sideC) > sideA){
		return true;
	}
	else
	{
		return false;
	}
};
double Triangle::perimeter() const {
	if (isValid() == true) {
		return sideA + sideB + sideC;
	}
};
double Triangle::area()  const {
	if (isValid() == true) {
		double s = (sideA + sideB + sideC) / 2;
		double a = std::sqrt(s * (s - sideA)*(s - sideB)*(s - sideC));
		return a;
	}
};