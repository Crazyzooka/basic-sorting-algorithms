#ifndef QUICKSORT_H
#define QUICKSORT_H

#include "Sort.h"

class QuickSort : public Sort
{
public:
	QuickSort();
	void sortInt(int * arr, int low, int high);
	~QuickSort();
};

#endif