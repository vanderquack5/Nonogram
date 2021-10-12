#include <iostream>
#include <vector>
using namespace std;

class Nonogram {
private:
	//vector of vectors for the x and y dimension
	vector<vector<int>> x;
	vector<vector<int>> y;


public:
	//initialize a nonogram
	Nonogram(vector<vector<int>> x, vector<vector<int>> y);
	bool validate();

	//display the complete nonogram
	void print();







};
