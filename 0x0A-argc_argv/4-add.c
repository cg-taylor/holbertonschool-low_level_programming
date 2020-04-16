#include "holberton.h"

/**
 * main - add positive numbers and print the sum
 * @ac: number of arguments passed to the program
 * @av: array of arguments passed to the program
 *
 * Return: 0 on success, 1 on failure
 */

int main(int ac, char **av)
{
	int i, sum = 0;
	int number = 0;
	char *check;

	if (ac <= 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < ac; i++)
	{
		number = strtol(av[i], &check, 10);
		if (*check == '\0')
			sum += number;
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", sum);
	return (0);
}
