#ifndef EXHIBIT_H
#define EXHIBIT_H
#include <string>
class Exhibit {
	public:
		Exhibit(std::string name , int roomNumber , double displaySize);
		std::string getName();
		int getRoomNumber();
		double gerDisplaySize();
	private:
		std::string name;
		int roomNumber;
		double displaySize;
};

#endif // !EXHIBIT_H
