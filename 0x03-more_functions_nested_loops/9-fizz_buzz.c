#include "holberton.h"
#include <stdio.h>

/**
 * main - take the fizz-buzz challenge
 *
 * Return: Always 0
 */

int main(void)
{
	int n;

	for (n = 1; n < 101; n++)
	{
		if (n % 5 == 0 && n % 3 == 0)
			printf("FizzBuzz ");
		else if (n % 5 == 0)
			if (n == 100)
				printf("Buzz");
			else
				printf("Buzz ");
		else if (n % 3 == 0)
			printf("Fizz ");
		else
			printf("%d ", n);
	}
	printf("\n");

	return (0);
}
