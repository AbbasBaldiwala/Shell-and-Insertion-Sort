#include "InsertionSort.h"

IS::IS(int len) {
	length = len;
}

void IS::InsertionSort() {
	
	for (int i = 1; i < length; i++) {
		int temp = array[i];
		int j = i - 1;
		while (j >= 0 && numComparisons++ && array[j] > temp) {
			array[j + 1] = array[j];
			numItemsMoved++;
			j--;

		}
		array[j + 1] = temp;
	}
}

void IS::AddNumToArr(int num) {
	array[nextOpenIndex] = num;
	nextOpenIndex++;
}