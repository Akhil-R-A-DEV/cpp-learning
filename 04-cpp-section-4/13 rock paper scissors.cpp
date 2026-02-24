#include <iostream>
#include <cstdlib>
#include<ctime>

int main() {

	// Rock Paper Scissors
	char yourMove;
	char computerMove;
	int computerMoveInNum;
	srand(time(nullptr));

	std::cout << "chose your move (R , P or S) : ";
	std::cin >> yourMove;

	computerMoveInNum = (rand() % 3 + 1);

	

	if (computerMoveInNum == 1) {
		computerMove = 'R';
	}
	else if ((computerMoveInNum == 2)) {
		computerMove = 'P';
	}
	else if ((computerMoveInNum == 3)) {
		computerMove = 'S';
	}


	if ((yourMove == 'P' && computerMove == 'R') || 
		(yourMove == 'R' && computerMove == 'S') ||
		(yourMove == 'S' && computerMove == 'P')
		) {
		std::cout << "You Chose : " << yourMove << std::endl;
		std::cout << "Computer Chose : " << computerMove << std::endl;
		std::cout << "You win" << std::endl;
	}
	else if (yourMove == computerMove) {
		std::cout << "You Chose : " << yourMove << std::endl;
		std::cout << "Computer Chose : " << computerMove << std::endl;
		std::cout << "Tie" << std::endl;
	}
	else {
		std::cout << "You Chose : " << yourMove << std::endl;
		std::cout << "Computer Chose : " << computerMove << std::endl;
		std::cout << "You lost" << std::endl;
	}



	return 0;
}