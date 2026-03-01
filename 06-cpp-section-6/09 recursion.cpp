#include <iostream>

void tenToZero(int num);
int sumOf0to10(int num);
int main() {
	tenToZero(10);

	int sum = sumOf0to10(10);
	std::cout << "sum : " << sum << std::endl;

	return 0;
}

void tenToZero(int num) {
	if (num >= 0) {	
		std::cout << num << std::endl;
		tenToZero(num - 1);
	}

}
//int sumOf0to10(int num) {
//	static int sum = 0;
//	if (num >= 0) {
//		sum += num;
//		sumOf0to10(num - 1);
//	}
//	return sum;
//}

int sumOf0to10(int num) {
	
	if (num > 1) {
		return num + sumOf0to10(num - 1);
	}
	return num;

}