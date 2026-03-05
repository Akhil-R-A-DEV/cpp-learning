#include <iostream>
#include "Rectangle.h"	

int main() {

	Rectangle r1;
	Rectangle r2(1,1);


	std::cout << "with out Parameter" << std::endl;
	std::cout << "  r1 : " << "length : " << r1.getlength() << "  width : " << r1.getWidth() << "  area :  " << r1.area() << "  perimeter  : " << r1.perimeter() << std::endl;
	std::cout << "  r2 : " << "length : " << r2.getlength() << "  width : " << r2.getWidth() << "  area :  " << r2.area() << "  perimeter  : " << r2.perimeter() << std::endl;
	std::cout << std::endl;

	


	std::cout << "after setting" << std::endl;

	r1.setlength(2);
	r1.setWidth(2);

	r2.setlength(3);
	r2.setWidth(3);



	std::cout << "  r1 : " << "length : " << r1.getlength() << "  width : "<< r1.getWidth() << "  area :  "<< r1.area() << "  perimeter  : " << r1.perimeter() << std::endl;
	std::cout << "  r2 : " << "length : " << r2.getlength() << "  width : " << r2.getWidth() << "  area :  " << r2.area() << "  perimeter  : " << r2.perimeter() << std::endl;
	std::cout << std::endl;

	return 0;
}