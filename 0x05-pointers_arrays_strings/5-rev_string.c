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
 * rev_string - reverses a string so that it's stored backwards
 * @s: a pointer to a string
 *
 * Return: void
 */

void rev_string(char *s)
{
	int length, idx;
	char temp;

	length = _strlen(s) - 1;

	for (idx = 0; idx < length / 2; idx++)
	{
		temp = s[idx];
		s[idx] = s[length - idx];
		s[length - idx] = temp;
	}
}
