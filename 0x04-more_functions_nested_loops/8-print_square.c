#include "holberton.h"

/**
 * print_square - prints a square
 * @size: the size of the square
 *
 * Return: void
 */

void print_square(int size)
{
	int side1, side2;

	if (size <= 0)
		_putchar('\n');

	for (side1 = size; side1; side1--)
	{
		for (side2 = size; side2; side2--)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
