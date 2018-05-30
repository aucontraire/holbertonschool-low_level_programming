#include "sort.h"

/**
 * swap - swap array elements
 * @array: array
 * @greater: index of greater int
 * @lesser: index of lesser int
 */

void swap(int *array, int greater, int lesser)
{
	int temp = array[greater];

	array[greater] = array[lesser];
	array[lesser] = temp;
}


/**
 * shell_sort - sort array with shell sort algorithm
 * @array: array
 * @size: size of array
 */

void shell_sort(int *array, size_t size)
{
	size_t gap = 0, first = 0, second = 0, i = 0, j = 0;
	int swaps = 0;

	if (array == NULL)
		return;

	for (gap = 0; gap < size; gap = (gap * 3) + 1)
		;
	gap = (gap - 1) / 3;
	while (gap >= 1)
	{
		for (first = 0; first + gap < size; first++)
		{
			second = first + gap;
			if (array[first] > array[second])
			{
				swap(array, first, second);
				swaps++;
			}
		}
		if (gap == 1)
			break;
		if (swaps == 0)
		{
			gap = (gap - 1) / 3;
			print_array(array, size);
		}
		else
			swaps = 0;
	}
	for (i = 0; i < size - 1; i++)
	{
		j = i;
		while (array[j] > array[j + 1])
		{
			swap(array, j, j + 1);
			j--;
		}
	}
	print_array(array, size);
}
