#include <iostream>
#include <vector>
using namespace std;
#include "Nonogram.h"
#include "Board.h"

Nonogram::Nonogram(vector<vector<int>> x, vector<vector<int>> y) {
	Board board = Board(x, y);
	x_dim = x.size();
	y_dim = y.size();

}
void Nonogram::print() {


}

bool Nonogram::validate() {
	return false;


}

void Nonogram::generate_cases() {

	//do columns

	//iterate through the columns and do this for each
		//continue = true;
		//check if it can be filled and finished automatically
			// if so, continue = false;
		//make case one with by filling a loop

		//add it to the vector of possibilities

		//current_vector = case one

		//while(continue)
			//current_vector = generate_next(current_vector, y_dim)   ///use x_dim  num elements in rows
			// add it to vector of cases
			//if end case, continue = false; HOW TO IDENTIFY END CASE?


	//do the same for rows


}

vector<int> Nonogram::generate_next(vector<int> prev, int dim) {
	//check last item; if it is off:
		//iterate backwards til you hit ons
		//if first x is at position n, then insert_right_shift at n+1
	//else
		//case = 0
		//case:
	int current = dim - 1;
	bool path2 = true;
	int cases = 0;
	while (path2) {
		current--;
		switch (cases) {
		case 0:
			//if current is off, cases++


			break;
		case 1:
			//one X has been found
			//if current is on, cases--;
			//if urrent is off, delete_shift_left current and cases++;

			break;
		case 2:
			//if current is off, delete_shift_left current
			//if current is on, cases++;

			break;

		case 3:
			//if current is off, insert_shift_right at current+1;
			//path2 = false; (we are done modifying the vector at this point)

			break;
		}

		//////TO DO: how do I deal with cases where index 0 is filled, but needs to move? can't go to index -1...
					//how to deal with that same case in the first case, where last item is zero
					//am I assuming that the final case will never be put through this function to create the 'next case'? I think I should, so have to validate in generate_cases somewhow...
	}

}


//greater planning
//TO DO later: validation!!

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


/*
step one, create all cases ONE TIME
	can calculate if there is only one case - if so, fill in the row/column and mark as complete
	STORAGE:
		vectover<vector<vector<int>>> -> one for x and y dimension
		there is a vector for each column, and each contains a vector of possible cases (which itself is a vector of ints)

	CREATION:
		create first case - easy





somewhere in cycling between rows and columns I need to check if, and then skip, finished rows/columns and keep a counter to check when the board is full


step two, compare all cases. Any overlap found between all (Xs or Os) will be put on the board
	for loops

do for all rows and columns

step three, eliminate cases by comparing the current to the board
	then repeat step two by finalizing the overlap in the cases
	add something for efficiency...? something to check if it has changed at all?

check if the cases have been eliminated down to one case - if so, implement this case and mark as complete
check if all columns/rows are complete, if so it is solved


print each step, at least when testing/creating







*/