#include <iostream>
#include <string>
int main() {
	std::string fullName;
	std::string location;
	int score;
	int scores;

	std::cout << "your scores : " << std::endl;
	std::cin >> scores; 
	


	std::cout << "your full name : " << std::endl;
	std::cin.get(); //use this if cin >> comes before  std::getline() to remove the input buffer /n
	std::getline(std::cin, fullName);

	std::cout << "your location : " << std::endl;
	std::getline(std::cin, location);

	std::cout << "your score : " << std::endl;
	std::cin >> score;


	std::cout << "Haloo, " << fullName << std::endl;
	std::cout << "We heard you are from : " << location << std::endl;
	std::cout << "your score is : " << score << " when adding 5 points your final score is  : " << score + 5 << std::endl;
	std::cout  << " test score is  : " << scores << std::endl;
 
	return 0;
}