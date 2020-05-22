#ifndef SORT_H
#define SORT_H

#include <vector>

class Sort
{
public:
	Sort();
	virtual void sortInt(int * arr, int low, int high) = 0;
	~Sort();
};

#endif