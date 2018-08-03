#include "search_algos.h"

/**
 * print_subarray - prints a subarray
 * @array: pointer to array
 * @first: index of first element to print
 * @last: index of last element to print
 */

void print_subarray(int *array, size_t first, size_t last)
{
	size_t i = 0;

	printf("Searching in array: ");
	for (i = first; i < last; i++)
	{
		printf("%d, ", array[i]);
	}
	printf("%d\n", array[i]);
}

/**
 * advanced_binary - search for value in sorted int array w Binary search alg
 * @array: pointer to int array
 * @size: size of array
 * @value: value to find
 * Return: index of first match or -1 if not found
 */

int advanced_binary(int *array, size_t size, int value)
{
	size_t first = 0;
	size_t last = 0;
	size_t mid = 0;

	if (array == NULL || size == 0)
		return (-1);

	last = size - 1;

	while (first <= last)
	{
		print_subarray(array, first, last);
		mid = (first + last) / 2;
		if (array[mid] > value)
			last = mid - 1;
		else if (array[mid] < value)
			first = mid + 1;
		else
		{
			if (array[mid - 1] != value)
				return (mid);
			while (array[mid] == value)
			{
				mid -= 1;
			}
			return (mid + 1);
		}
	}
	return (-1);
}
