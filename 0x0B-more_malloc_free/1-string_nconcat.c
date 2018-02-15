#include "holberton.h"
#include <stdlib.h>

/**
 * _strlen - gets string length
 * @string: string
 * Return: length (int)
 */

int _strlen(char *string)
{
	int length;

	length = 0;
	while (string[length] != '\0')
	{
		length++;
	}
	return (length);
}

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: integer that determines whether entire s2 string will be used
 * Return: pointer to allocated memory corresponding with the string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int length1, length2, lengthc, i, j;
	char *str;

	length1 = _strlen(s1);
	length2 = _strlen(s2);

	if (n >= length2)
		lengthc = length1 + length2 + 1;
	else
	{
		lengthc = length1 + n + 1;
		length2 = n;
	}
	str = malloc(lengthc);
	if (str == NULL)
		return (NULL);

	i = 0;
	while (i < length1)
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < length2)
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	return (str);
}
