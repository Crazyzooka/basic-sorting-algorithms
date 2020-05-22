 

#include <iostream>
#include "RecursiveBinarySearch.h"

RecursiveBinarySearch::RecursiveBinarySearch()
{

}

int RecursiveBinarySearch::searchInt(int arr[], int start, int end)
{
	int size = end - start;

	if (size > 1)
	{
		int centre = (end + start) / 2;

		//std::cout << "size is: " << size << "\n";
		//std::cout << "centre posit: " << centre << "\n";
		//std::cout << "centre value: " << arr[centre] << "\n";

		if (arr[centre] == 1)
		{
			//std::cout << "found it\n";
			return 1;
		}
		else
		{
			if (arr[centre] > 1)
			{
				//std::cout << "centre is larger than 1\n";
				return searchInt(arr, start, centre - 1);
			}

			if (arr[centre] < 1)
			{
				//std::cout << "centre is less than 1\n";
				return searchInt(arr, centre + 1, end);
			}
		}
	}
	else
	{
		if (size == 1)
		{
			//std::cout << "size == 1\n";
			if (arr[size - 1] == 1)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}

		if (size == 0)
		{
			//std::cout << "size == 0\n";
			if (arr[size] == 1)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
}

RecursiveBinarySearch::~RecursiveBinarySearch()
{

}