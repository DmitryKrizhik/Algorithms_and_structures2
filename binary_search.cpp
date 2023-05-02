#include <iostream>

int binary_search(int arr[], const int size, int key)
{
	int left = 0;
    int right = size - 1;
	int middle;

	while (1)
	{
		middle = (left + right) / 2;
		
		if (left > right)
			return -1;

		if (arr[middle] < key)
			left = middle + 1;
		else
			if (key < arr[middle])
				right = middle - 1;
			else
				return middle;
	}
}