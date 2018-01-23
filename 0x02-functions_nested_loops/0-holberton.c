#include "holberton.h"

/**
 * main - prints Holberton
 *
 * Description: prints Holberton
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char text[11] = "Holberton\n";
	int i = 0;

	for (i = 0; i < 11; i++)
	{
		_putchar(text[i]);
	}

	return (0);
}
