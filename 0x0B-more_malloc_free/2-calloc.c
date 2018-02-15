#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of members
 * @size: number of bytes
 * Return: pointer to allocated memory corresponding with the string
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;
	unsigned int i;
	char *k;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(size * nmemb);
	if (arr == NULL)
		return (NULL);

	k = arr;
	for (i = 0; i < nmemb * size; i++)
		k[i] = 0;
	return (arr);
}
