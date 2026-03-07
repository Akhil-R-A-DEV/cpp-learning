#include<iostream>
#include <stdexcept>
#include <vector>
void getMonth(int num);

int main() {
	int num;

	std::cout << "enter the number : " ;
	std::cin >> num;


	try {
		getMonth(num);
	}
	catch (const std::out_of_range& err) {
		std::cout << err.what() << std::endl;
	}



	return 0;
}
void getMonth(int num) {
	std::vector<std::string>month = { "Jan","Feb","Mar","Apr","May","Jun",
"Jul","Aug","Sep","Oct","Nov","Dec" };

	if (num >= 1 && num <= 12) {
		std::cout << month[num - 1] << std::endl;;
	}
	else
	{
		throw std::out_of_range("sorry this is not valid");
	}
}