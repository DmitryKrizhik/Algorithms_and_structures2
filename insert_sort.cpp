#include <iostream>


template<typename T>
void insert_sort(T &arr)
{
	for (int i = 1; i < arr.size(); i++)
	{
		int j = i;
		while (j > 0 && arr[j - 1] > arr[j])
		{
			int temp = arr[j - 1];
			arr[j - 1] = arr[j];
			arr[j] = temp;
			j--;
		}
	}
}
