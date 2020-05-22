 
#include <iostream>

#include "Sort.h"
#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"

int main()
{
	QuickSort test;
	RecursiveBinarySearch search;
	int arr[8] = { 1, 3, 5, 4, -5, 100, 7777, 2014 };
	test.sortInt(arr, 0, 8);

	for (int j = 0; j < 8; j++)
	{
		std::cout << arr[j] << " ";
	}
	std::cout << "\n";

	std::cout << search.searchInt(arr, 0, 8) << "\n";

	return 0;
}
