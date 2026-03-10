#include <iostream>
#include "Drone.h"
#include<string>

void printFleet(Drone** fleet, int size);

int main() {

	int numDrone;
	std::string nameInput;
	double chargeInput = 0.0;

	std::cout << "number of drones : ";
	std::cin >> numDrone;

	Drone** drownFly = new Drone * [numDrone];

	int* data = new int[numDrone];
	int** data = new int*[numDrone];


	for (int i = 0; i < numDrone; i++) {
		std::cout << "Model name of drone : ";
		std::cin.get();
		std::getline(std::cin, nameInput);
		std::cout << "battery charge of drone : ";
		std::cin >> chargeInput;

		drownFly[i] = new Drone(nameInput, chargeInput);
	}

	printFleet(drownFly, numDrone);

	for (int i = 0; i < numDrone; i++) {
		delete drownFly[i];
		drownFly[i] = nullptr;
	}

	delete[] drownFly;

	return 0;
}

void printFleet(Drone** fleet, int size) {

	for (int i = 0; i < size; i++) {
		std::cout << "drone " << (i + 1)
			<< " : " << fleet[i]->getName()
			<< " battery : "
			<< fleet[i]->getCharge()
			<< std::endl;
	}
}