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
 * puts2 - print every other character of a string
 * @str: pointer to a string
 *
 * Return: void
 */

void puts2(char *str)
{
	int idx, length;

	length = _strlen(str);

	for (idx = 0; idx < length; idx += 2)
		_putchar(str[idx]);
	_putchar('\n');
}
