#include "holberton.h"

/**
 * print_line - Draw a horizontal line
 * @n: length of the horizontal line
 *
 * Return: void
 */

void print_line(int n)
{
	int num = n;

	while(num > 0)
	{
		_putchar('_');
		num--;
	}
	_putchar('\n');
}
