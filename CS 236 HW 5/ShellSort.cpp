#include "ShellSort.h"

//constructor
SS::SS(int len) {
	length = len;
}

//performs sort
void SS::ShellSort() {
    for (int gap = length / 2; gap > 0; gap /= 2) { //get gap lenght
        for (int i = gap; i < length; i++) {
            int temp = array[i]; //save value into temp
            int j = i;
            while (j >= gap && numComparisons++ && array[j - gap] > temp) { //check array[j] with element gap length behind it
                array[j] = array[j - gap]; //if element behind is greater, swap with array[j]
                j -= gap;
                numElementsMoved++;
            }
            array[j] = temp; //add temp into array[j]
        }
    }
}

//inserts number into end of the array
void SS::AddNumToArr(int num) {
    array[nextOpenIndex] = num;
    nextOpenIndex++;
}