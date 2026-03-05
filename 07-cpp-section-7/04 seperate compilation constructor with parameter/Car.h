#ifndef Car_H
#define Car_H
#include <string>
class Car {
	public:
		Car();
		Car(std::string brand, int seatingCapacity, std::string color);
		virtual ~Car() final;
		void setBrand(std::string brand);
		void setSeatingCapacity(int seatingCapacity);
		void setColor(std::string color);

		std::string getBrand() const;
		int getSeatingCapacity() const;
		std::string getColor() const;
		void print() const;
	private:
		std::string brand;
		int seatingCapacity;
		std::string color;
};
#endif // !Car_H

