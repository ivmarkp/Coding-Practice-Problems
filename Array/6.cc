/* A Tic-Tac-Toe board is given after some moves are played. Find out if the given board
   is valid or invalid assuming that the game starts with X.
   E.g.
   Input:
   X X O O O X X O X
   X X O _ O X O O X
   X O O _ _ _ _ _ _
   Output:
   Valid
   Valid
   Invalid
*/
#include<bits/stdc++.h>
using namespace std;

const vector<char> board = {'X', 'X', 'O',
							'O', 'X', 'O',
							'O', 'O', 'O'};

// A Matrix to store all possible winning arrangements explicitly.
const vector<vector<int>> possible_win =
		{{0, 1, 2}, {3, 4, 5}, {6, 7, 8}, // Rows
		{0, 3, 6}, {1, 4, 7}, {2, 5, 8}, // Columns
		{0, 4, 8}, {2, 4, 6}}; // Diagonals

bool isWinner(char ch) {
	int rows = possible_win.size();
	int cols = possible_win[0].size();
	for (int i = 0; i < rows; i++) {
		if (board [possible_win[i][0]] == ch &&
			board [possible_win[i][1]] == ch &&
			board [possible_win[i][2]] == ch)
			return 1;
	}
	return 0;
}

bool IsValid(int X, int O) {
	// Number of X can never be zero or lesser in a valid board.
	if (X <= 0)
		return 0;
	// Since game starts with X the number of X can never be lesser than number of O
	// in a valid board.
	if (X < O)
		return 0;
	// Both X and O cannot be winners in a valid board.
	if (isWinner('X') && isWinner('O'))
		return 0;
	// If X is the winner then the number of X should be greater than the number of O
	// by 1 in a valid board.
	if (isWinner('X') && X == O + 1)
		return 1;
	// If O is the winner then the number of X should be equal to the number of O in
	// valid board.
	if (isWinner('O') && X == O)
		return 1;
	// In case neither X nor O is the winner then number of X should be greater than
	// the number of O by 1 in a valid board.
	if (!isWinner('X') && !isWinner('O') && X == O + 1)
		return 1;
}

int main()
{
	int count_X = 0;
	int count_O = 0;
	for (int i = 0; i < board.size(); i++) {
		if (board[i] == 'X') count_X++;
		else if (board[i] == 'O') count_O++;
	}
	(IsValid(count_X, count_O)) ? cout << "Valid" : cout << "Invalid";
	cout << endl;
	return 0;
}
