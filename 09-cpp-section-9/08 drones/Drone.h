#ifndef DRONE_H
#define DRONE_H
#include<string>

class Drone {

public:
	Drone(std::string modelName, double batteryCharge);
	std::string getName();
	double getCharge();
private:
	std::string modelName;
	double batteryCharge;
};
#endif // !DRONE_H
