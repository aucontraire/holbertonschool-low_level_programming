#include "sort.h"

/**
 * partition - partitions array
 * @array: array
 * @low: low
 * @high: high
 *
 * Return: index
 */

int partition(int *array, size_t size, int low, int high)
{
	int pivot = array[high];
	int i = low - 1;
	int j = 0;
	int temp = 0;

	for (j = low; j <= high -1; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			temp = array[j];
			array[j] = array[i];
			array[i] = temp;
			print_array(array, size);
		}
	}
	temp = array[high];
	array[high] = array[i + 1];
	array[i + 1] = temp;

	return i + 1;
}

/**
 * quicksort - quicksort
 * @array: array
 * @low: low
 * @high: high
 *
 */

void quicksort(int *array, size_t size, int low, int high)
{
	int p;

	if (low < high)
	{
		p = partition(array, size, low, high);
		quicksort(array, size, low, p - 1 );
		quicksort(array, size, p + 1, high);
	}
}


/**
 * quick_sort - sorts int array in ascending order using Quick sort algorithm
 * @array: array
 * @size: size of array
 */

void quick_sort(int *array, size_t size)
{
	if (array == NULL)
		return;

	quicksort(array, size, 0, size - 1);
}
