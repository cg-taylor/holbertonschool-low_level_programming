#include "holberton.h"

/**
 * calcLength - calculate the length of a string
 * @str: a pointer to a string
 * @length: the length of the string
 *
 * Return: the length of the string
 */

int calcLength(char *str, int length)
{
	if (*str)
		return (calcLength(str + 1, length + 1));
	return (length);
}

/**
 * _strlen_recursion - determine the length of a string using recursion
 * @s: pointer to the beginning of a string
 *
 * Return: the length of a string
 */

int _strlen_recursion(char *s)
{
	if (!s || !*s)
		return (0);
	else
		return (calcLength(s, 0));
}
