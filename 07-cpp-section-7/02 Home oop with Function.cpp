#include<iostream>
#include <string>
class Home {
	public:
		void setDoor(int numDoor) {
			this->numDoor = numDoor;
		}
		void setColor(std::string color) {
			this->color = color;
		}

		int getDoor() const {
			return numDoor;
		}
		std::string getColor() const {
			return color;
		}
	private:
		
		int numDoor;
		std::string color;
};

void printHouseData(const Home& data);

int main() {
	Home myHome;
	Home yourHome;
	myHome.setColor("white");
	myHome.setDoor(5);
	yourHome.setColor("red");
	yourHome.setDoor(6);
	printHouseData(myHome);
	printHouseData(yourHome);
}
void printHouseData(const Home& data) {
	std::cout<< "color is : " << data.getColor()<<std::endl;
	std::cout << "num of door is : " << data.getDoor() << std::endl;
}