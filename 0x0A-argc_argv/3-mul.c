#include "holberton.h"

/**
 * main - multiply two numbers passed to the program
 * @ac: the number of arguments passed to the program
 * @av: array containing the arguments
 *
 * Return: 0 on success, 1 on failure
 */

int main(int ac, char **av)
{
	int num1, num2, product;

	if (ac > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(av[1]);
	num2 = atoi(av[2]);
	product = num1 * num2;

	printf("%d\n", product);

	return (0);
}
