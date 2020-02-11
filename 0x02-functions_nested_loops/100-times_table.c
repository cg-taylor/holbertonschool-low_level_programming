#include "holberton.h"

/**
 * print_times_table - Print the `n` times table
 * @n: an integer between 0 and 15
 *
 * Return: void
 */

void print_times_table(int n)
{
	int x, y;
	int value = 0;

	if (n > 15 || n < 0)
		return;

	for (y = 0; y <= n; y++)
	{
		for (x = 0; x <= n; x++)
		{
			value = x * y;

			if (x != 0)
			{
				_putchar(',');
				_putchar(' ');
			}

			if (value < 10 && x != 0)
			{
				_putchar(' ');
				_putchar(' ');
			}
			else if (value >= 10 && value < 100)
			{
				_putchar(' ');
				_putchar((value / 10) + '0');
			}
			else if (value >= 100)
			{
				_putchar((value / 100) + '0');
				_putchar(((value % 100) / 10) + '0');
			}
			_putchar((value % 10) + '0');
		}
		_putchar('\n');
	}
}
