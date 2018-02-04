#include "holberton.h"

/**
 * leet - function that encodes a string into 1337
 * @s: string array
 * Return: string array
 */

char *leet(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == 'a' || s[i] == 'A')
			s[i] = '4';
		if (s[i] == 'e' || s[i] == 'E')
			s[i] = '3';
		if (s[i] == 'o' || s[i] == 'O')
			s[i] = '0';
		if (s[i] == 't' || s[i] == 'T')
			s[i] = '7';
		if (s[i] == 'l' || s[i] == 'L')
			s[i] = '1';
	}

	return (s);
}
