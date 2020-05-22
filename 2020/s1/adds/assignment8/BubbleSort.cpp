 

#include <iostream>
#include "Sort.h"
#include "BubbleSort.h"

BubbleSort::BubbleSort()
{

}

void BubbleSort::sortInt(int * arr, int low, int high)
{
	int temp		= 0;
	int swapped		= 0;
	bool completed	= false;

	while (!(swapped == 0 && completed == true))
	{
		completed = false;
		swapped = 0;
		
		for (int i = 0; i < high - 1; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				std::cout << arr[i] << " > " << arr[i + 1] << "\n";
				temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;

				swapped++;
			}
		}
		completed = true;
	}
}

BubbleSort::~BubbleSort()
{

}