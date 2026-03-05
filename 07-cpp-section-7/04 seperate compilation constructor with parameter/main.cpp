#include <iostream>
#include <string>
#include "Car.h"


//void printData(Car Cars);

int main() {

	Car myCar;
	Car theCar(" YourCar ", 20, "Color - Your car");

	//theCar.print();
	//myCar.print();

	//Car myCar(" myCar ", 10, "Color - MyCar");
	//Car theCar(" YourCar ", 20, "Color - Your car");

	//theCar.print();
	myCar.print();
	theCar.print();

	//myCar.setBrand("alto");
	//myCar.setSeatingCapacity(5);
	//myCar.setColor("sun light coper");


	//theCar.setBrand("bmw");
	//theCar.setSeatingCapacity(7);
	//theCar.setColor("black");

	////printData(myCar);
	////printData(theCar);
	//theCar.print();
	//myCar.print();
	//return 0;
}

//void printData(Car Cars) {
//	std::cout << "brand : " << Cars.getBrand() << std::endl;
//	std::cout << "Seating capacity : " << Cars.getSeatingCapacity() << std::endl;
//	std::cout << "color : " << Cars.getColor() << std::endl;
//	std::cout << std::endl;
//}