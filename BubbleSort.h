#ifndef BUBBLESORT_H
#define BUBBLESORT_H

#include "Sort.h"

class BubbleSort : public Sort
{
public:
	BubbleSort();
	void sortInt(int * arr, int low, int high);
	~BubbleSort();
};

#endif