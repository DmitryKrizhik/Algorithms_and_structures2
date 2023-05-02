#include <iostream>

int linear_search(int arr[], const int size, int key)
{
	for (int i = 0; i < size; i++)
	{
		if (key == arr[i])
			return i;
	}
	return -1;
}