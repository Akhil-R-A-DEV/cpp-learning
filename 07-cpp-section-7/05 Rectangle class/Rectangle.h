#ifndef RECTANGLE_H
#define RECTANGLE_H


class Rectangle {
	private:
		double length;
		double width;
	public:
		Rectangle();
		Rectangle(double length, double width);
		void setlength(double length);
		void setWidth(double width);

		double getlength() const;
		double getWidth() const;
		double area() const;
		double perimeter() const;
};

#endif // !RECTANGLE_H
