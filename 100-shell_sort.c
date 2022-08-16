#include "sort.h"

/**
 * shell_sort - sort algorithm
 * @array: array to sort
 * @size: size of the array
 */
void shell_sort(int *array, size_t size)
{
int inner, outer;
int val, interval = 1, i = 0;

while (interval <= (int) size / 3)
	interval = interval * 3 + 1;

while (interval > 0)
{

	for (outer = interval; outer < (int) size; outer++)
	{
		val = array[outer];
		inner = outer;

		while (inner > interval - 1 && array[inner - interval] >= val)
		{
		array[inner] = array[inner - interval];
		inner -= interval;
		}

		array[inner] = val;
	}

interval = (interval - 1) / 3;
print_array(array, size);
i++;
}
}
