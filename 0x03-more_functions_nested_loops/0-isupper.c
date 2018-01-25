#include "holberton.h"

/**
 * _isupper - checks for uppercase
 * @c: character to checked for case
 *
 * Return: 1 if uppercase, 0 if not uppercase
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
