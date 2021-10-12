#include <iostream>
#include <vector>
using namespace std;


class Board {
private:
	int x_dim = 0;
	int y_dim = 0;
	vector<vector<int>> board;



public:

	int uk = 0;
	int X = 1;
	int O = 2;


	Board(vector<vector<int>> x, vector<vector<int>> y);

	void mark_X(int x, int y);
	void mark_O(int x, int y);
	void print();





};
