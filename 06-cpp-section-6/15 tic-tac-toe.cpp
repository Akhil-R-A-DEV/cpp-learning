#include <iostream>   

const int size = 3;   // Board size (3x3)

void initializeBoard(char arr[size][size]);  // Function to initialize board with spaces
void printBoard(char arr[size][size]);       // Function to display the board

int main() {

	int row, col;

	char board[size][size];  // 3x3 game board

	char player = 'X';   // Starting player

	initializeBoard(board);  // Fill board with empty spaces

	// Loop maximum 9 times (maximum moves possible in Tic-Tac-Toe)
	for (int move = 0; move < 9; move++) {
		std::cout << std::endl;
		printBoard(board);  // Display current board

		std::cout << "turn of : " << player << std::endl;
		std::cout << "enter row (0 - 2) : ";
		std::cin >> row;
		std::cout << "enter col (0 - 2) : ";
		std::cin >> col;

		// Check if row and column are valid (between 0 and 2)
		if ((row == 0 || row == 1 || row == 2) && (col == 0 || col == 1 || col == 2)) {

			// Check if selected cell is empty
			if (board[row][col] == ' ') {

				board[row][col] = player;  

				// Switch player after successful move
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
		else
		{
			std::cout << "shoul enter number between (0 & 2)";  
			move--;  
		}

		// Check all possible winning combinations for X
		if (board[0][0] == 'X' && board[0][1] == 'X' && board[0][2] == 'X' ||
			board[1][0] == 'X' && board[1][1] == 'X' && board[1][2] == 'X' ||
			board[2][0] == 'X' && board[2][1] == 'X' && board[2][2] == 'X' ||
			board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X' ||
			board[2][0] == 'X' && board[1][1] == 'X' && board[0][2] == 'X' ||
			board[0][0] == 'X' && board[1][0] == 'X' && board[2][0] == 'X' ||
			board[0][1] == 'X' && board[1][1] == 'X' && board[2][1] == 'X' ||
			board[0][2] == 'X' && board[1][2] == 'X' && board[2][2] == 'X') {

			printBoard(board);   // Show final board
			std::cout << "the winner is X";
			return 0;   // End program
		}

		// Check all possible winning combinations for O
		else if (board[0][0] == 'O' && board[0][1] == 'O' && board[0][2] == 'O' ||
			board[1][0] == 'O' && board[1][1] == 'O' && board[1][2] == 'O' ||
			board[2][0] == 'O' && board[2][1] == 'O' && board[2][2] == 'O' ||
			board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O' ||
			board[2][0] == 'O' && board[1][1] == 'O' && board[0][2] == 'O' ||
			board[0][0] == 'O' && board[1][0] == 'O' && board[2][0] == 'O' ||
			board[0][1] == 'O' && board[1][1] == 'O' && board[2][1] == 'O' ||
			board[0][2] == 'O' && board[1][2] == 'O' && board[2][2] == 'O') {

			printBoard(board);  // Show final board
			std::cout << "the winner is O";
			return 0;  // End program
		}
	}

	// If loop finishes without winner, it's a tie
	printBoard(board);
	std::cout << "Game over its a tie";

	return 0;
}

// Function to initialize the board with empty spaces
void initializeBoard(char arr[size][size]) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			arr[i][j] = ' '; 
		}
	}
}

// Function to print the current board
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