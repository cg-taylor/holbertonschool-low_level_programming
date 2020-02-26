#include "holberton.h"

/**
 * _puts_recursion - print a string and a newline
 * @s: pointer to the beginning of a string
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
	else
	{
		_putchar('\n');
	}
}
