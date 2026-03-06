#include <iostream>
#include "Triangle.h"
int main() {

	
	Triangle t2();
	Triangle t1(1,1,1);
	Triangle t3();


	t1.setSideA(100);
	t1.setSideB(100);
	t1.setSideC(100);


	 std::cout << "side A : " << t1.getSideA() << std::endl;
	 std::cout << "side B : " << t1.getSideB() << std::endl;
	 std::cout << "side C : " << t1.getSideC() << std::endl;



	 std::cout << "............. " << std::endl;


	//std::cout << "Validity : " << t1.isValid() << std::endl;

	if (t1.isValid() == true) {
		std::cout << "perimeter : " << t1.perimeter() << std::endl;
		std::cout << "area : " << t1.area() << std::endl;
	}
	else
	{
		std::cout << "this is not a valid triangle" << std::endl;
	}




	return 0;
}
