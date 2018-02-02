#include "holberton.h"

/**
 * reverse_array - reverses array
 * @a: array of integers
 * @n: number of elements in array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int half = n / 2;
	int left, right, i;

	if (n !== (sizeof(a) / sizeof(int)))
		n = sizeof(a) / sizeof(int);
	n = n - 1;

	for (i = 0; i < half + 1; i++)
	{
		left = a[n - i];
		right = a[i];
		a[i] = left;
		a[n - i] = right;
	}
}
