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
 * compareFirstAndLastChar - compare the first and last characters in a string
 * @str: pointer to the string to test
 * @length: the length of the string
 * @idx: an index variable
 *
 * Return: 1 if the string is a palindrome, 0 if it is not
 */

int compareFirstAndLastChar(char *str, int length, int idx)
{
	if (str[idx] != str[length])
		return (0);
	else if (idx < length)
		return (compareFirstAndLastChar(str, length - 1, idx + 1));
	return (1);
}

/**
 * is_palindrome - determines if a string is a palindrome
 * @s: a pointer to a string
 *
 * Return: 1 if the string is a palindrome, 0 if it is not
 */

int is_palindrome(char *s)
{
	int length;

	if (!*s)
		return (1);
	else if (!s)
		return (0);

	length = calcLength(s, 0);

	return (compareFirstAndLastChar(s, length, 0));
}
