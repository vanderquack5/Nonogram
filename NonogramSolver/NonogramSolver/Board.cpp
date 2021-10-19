#include <iostream>
#include <vector>
using namespace std;
#include "Board.h"

Board::Board() {

}

Board::Board(vector<vector<int>> x, vector<vector<int>> y) {
	x_dim = x.size();
	y_dim = y.size();

	board = vector<vector<int>>(x_dim, vector<int>(y_dim, 2));


}

void Board::mark_X(int x, int y) {
	board[x][y] = X;

}

void Board::mark_O(int x, int y) {
	board[x][y] = on;

}

void Board::print() {
	//need to add clues...
	char a = 'a';
	cout << "  ";
	for (int i = 0; i < x_dim; i++) {
		cout << a << " ";
		a++;
	}
	cout << "\n";

	int y_label = 1;

	for (int i = 0; i < x_dim; i++) {
		cout << y_label << " ";
		y_label++;
		for (int j = 0; j < y_dim; j++) {
			cout << board[i][j] << " ";
		}
		cout << "\n";
	}

}