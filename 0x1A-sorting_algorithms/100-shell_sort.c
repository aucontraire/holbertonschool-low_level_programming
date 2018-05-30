#include "sort.h"

/**
 * shell_sort - sort array with shell sort algorithm
 * @array: array
 * @size: size of array
 */

void shell_sort(int *array, size_t size)
{
	size_t gap = 1, first = 0, second = 0, i = 0, j = 0;
	int temp = 0, swaps = 0;

	gap = gap * 3 + 1;
	while (gap >= 1)
	{
		for (first = 0; first + gap < size; first++)
		{
			second = first + gap;
			if (array[first] > array[second])
			{
				temp = array[first];
				array[first] = array[second];
				array[second] = temp;
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
		while (array[j] > array[j + 1] && j > 0)
		{
			temp = array[j];
			array[j] = array[j + 1];
			array[j + 1] = temp;
			j--;
		}
	}
	print_array(array, size);
}
