#include<iostream>
#include<string>
#include<memory>
#include "Car.h"

int main() {

	//Car* carPtr = new Car("red", 4); // need delete 



	std::unique_ptr <Car> myCar = std::make_unique<Car>("red", 4);

	std::cout << "Color : " << myCar->getColor() << std::endl;
	std::cout << "Doors : " << myCar->getNumDoors() << std::endl;


	return 0;
}