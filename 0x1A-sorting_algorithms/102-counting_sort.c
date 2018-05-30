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
	return max;
}

/**
 * counting_sort - sort array using counting sort algorithm
 * @array: array
 * @size: size of array
 */

void counting_sort(int *array, size_t size)
{
	size_t i = 0;
	int j = 0, max = 0, tally = 0;
	int *counts, *sums, *sorted;

	if (array == NULL)
		return;
	if (size < 2)
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
	for (j = 0; j <= max; j++)
		counts[j] = 0;
	for (i = 0; i < size; i++)
		counts[array[i]]++;
	for (j = 0; j <= max; j++)
	{
		tally  = tally + counts[j];
		sums[j] = tally;
	}
	print_array(sums, (size_t)max + 1);
	for (j = (int)size - 1; j >= 0; j--)
		sorted[sums[array[j]] - 1] = array[j];
	for (j = 0; j < (int)size; j++)
		array[j] = sorted[j];
}
