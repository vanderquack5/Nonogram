#include <iostream>
#include <vector>
using namespace std;
#include "Nonogram.h"
#include "Board.h"

Nonogram::Nonogram(vector<vector<int>> x, vector<vector<int>> y) {


}
void Nonogram::print() {


}

bool Nonogram::validate() {
	return false;


}


//do columns
//do rows, reading one at a time
//if not marked finished... 
//calculate if all the numbers + (# of numbers-1) (call this number val) is greater than total width/2 (floor)
// total width-val - anything greater than this number (freedom) can have some element placed

//when board is partially full/has xs filled in
//if the first potential grouping (between xs) on left or right is less than the first group on the left or right, fill with xs



//for each number grouping in the set, create the most extreme cases for each. Where filled squares overlap, fill them
//do this for all rows and all columns
//then fill xs where possible, and when groupings are finished