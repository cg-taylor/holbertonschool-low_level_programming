#include "holberton.h"
#include <limits.h>

/**
 * _print_binary - print the binary representation of a number
 * @n: the number to print in binary
 *
 * Return: void
 */

void _print_binary(unsigned long int n)
{
	if (n)
		_print_binary(n >> 1);

	if (n != 0)
	{
		if (!(n & 1))
			_putchar('0');
		if (n & 1)
			_putchar('1');
	}
}

/**
 * print_binary - print the binary representation of a number
 * @n: the number to print in binary
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	else
		_print_binary(n);
}
