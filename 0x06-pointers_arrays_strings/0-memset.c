#include "holberton.h"

/**
 * _memset - fills memory with a constant byte
 * @s: string array
 * @b: constant byte
 * @n: number of bytes
 * Return: pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
