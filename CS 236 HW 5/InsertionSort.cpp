#include "InsertionSort.h"

//constructor
IS::IS(int len) {
	length = len;
}

//performs sort
void IS::InsertionSort() {
	numComparisons = 0; //reset to 0 in case it is used more than once
	numElementsMoved = 0; //reset to 0 in case it is used more than once
	for (int i = 1; i < length; i++) {
		int temp = array[i]; //save element to be inserted
		int j = i - 1;
		while (j >= 0 && numComparisons++ && array[j] > temp) { //go through all elements before temp and find where temp should be inserted
			array[j + 1] = array[j];
			numElementsMoved++;
			j--;

		}
		array[j + 1] = temp; //insert temp
	}
}

//adds number into array
void IS::AddNumToArr(int num) { 
	array[nextOpenIndex] = num;
	nextOpenIndex++;
}