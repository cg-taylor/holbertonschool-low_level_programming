#include "holberton.h"

/**
 * _strlen - calculate the length of a string
 * @str: a pointer to a string
 * @length: the length of the string
 *
 * Return: the length of the string
 */

int _strlen(char *str, int length)
{
	if (*str)
		return (_strlen(str + 1, length + 1));
	return (length);
}

/**
 * compareFirstAndLastChar - compare the first and last characters in a string
 * @str: pointer to the string to test
 * @end: the last index in the string
 * @start: beginning index of string
 *
 * Return: 1 if the string is a palindrome, 0 if it is not
 */

int compareFirstAndLastChar(char *str, int end, int start)
{
	if (start >= end)
		return (1);

	if (str[start] == str[end])
		return (compareFirstAndLastChar(str, end - 1, start + 1));
	else
		return (0);

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

	length = _strlen(s, 0) - 1;

	if (compareFirstAndLastChar(s, length, 0))
		return (1);
	return (0);
}
