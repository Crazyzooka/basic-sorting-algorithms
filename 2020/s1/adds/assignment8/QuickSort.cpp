 

#include <iostream>
#include "Sort.h"
#include "QuickSort.h"
#include <vector>

QuickSort::QuickSort()
{

}

void QuickSort::sortInt(int * arr, int low, int high)
{
	int temp	= 0;
	int diff	= high - low;

	switch (diff)
	{
		case 0:
		case 1:
		{
			return;
		}
		case 2:
		{
			//std::cout << "comparing: " << arr[low] << " to " << arr[high-1] << "\n";
			if (arr[low] > arr[high-1])
			{
				temp = arr[low];
				arr[low] = arr[high - 1];
				arr[high - 1] = temp;
			}
			/*
			for (int j = 0; j < 8; j++)
			{
				std::cout << arr[j] << " ";
			}
			std::cout << "\n";*/
			return;
		}
		default:
		{
			int pivot = 2 + low;
			for (int i = 0; i < high; i++)
			{
				if (i != pivot)
				{
					//std::cout << "comparing: " << arr[i] << " to " << arr[pivot] << "\n";
					if (arr[i] > arr[pivot] && i < pivot)
					{
						//std::cout << arr[i] << " > " << arr[pivot] << "\n";
						temp = arr[pivot - 1];
						arr[pivot - 1] = arr[i];
						arr[i] = temp;

						temp = arr[pivot];
						arr[pivot] = arr[pivot - 1];
						arr[pivot - 1] = temp;

						pivot = pivot - 1;
						i--;
						/*
						for (int j = low; j < high; j++)
						{
							std::cout << arr[j] << " ";
						}
						std::cout << "\n";*/

					}

					if (arr[i] < arr[pivot] && i > pivot)
					{
						//std::cout << arr[i] << " < " << arr[pivot] << "\n";
						temp = arr[pivot + 1];
						arr[pivot + 1] = arr[i];
						arr[i] = temp;

						temp = arr[pivot];
						arr[pivot] = arr[pivot + 1];
						arr[pivot + 1] = temp;

						pivot = pivot + 1;
						/*
						for (int j = low; j < high; j++)
						{
							std::cout << arr[j] << " ";
						}
						std::cout << "\n"; */
					}
				}
				else
				{
					//std::cout << "at pivot\n";
				}
			}
			//std::cout << "Min: " << low << " " << "Max: " << high-1 << "\n";
			//std::cout << "Pivot is: " << arr[pivot-1] << "\n";

			sortInt(arr, low, pivot);
			sortInt(arr, pivot+1, high);
		}
	}
}

QuickSort::~QuickSort()
{

}