#ifndef SHELL_H
#define SHELL_H

#include "InsertionSort.h"

class SS {
public:
	SS(int size);
	void ShellSort();
	void AddNumToArr(int num);
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
