#include "holberton.h"

/**
 * _strlen - count the number of characters in a string
 * @s: pointer to a string
 *
 * Return: number of characters in the string
 */

int _strlen(char *s)
{
	int count = 0;

	while (*(s + count))
		count++;

	return (count);
}

/**
 * print_rev - print a string in reverse
 * @s: pointer to a string
 *
 * Return: void
 */

void print_rev(char *s)
{
	int length;

/*
 * Remove one from length because otherwise it would start printing from the
 * null byte
 */
	length = _strlen(s) - 1;

	while (length >= 0)
	{
		_putchar(*(s + length));
		length--;
	}
	_putchar('\n');
}
