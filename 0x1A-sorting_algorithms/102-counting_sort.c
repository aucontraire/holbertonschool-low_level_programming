#include "sort.h"

/**
 * counting_sort - sort array using counting sort algorithm
 * @array: array
 * @size: size of array
 */

void counting_sort(int *array, size_t size)
{
	size_t i = 0;
	int j = 0;
	int max = 0;
	int *counts;
	int *sums;
	int *sorted;
	int tally = 0;

	if (array == NULL)
		return;
	if (size < 2)
		return;
	for (i = 0; i < size; i++)
	{
		if (max < array[i])
			max = array[i];
	}
	counts = malloc(sizeof(int) * (max + 1));
	if (counts == NULL)
		return;
	sums = malloc(sizeof(int) * (max + 1));
	if (sums == NULL)
		return;
	sorted = malloc(sizeof(int) * size);
	if (sorted == NULL)
		return;
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
