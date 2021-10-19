#include <iostream>
using namespace std;
#include "Board.h"
#include "Nonogram.h"



int main()
{
	vector<vector<int>> x = { {0,1,2}, {0}, {1,2} };
	vector<vector<int>> y = { { 0 }, { 1 }, {2},{3},{4},{5} };
	Board board;
	board = Board(x, y);
	int x_dim = x.size();
	int y_dim = y.size();

	vector<vector<int>> board = vector<vector<int>>(y_dim, vector<int>(x_dim, 2));
	board[0][2] = 4;

	char a = 'a';
	cout << "  ";
	for (int i = 0; i < x_dim; i++) {
		cout << a << " ";
		a++;
	}
	cout << "\n";

	int y_label = 1;

	for (int i = 0; i < y_dim; i++) {
		cout << y_label << " ";
		y_label++;
		for (int j = 0; j < x_dim; j++) {
			cout << board[i][j] << " ";
		}
		cout << "\n";
	}
}
