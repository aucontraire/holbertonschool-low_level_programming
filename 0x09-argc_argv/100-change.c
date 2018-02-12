#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * make_change - finds least number of coins
 * @n: money amount
 * Return: number of coins
 */

int make_change(int n)
{
	int coins, quarters, dimes, nickels, twocents, pennies;

	coins = 0;
	quarters = 0;
	dimes = 0;
	nickels = 0;
	twocents = 0;
	pennies = 0;

	while (n > 0)
	{
		if (n >= 25)
		{
			n -= 25;
			quarters += 1;
		}
		else if (n >= 10)
		{
			n -= 10;
			dimes += 1;
		}
		else if (n >= 5)
		{
			n -= 5;
			nickels += 1;
		}
		else if (n >= 2)
		{
			n -= 2;
			twocents += 1;
		}
		else
		{
			n -= 1;
			pennies += 1;
		}
	}
	coins = quarters + dimes + nickels + twocents + pennies;

	return (coins);
}

/**
 * main - prints minimum number of coins to make change
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: (0)
 */

int main(int argc, char *argv[])
{
	int coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (atoi(argv[1]) < 0)
	{
		printf("0\n");
	}
	else
	{
		coins = make_change(atoi(argv[1]));
		printf("%d\n", coins);
	}
	return (0);
}
