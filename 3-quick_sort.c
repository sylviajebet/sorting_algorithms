#include "sort.h"

/**
 * quick_sort - Sort array of integers in ascending order by
 * using the Quick Sort
 *
 * @array: Pointer to the array
 * @size: Size of the array
*/
void quick_sort(int *array, size_t size)
{
	recursive_quick_sort(array, size, 0, size - 1);
}

/**
 * recursive_quick_sort - Recursive function
 *
 * @array: Pointer to array
 * @size: Size of array
 * @start: Start index
 * @end: End index
*/
void recursive_quick_sort(int *array, size_t size, int start, int end)
{
	int p;

	if (start < end)
	{
		p = partition(array, size, start, end);
		recursive_quick_sort(array, size, start, p - 1);
		recursive_quick_sort(array, size, p + 1, end);
	}
}

/**
 * partition - Partition the array
 * @array: Pointer to array
 * @size: Size of array
 * @start: Start index
 * @end: End index
 * Return: Partition index
*/
size_t partition(int *array, size_t size, int start, int end)
{
	int pivot = array[end];
	int i = start - 1, j;

	for (j = start; j <= end - 1; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			swap_int(array, i, j);
			print_array(array, size);
		}
	}
	swap_int(array, i + 1, end);
	print_array(array, size);
	return (i + 1);
}

/**
 * swap_int -Sswap variable values
 * @array: Pointer to array
 * @a: index 1
 * @b: index 2
*/
void swap_int(int *array, int a, int b)
{
	int temp;

	temp = array[a];
	array[a] = array[b];
	array[b] = temp;
}
