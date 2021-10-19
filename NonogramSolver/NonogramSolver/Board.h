#include <iostream>
#include <vector>
using namespace std;


class Board {
	friend class Nonogram;
private:
	int x_dim = 0;
	int y_dim = 0;
	vector<vector<int>> board;
	



public:

	int uk = 2;
	int X = 0;
	int on = 1;

	Board();
	Board(vector<vector<int>> x, vector<vector<int>> y);

	void mark_X(int x, int y);
	void mark_O(int x, int y);
	void print();





};
