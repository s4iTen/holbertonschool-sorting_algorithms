#include "sort.h"
/**
 * selection_sort - this function sort the array with selection
 * @array: this is the array
 * @size: this is the size of the array
 */
void selection_sort(int *array, size_t size)
{
	int temp;
	size_t i, j, minIndex;

	for (i = 0; i < size - 1; i++)
	{
		minIndex = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[minIndex])
			{
				minIndex = j;
			}
		}
		if (minIndex != i)
		{
			temp = array[i];
			array[i] = array[minIndex];
			array[minIndex] = temp;
			print_array(array, size);
		}
	}
}
