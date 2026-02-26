/*
shoping list:
Ask user to enter items
keep prompting the user untill they type "done"
store each item in the vector
at the end , display all the items in the shoping list
tips:
use getLine()
use a while loop to check if the user typed "done"
*/


#include<iostream>
#include <string>
#include <vector>
int main() {

	std::string eachItemEntered;
	std::vector<std::string> shopingItems;

	bool done = true;

	while (done == true) {
		std::cout << "Enter name of the item : ";
		std::getline(std::cin, eachItemEntered);
		if (eachItemEntered != "done") {
			shopingItems.push_back(eachItemEntered);
		}
		else {
			break;
		}
	}
	for (std::string printVal : shopingItems) {
		std::cout << printVal << std::endl;
	}
	return 0;
}
