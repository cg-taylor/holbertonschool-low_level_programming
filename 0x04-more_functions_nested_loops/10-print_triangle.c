#include "holberton.h"

/**
 * print_triangle - print a reverse right triangle
 * @size: the height and width of the triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
	int num_space, num_char, total, idx;
	num_char = 1;

	if (size <= 0)
		_putchar('\n');

	for (idx = 0; idx < size; idx++)
	{
		total = 0;

		for (num_space = size - num_char; num_space > 0; num_space--)
		{
			_putchar(' ');
			total++;
		}

		for (num_char = 1; total < size && num_char <= size; num_char++)
		{
			_putchar('#');
			total++;
		}
		_putchar('\n');
	}
}
