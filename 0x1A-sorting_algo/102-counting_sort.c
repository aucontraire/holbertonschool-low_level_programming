#include "sort.h"

/**
 * find_max - find max integer in array
 * @array: array
 * @size: size of array
 *
 * Return: max integer
 */

int find_max(int *array, size_t size)
{
	int max = 0;
	size_t i = 0;

	for (i = 0; i < size; i++)
	{
		if (max < array[i])
			max = array[i];
	}
	return (max);
}

/**
 * initialize_array - fill array with 0s
 * @counts: array
 * @max: highest value to iterate to
 */

void initialize_array(int *counts, int max)
{
	int j = 0;

	for (j = 0; j <= max; j++)
		counts[j] = 0;
}

/**
 * free_arrays - free arrays that are not needed
 * @counts: array of frequencies
 * @sums: array of cummulative sums
 * @sorted: sorted array
 */

void free_arrays(int *counts, int *sums, int *sorted)
{
	free(counts);
	free(sums);
	free(sorted);
}

/**
 * counting_sort - sort array using counting sort algorithm
 * @array: array
 * @size: size of array
 */

void counting_sort(int *array, size_t size)
{
	size_t i = 0;
	int j = 0, max = 0, tally = 0, *counts, *sums, *sorted;

	if (array == NULL || size < 2)
		return;
	max = find_max(array, size);
	counts = malloc(sizeof(int) * (max + 1));
	if (counts == NULL)
		return;
	sums = malloc(sizeof(int) * (max + 1));
	if (sums == NULL)
	{
		free(counts);
		return;
	}
	sorted = malloc(sizeof(int) * size);
	if (sorted == NULL)
	{
		free(counts);
		free(sums);
		return;
	}
	initialize_array(counts, max);
	for (i = 0; i < size; i++)
		counts[array[i]]++;
	for (j = 0; j <= max; j++)
	{
		tally  = tally + counts[j];
		sums[j] = tally;
	}
	print_array(sums, (size_t)max + 1);
	for (j = (int)size - 1; j >= 0; j--)
	{
		sorted[sums[array[j]] - 1] = array[j];
		sums[array[j]]--;
	}
	for (j = 0; j < (int)size; j++)
		array[j] = sorted[j];
	free_arrays(counts, sums, sorted);
}
