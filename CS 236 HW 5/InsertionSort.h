#ifndef INSERTION_H
#define INSERTION_H

#include <iostream>

using namespace std;

const int MAX_SIZE = 50;

class IS {
public:
	IS(int size); //constructor
	void AddNumToArr(int num); //adds a number to the array
	void InsertionSort(); //performs the sort and records the number of comparisons and elements moved
	int GetNumComp() { return numComparisons; } //returns the number of comparisons
	int GetNumMoved() { return numElementsMoved; } //returns the number of elements moved
private:
	int length; //length of the actual array
	int array[MAX_SIZE]; //creates an array of max size
	int numComparisons = 0;
	int nextOpenIndex = 0; //used for inserting into the array
	int numElementsMoved = 0;
};

#endif
