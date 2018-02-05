#include "holberton.h"

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character to search
 * Return: pointer to first occurrence of c
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}

		i++;
	}
	return (s + i);
}
