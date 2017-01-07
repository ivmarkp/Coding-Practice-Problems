/* N-Queens: This one is a classic problem in computer science. The goal is to assign n nos
   of queens to N positions on an NxN chessboard so that no queen, according to the rules
   of normal chess play, can attack any other queens on the board.
   Note: Backtracking is the key here to solve this problem.
   
   Given a no. n, print a possible solution for N-queen problem if exists.
   
   E.g. following is the output matrix for one possible 4 queen solution:
   0 1 0 0
   0 0 0 1
   1 0 0 0
   0 0 1 0
*/
#include<bits/stdc++.h>
using namespace std;

bool issafe(vector<vector<int>>& board, int n, int row, int col) {
	// Check if there is any queen in left side of the current row
	for (int i = 0; i < col; i++)
		if (board[row][i])
			return 0;
	int i , j;
	// Check upper diagonal on the left side
	for (i = row, j = col; i >= 0 && j >= 0; i--, j--)
		if (board[i][j])
			return 0;
	// Check lower diagonal on the left side
	for (i = row, j = col; j >= 0 && i < n; i++, j--)
		if (board[i][j])
			return 0;
	// If control reached here then it is safe to place queen at row , col
	return 1;
}

bool placeQueen(vector<vector<int>>& board, int n, int col) {
	if (col >= n)
		return 1;
	for (int i = 0; i < n; i++) {
		if(issafe(board, n, i, col)) {
			board[i][col] = 1;
			// Recur to place rest of the queens
			if (placeQueen(board, n, col+1))
				return 1;
			else
				board[i][col] = 0;
		}
	}
	// If control reached here then no solution exists.
	return 0;
}

void solve(vector<vector<int>>& board, int n) {
	if (placeQueen(board, n, 0)) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++)
				cout << board[i][j] << ' ';
			cout << endl;
		}
	}
	else
		cout << "No solution exists..." << endl;
}

int main()
{
	int n;
	cin >> n;
	// Create a 2D vector initialised to zeroes which is our board in initial state.
	vector<vector<int>> board(n, vector<int>(n,0));
	
	solve(board, n);
	return 0;
}
