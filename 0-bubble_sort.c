#include "sort.h"
/**
 * bubble_sort - this func sort the array with the condition bubble
 * @array: this is the array
 * @size: this is the size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t new;
	size_t new2;
	int temp;

	if (!array)
	{
		return;
	}
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
