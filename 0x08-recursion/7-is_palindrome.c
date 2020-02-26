#include "holberton.h"

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
		return (compareFirstAndLastChar(str, --length, ++idx));
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

	for (length = 0; s[length]; length++)
		;
	length--;
	return (compareFirstAndLastChar(s, length, 0));
}
