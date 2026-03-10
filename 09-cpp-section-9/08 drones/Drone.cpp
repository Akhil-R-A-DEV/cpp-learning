#include "Drone.h"
#include<string>
Drone::Drone(std::string modelName, double batteryCharge) {
	this->modelName = modelName;
	this->batteryCharge = batteryCharge;
}
std::string Drone::getName() {
	return modelName;
}
double Drone::getCharge() {
	return batteryCharge;
}