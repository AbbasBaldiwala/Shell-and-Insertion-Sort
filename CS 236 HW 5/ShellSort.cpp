#include "ShellSort.h"

SS::SS(int len) {
	length = len;
}

void SS::ShellSort() {
    // Start with a big gap, then reduce the gap
    for (int gap = length / 2; gap > 0; gap /= 2)
    {
        for (int i = gap; i < length; i++)
        {
            int temp = array[i];
            int j = i;
            while (j >= gap && numComparisons++ && array[j - gap] > temp) {
                array[j] = array[j - gap];
                j -= gap;
                numItemsMoved++;
            }
            array[j] = temp;
        }
    }
}

void SS::AddNumToArr(int num) {
    array[nextOpenIndex] = num;
    nextOpenIndex++;
}