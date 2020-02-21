#include "holberton.h"
#include <limits.h>

/**
 * _pow - calculates `base` to the power of `exp`
 * @base: the number to be multiplied
 * @exp: the number of times to multiply it
 *
 * Return: the result of base to the power of exp or 1 if exp is 0
 */

int _pow(int base, int exp)
{
	if (exp >= 0)
		return (base * _pow(base, exp - 1));
	else
		return (1);
}

/**
 * print_number - print an integer
 * @n: the number to print
 *
 * Return: void
 */

void print_number(int n)
{
	int digit;
	int power10 = 10;

	if (n < 10 && n >= 0)
		_putchar(n + '0');

	for (power10 = 10; power10 > 0; power10--)
	{
		if (n / _pow(10, power10) == 0)
			continue;

		digit = n / _pow(10, power10);
		if (digit < 0)
		{
			_putchar('-');
			digit *= -1;
		}
	       	_putchar(digit + '0');
	}

}
