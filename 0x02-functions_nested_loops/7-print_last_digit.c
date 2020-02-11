#include "holberton.h"

/**
 * _abs - Determine the absolute value of an integer
 * @num: an integer
 *
 * Return: the absolute value of num
 */

int _abs(int num)
{
	if (num < 0)
		return (num * -1);
	return (num);
}

/**
 * print_last_digit - Print the last digit of an integer
 * @num: an integer
 *
 * Return: the value of the last digit
 */

int print_last_digit(int num)
{
	int last;

	last = num % 10;
	last = _abs(last);
	_putchar(last + '0');

	return (last);
}
