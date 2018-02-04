#include "holberton.h"

/**
 * cap_string - capitalize all word of a string
 * @s: string array
 * Return: string array
 */

char *cap_string(char *s)
{
	int i;
	int prev;

	for (i = 0; s[i] != '\0'; i++)
	{
		prev = i - 1;
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (i == 0)
				s[i] = s[i] - 32;
			else if (s[prev] >= 9 && s[prev] <= 10)
				s[i] = s[i] - 32;
			else if (s[prev] >= 32 && s[prev] <= 34)
				s[i] = s[i] - 32;
			else if (s[prev] >= 40 && s[prev] <= 41)
				s[i] = s[i] - 32;
			else if (s[prev] == 46)
				s[i] = s[i] - 32;
			else if (s[prev] == 59)
				s[i] = s[i] - 32;
			else if (s[prev] == 123 || s[prev] == 125)
				s[i] = s[i] - 32;
		}
	}

	return (s);
}
