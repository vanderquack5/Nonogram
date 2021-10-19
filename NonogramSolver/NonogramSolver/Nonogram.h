#include <iostream>
#include <vector>
using namespace std;
#include "Board.h"

class Nonogram {
	friend class Board;
private:
	//vector of vectors for the x and y dimension
	vector<vector<int>> x;
	vector<vector<int>> y;
	vector<vector<vector<int>>> col_xcases;
	vector<vector<vector<int>>> row_ycases;
	int x_dim = 0;
	int y_dim = 0;
	Board board;

	


public:
	//initialize a nonogram
	Nonogram(vector<vector<int>> x, vector<vector<int>> y);
	bool validate();

	//display the complete nonogram
	void print();

	void generate_cases();
	vector<int> generate_next(vector<int>, int);







};
