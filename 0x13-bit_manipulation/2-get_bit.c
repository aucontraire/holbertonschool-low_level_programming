#include "holberton.h"
#include <limits.h>

/**
 * get_bit - returns the value of a bit at a given index
 * @n: integer
 * @index: index
 * Return: integer
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int on;
	unsigned int i;
	unsigned long int x;

	if (index >= (sizeof(n) * 8))
		return (-1);
	on = 0;
	for (i = 63; i != UINT_MAX; i--)
	{
		x = (n >> i) & 1;
		if (x == 1)
		{
			on = 1;
			if (index > i)
				return (-1);
		}
		if (on == 1 && i == index)
			return (((n >> i) & 1));
	}
	return (-1);
}
