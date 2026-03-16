#ifndef CAR_H
#define CAR_H
#include <string>

class Car {
	public:
		Car(std::string color, int numDoors);
		std::string getColor();
		int  getNumDoors();

	private:
		std::string color;
		int numDoors;
};

#endif // !CAR_H
