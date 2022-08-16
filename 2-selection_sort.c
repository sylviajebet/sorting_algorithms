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
	size_t i, j, min;

	for (i = 0; i <= size; i++)
	{
		min = i; /*First element is min*/
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[jMin])
				min = j;
		}
		if (min != i)
		{
			swap_int(array, i, min);
			print_array(array, size);
		}
	}

}

/**
 * swap_int - Swaps variable values
 *
 * @array: Pointer to array
 * @a: Index 1
 * @b: Index 2
*/

void swap_int(int *array, size_t a, size_t b)
{
	int temp;

	temp = array[a];
	array[a] = array[b];
	array[b] = temp;
}
