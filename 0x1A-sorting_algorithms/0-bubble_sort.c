#include "sort.h"

/**
 * bubble_sort - sorts array in ascending order
 * @array: array to be sorted
 * @size: size of array
 */

void bubble_sort(int *array, size_t size)
{
	size_t i = 0;
	int holder = NULL;
	int switches = 0;

	while (switches >= 0)
	{
		for (i = 0; i < size - 1; i++)
		{
			if (array[i + 1] < array[i])
			{
				holder = array[i + 1];
				array[i + 1] = array[i];
				array[i] = holder;
				switches++;
				print_array(array, size);
			}
		}
		if (switches == 0)
			switches = -1;
		else
			switches = 0;
	}
}
