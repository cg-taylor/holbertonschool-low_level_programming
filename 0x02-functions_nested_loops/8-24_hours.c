#include "holberton.h"

/**
 * jack_bauer - Print every minute of the day in 24 hour format
 *
 * Return: void
 */

void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			if (hour < 10)
				_putchar('0');
			else
				_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');

			_putchar(':');

			if (minute < 10)
				_putchar('0');
			else
				_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');

			_putchar('\n');
		}
	}
}
