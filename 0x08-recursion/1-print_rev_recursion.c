#include "holberton.h"

/**
 * _print_rev_recursion - print a string in reverse and a newline
 * @s: pointer to the beginning of a string
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(++s);
		_putchar(*s);
	}
}
