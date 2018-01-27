#include <math.h>
#include "holberton.h"

/**
 * power - exponents
 * @base: base
 * @exp: exponent
 * Return: result (int)
 */

int  power(int base, int exp)
{
	int i, num;

	num = 1;
	for (i = 0; i < exp; ++i)
		num *= base;

	return (num);
}

/**
 * print_number - prints an integer
 * @n: number to print
 * Return void
 */

void print_number(int n)
{
	int negative = 0;
	int digit;
	int divisor;
	int begin = 0;
	int place = 10;

	if (n < 0)
	{
		negative = 1;
		n = n * -1;
	}
	while (place >= 0)
	{
		/*divisor = pow(10, place);*/
		divisor = power(10, place);
		digit = ((n / divisor) % 10);
		if (digit == 0 && begin == 0)
		{
			place--;
		}
		else if (digit != 0 && begin == 0)
		{
			begin = 1;
			if (negative == 1)
				_putchar('-');
			_putchar('0' + digit);
			place--;
		}
		else
		{
			_putchar('0' + digit);
			place--;
		}
	}
	if (digit == 0 && divisor == 1)
	{
		_putchar(48);
	}
}
