#include<iostream>

int main() {

	//while loop
	int count1=0;

	while (count1 <= 10) {
		std::cout << "count1 is : " << count1 << std::endl;
		count1++; //0 to 10
	}

	//do-while loop

	int count2 = 20;
	do {
		std::cout << "count2 is : " << count2 << std::endl;
		count2++;
	} while (count2 <= 10);

	//for loop;

	for (int i = 1; i <= 10; i++) {
		std::cout << "i = : " << i << std::endl;
	}


	//sentinal control   here the user deside the value 

	int num;

	std::cout << "enter a non negative number to continue or enter a negative number to quit : ";
	std::cin >> num;

	while (num >= 0) {
		std::cout << "the number entered is : " << num << std::endl;
		std::cout << "enter a non negative number to continue or enter a negative number to quit : ";
		std::cin >> num;
	}


	return 0;
}