//Abbas Baldiwala, CS 236, Spring 2024
//Insertion sort and Shell sort

#include "ShellSort.h"
#include <cstdlib>  
#include <ctime>    

const int MAX_RANDOM_NUMBER = 20;

void ClearInvalidInput(string errMsg);

void CheckInput(int& numItems);

void CreateAndSortData(int numItems);

int main() {
	int numItems;
	bool quit = false;

	do {
		std::cout << "\n\n+++ Insertion sort and Shell Sort +++\n"
			<< "\nEnter number of elements to be sorted (zero to exit): ";
		cin >> numItems; //get size of array
		switch (numItems) {
		case 0:
			quit = true; //if user enters 0, set quit equal to true
			break;
		default: //means user doesnt want to quit
			CheckInput(numItems); //make sure user input is correct
			CreateAndSortData(numItems); //main wrapper function
		}

		
	} while (!quit);

}

void ClearInvalidInput(string errMsg) {
	std::cout << "\n" << errMsg << "\n";
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

void CheckInput(int& numItems) {
	if (numItems > MAX_SIZE || numItems < 0 || !numItems) { //make sure user input is valid
		ClearInvalidInput("INVALID INPUT, DEFAULTING TO MAX NUMBER OF ELEMENTS");
		numItems = MAX_SIZE;
	}
}

void CreateAndSortData(int numItems) {
	std::cout << "\n\tTest case with " << numItems << " elements.\n"
		<< "\n\tUnsorted array with " << numItems << " elements to be sorted:\n\t";


	IS insertionSort(numItems); //create insertion sort object
	SS shellSort(numItems); //create shell sort object
	std::srand(std::time(0)); //seed random time

	for (int i = 0; i < numItems; i++) {

		int randomNumber = std::rand() % MAX_RANDOM_NUMBER; //get a random number between 0 and 19
		std::cout << randomNumber << " ";
		insertionSort.AddNumToArr(randomNumber); //add the number to the insertion sort array
		shellSort.AddNumToArr(randomNumber); //add the random number to the shell sort array


	}
	insertionSort.InsertionSort(); //perform the sort
	std::cout << "\n\n\t** Results of Insertion sort \n" << "\n\tInsertion sort comparisons: " << insertionSort.GetNumComp()
		<< "\n\n\tInsertion sort number of items moved: " << insertionSort.GetNumMoved(); //cout the number of comparisons and the number of items moved

	shellSort.ShellSort(); //perform the sort
	std::cout << "\n\n\t** Results of Shell sort\n" << "\n\tShell sort comparisons: " << shellSort.GetNumComp() <<
		"\n\n\tShell sort number of items moves: " << shellSort.GetNumMoved() << "\n"; //cout the number of comparisons and the number of items moved
}

