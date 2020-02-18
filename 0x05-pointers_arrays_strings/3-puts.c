#include "holberton.h"

/**
 * _puts - print a string and a newline to stdout
 * @str: the string to print
 *
 * Return: void
 */

void _puts(char *str)
{
	int idx;

	while (*(str + idx))
	{
		_putchar(*(str + idx));
		idx++;
	}
	_putchar('\n');
}
