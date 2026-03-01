#include <iostream>

double averageOfNum(double a , double b, double c );

int main() {
	double s1 = 10.2, s2 = 23.5, s3 = 55.8;
	double average = averageOfNum(s1, s2, s3);

	std::cout << "Average = " << average << std::endl;

	return 0;
}

double averageOfNum(double a, double b, double c) {
	return (a + b + c) / 3.0;
}