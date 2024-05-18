#include "ShellSort.h"
#include <cstdlib>  // For std::rand() and std::srand()
#include <ctime>    // For std::time()

void ClearInvalidInput(string errMsg);

int main() {
	
	cout << "+++ Insertion sort and Shell Sort +++\n"
		<< "Enter number of elements to be sorted (zero to exit): ";
	int numItems;
	cin >> numItems;
	if (numItems == 0) {
		return 0;
	}

	if (numItems > 50 || numItems < 0 || !numItems) {
		ClearInvalidInput("INVALID INPUT, DEFAULTING TO 15 ELEMENTS");
		numItems = 15;
	}
	cout << "\tTest case with " << numItems << " elements.\n" 
		<< "\tUnsorted array with " << numItems << " elements to be sorted:\n\t";


	IS insertionSort(numItems);
	SS shellSort(numItems);
	std::srand(std::time(0));

	for (int i = 0; i < numItems; i++) {
		
		int randomNumber = std::rand() % 20;
		cout << randomNumber << " ";
		insertionSort.AddNumToArr(randomNumber);
		shellSort.AddNumToArr(randomNumber);


	}
	insertionSort.InsertionSort();
	cout << "\n\t** Results of Insertion sort \n" << "\tInsertion sort comparisons: " << insertionSort.GetNumComp() 
		<< "\n\tInsertion sort number of items moved: " << insertionSort.GetNumMoved();

	shellSort.ShellSort();
	cout << "\n\t** Results of Shell sort\n" << "\tShell sort comparisons: " << shellSort.GetNumComp() << 
		"\n\tShell sort number of items moves: " << shellSort.GetNumMoved();

}

void ClearInvalidInput(string errMsg) {
	cout << "\n" << errMsg << "\n";
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
}