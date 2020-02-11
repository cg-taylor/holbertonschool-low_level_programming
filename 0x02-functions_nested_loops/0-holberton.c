#include "holberton.h"

/**
 * main - print Holberton using _putchar
 *
 * Return: Always 0
 */

int main(void)
{
	char *str = "Holberton\n";

	while (*str)
	{
		_putchar(*str);
		str++;
	}

	return (0);
}
