#ifndef SHELL_H
#define SHELL_H

#include "InsertionSort.h"

class SS {
public:
	SS(int size); //constructor
	void ShellSort(); //performs the sort
	void AddNumToArr(int num); //adds a random number into the array
	int GetNumComp() { return numComparisons; } //returns the number of comparisons performed by the sort
	int GetNumMoved() { return numElementsMoved; } //returns the number of elements moved during the sort

private:
	int length; //the actual length on the array
	int array[MAX_SIZE]; //array of max size
	int numComparisons = 0;
	int nextOpenIndex = 0; //used for inserting elements into the array
	int numElementsMoved = 0;
};

#endif
