#include <iostream>
#include "Rectangle.h"	

int main() {

	Rectangle r1;
	Rectangle r2;


	r1.setlength(1);
	r1.setWidth(1);

	r2.setlength(2);
	r2.setWidth(2);

	r1.getlength();
	r1.getWidth();

	r2.getlength();
	r2.getWidth();


	std::cout << "  r1 : " << "length : " << r1.getlength() << "  width : "<< r1.getWidth() << "  area :  "<< r1.area() << "  perimeter  : " << r1.perimeter() << std::endl;
	std::cout << "  r2 : " << "length : " << r2.getlength() << "  width : " << r2.getWidth() << "  area :  " << r2.area() << "  perimeter  : " << r2.perimeter() << std::endl;


	return 0;
}