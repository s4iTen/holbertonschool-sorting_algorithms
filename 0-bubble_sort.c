#include "sort.h"

void bubble_sort(int *array, size_t size)
{
	if (!array)
	{
		return;
	}
	size_t new, new2;
	int temp;
	for (new = 0; new < size - 1; new++)
	{
		for (new2 = 0; new2 < size - new - 1; new2++)
		{
			if (array[new2] > array[new2 + 1])
			{
				temp = array[new2];
				array[new2] = array[new2 + 1];
				array[new2 + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
