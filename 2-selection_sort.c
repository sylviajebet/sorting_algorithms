#include "sort.h"

/**
 * selection_sort - Function to sort elements in an array in
 * ascending order using Selection Sort
 *
 * @array: Pointer to array
 * @size: Size of array
 * Return: Void
 */

void selection_sort(int *array, size_t size)
{
	unsigned int i, j, min;
	int temp;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
			{
				min = j;
			}
		}

		if (min != i)
		{
			temp = array[i];
			array[i] = array[min];
			array[min] = temp;
			print_array((const int *)array, size);
		}
	}
}
