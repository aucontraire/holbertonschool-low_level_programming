#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum integer
 * @max: maximum integer
 * Return: pointer to allocated memory
 */

int *array_range(int min, int max)
{
	int *arr, diff, num, j;

	if (min > max)
		return (NULL);
	diff = max - min + 1;
	arr = malloc(diff * sizeof(int));

	for (num = min, j = 0; num <= max && j < diff; num++, j++)
		arr[j] = num;

	return (arr);
}
