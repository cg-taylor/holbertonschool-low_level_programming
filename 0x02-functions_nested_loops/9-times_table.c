#include "holberton.h"

/**
 * times_table - Print the 9 times table
 *
 * Return: void
 */

void times_table(void)
{
	int x, y;
	int value = 0;

	for (y = 0; y <= 9; y++)
	{
		for (x = 0; x <= 9; x++)
		{
			value = x * y;

			if (x != 0)
			{
				_putchar(',');
				_putchar(' ');
			}

			if (value < 10 && x != 0)
				_putchar(' ');
			else if (value >= 10)
				_putchar((value / 10) + '0');
			_putchar((value % 10) + '0');
		}
		_putchar('\n');
	}
}
