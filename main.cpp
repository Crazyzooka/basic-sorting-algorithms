 
#include <iostream>

#include "Sort.h"
#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"

int main()
{
	BubbleSort sort0;
	QuickSort sort1;
	RecursiveBinarySearch search;
	int arr0[8] = { 1, 3, 5, 4, -5, 100, 7777, 2014 };
	int arr1[8] = { 1, 3, 5, 4, -5, 100, 7777, 2014 };

	sort0.sortInt(arr0, 0, 8);
	sort1.sortInt(arr1, 0, 8);
	
	std::cout << "Bubblesort: \n";
	
	for (int j = 0; j < 8; j++)
	{
		std::cout << arr0[j] << " ";
	}
	
	std::cout << "\n";
	
	std::cout << "QuickSort: \n";
	
	for (int j = 0; j < 8; j++)
	{
		std::cout << arr1[j] << " ";
	}
	
	std::cout << "\n";

	std::cout << search.searchInt(arr0, 0, 8) << "\n";

	return 0;
}
