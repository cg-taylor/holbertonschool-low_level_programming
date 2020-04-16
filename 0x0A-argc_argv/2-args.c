#include "holberton.h"

/**
 * main - print all arguments received, one per line
 * @ac: number of arguments
 * @av: array containing arguments
 *
 * Return: Always 0
 */

int main(int ac, char **av)
{
	int i = 0;

	while (i < ac)
	{
		printf("%s\n", av[i]);
		i++;
	}
	return (0);
}
