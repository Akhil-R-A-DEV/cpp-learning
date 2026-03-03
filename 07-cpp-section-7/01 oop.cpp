#include <iostream>
#include <string>


//--------------Home Class
class Home {
	public: 

		void setNumWindow(int numWindow) {
			this->numWindow = numWindow;
		}
		void setNumDoor(int numDoor) {
			this->numDoor = numDoor;
		}
		void setColor(std::string color) {
			this->color = color;
		}

		int getNumWindow() const {
			return numWindow;
		}
		int getNumDoor() const {
			return numDoor;
		}
		std::string getColor() const{
			return color;
		}

	private:
		int numWindow;
		int numDoor;
		std::string color;
};

//--------------------main
int main() {

	Home myHome;
	Home yourHome;

	myHome.setNumWindow(10);
	myHome.setNumDoor(5);
	myHome.setColor("white");

	yourHome.setNumWindow(20);
	yourHome.setNumDoor(15);
	yourHome.setColor("red");

	
	std::cout << "My House :   " << "  window : " << myHome.getNumWindow() << "  door : " << myHome.getNumDoor() << "  color : " << myHome.getColor() << std::endl;
	std::cout << "Your House :   " << "  window : " << yourHome.getNumWindow() << "  door : " << yourHome.getNumDoor() << "  color : " << yourHome.getColor() << std::endl;



	return 0;
}