#include <iostream>

const int size = 3;

void initializeBoard(char arr[size][size]);
void printBoard(char arr[size][size]);

int main() {

	int row, col;

	char board[size][size];

	char player = 'X';

	initializeBoard(board);
	//printBoard(board);

	for (int move = 0; move < 9; move++) {
		std::cout << std::endl;
		printBoard(board);
		std::cout << "turn of : " << player << std::endl;
		std::cout << "enter row (0 - 2) : " ;
		std::cin >> row ;
		std::cout << "enter col (0 - 2) : ";
		std::cin >> col;


		if (board[row][col] == ' ') {
			board[row][col] = player;
			if (player == 'X') {
				player = 'O';
			}
			else
			{
				player = 'X';
			}
		}
		else
		{
			std::cout << "col already filled";
			move--;
		}


	}
	printBoard(board);
	std::cout << "Game over";

	return 0;
}

void initializeBoard(char arr[size][size]) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			arr[i][j] = ' ';
			//std::cout << arr[i][j] << " ";
		}
		//std::cout << std::endl;
	}
}

void printBoard(char arr[size][size]) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			std::cout << arr[i][j];
			if (j < size - 1) {
				std::cout << " | ";
			}
		}
		std::cout << std::endl;
		if (i < size - 1)
			std::cout << "--+---+--\n";
	}
}