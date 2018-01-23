#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: n is an integer
 *
 * Description: prints the last digit of a number
 *
 * Return: integer
 */

int print_last_digit(int n)
{
	int last;

	if (n < 0)
		last = -n % 10;
	else
		last = n % 10;

	_putchar('0' + last);

	return (last);
}
