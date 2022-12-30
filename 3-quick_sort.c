#include "sort.h"
/**
 * quick_sort - this function sort the array and it based
 * on the quick sort algorithm
 * @array: this is the array that have to be sorted
 * @size: this is the size of the array
 */
void quick_sort(int *array, size_t size)
{
	size_t pivot;

	if (!array || size < 2)
		return;
	print_sort(array, size, 1);
	/* partition and get pivot index */
	pivot = partition(array, size);
	/* repeat for left of index */
	quick_sort(array, pivot);
	/* repeat for index and right */
	quick_sort(array + pivot, size - pivot);
}
/**
 * swap - this function swap two values
 * @a: this is an integers 'a' that have to be swaped
 * @b: this is an integers 'b' that have to be swaped
 */
void swap(int *a, int *b)
{
	int tmp;

	tmp = *b;
	*b = *a;
	*a = tmp;
}
/**
 * partition - function that sets the pivot for the quick sort
 * @array: array partition
 * @size: size of the array
 * Return: 0 if it fail or i+1 if it success
 */
size_t partition(int array[], size_t size)
{
	int pivot;
	size_t i = -1;
	size_t j;

	if (!array || size < 2)
		return (0);
	pivot = array[size - 1];
	for (j = 0; j < size - 1; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			if (i != j)
			{
				swap(&array[i], &array[j]);
				print_sort(array, size, 0);
			}
		}
	}
	if (i + 1 != size - 1)
	{
		swap(&array[i + 1], &array[size - 1]);
		print_sort(array, size, 0);
	}
	return (i + 1);
}
/**
 * print_sort - function that print as we want
 * @array: this is the array that it have to be printed
 * @size: this is the size of the array
 * @init:this is the initialisation of the array
 */
void print_sort(int array[], size_t size, int init)
{
	static int *p = (void *)0;
	static size_t s;

	if (!p && init)
	{
		p = array;
		s = size;
	}
	if (!init)
		print_array(p, s);
}
