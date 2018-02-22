#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - sum of two numbers
 * @a: first integer
 * @b: second integer
 * Return: sum (integer)
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - difference between two numbers
 * @a: first integer
 * @b: second integer
 * Return: difference (integer)
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - product of two numbers
 * @a: first integer
 * @b: second integer
 * Return: product (integer)
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - quotient of two numbers
 * @a: first integer (dividend)
 * @b: second integer (divisor)
 * Return: quotient (integer)
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - modulo (remainder)
 * @a: first integer (dividend)
 * @b: second integer (divisor)
 * Return: remainder of division (integer)
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
