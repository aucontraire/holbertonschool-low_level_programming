#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - creates array of chars
 * @size: size of array
 * @c: char to initialize array with
 * Return: NULL if size = 0, pointer to array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr = (char*) malloc(size * sizeof(char));

	if (size != 0)
	{
		for (i = 0; i < size; i++)
		{
			*(arr + i) = c;
		}

		return (arr);
	}
	else if (size == 0)
		return (0);
	else if (arr == NULL)
		return (0);
}
