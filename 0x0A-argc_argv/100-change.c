#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * coinhelper - determines minimum number of coins
 * @cents: number of cents to equal
 *
 * Return: number of coins
 */

int coinhelper(int cents)
{
	int num_coins = 0;

	while (cents / 25)
	{
		num_coins++;
		cents -= 25;
	}
	while (cents / 10)
	{
		num_coins++;
		cents -= 10;
	}
	while (cents / 5)
	{
		num_coins++;
		cents -= 5;
	}
	while (cents / 2)
	{
		num_coins++;
		cents -= 2;
	}
	while (cents / 1)
	{
		num_coins++;
		cents -= 1;
	}
	return (num_coins);
}

/**
 * main - find the minimum number of coins
 * @argc: the number of arguments
 * @argv: pointer to an array of arguments
 *
 * Return: 0 on success, 1 on error
 */

int main(int argc, char **argv)
{
	int cents, num_coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
		printf("0\n");
	else
	{
		num_coins = coinhelper(cents);
		printf("%d\n", num_coins);
	}
	return (0);
}
