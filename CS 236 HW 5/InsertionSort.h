#ifndef INSERTION_H
#define INSERTION_H

#include <iostream>

using namespace std;

const int MAX_SIZE = 50;

class IS {
public:
	IS(int size);
	void AddNumToArr(int num);
	void InsertionSort();
	//void PrintArray();
	int GetNumComp() { return numComparisons; }
	int GetNumMoved() { return numItemsMoved; }
private:
	int length;
	int array[MAX_SIZE];
	int numComparisons = 0;
	int nextOpenIndex = 0;
	int numItemsMoved = 0;
};

#endif
