#include "holberton.h"

/**
 * _isupper - Checks if a character is upper case
 * @c: the character to be tested
 *
 * Return: 1 if `c` is uppercase, 0 if not
 */

int _isupper(int c)
{
	int check;

	for (check = 'A'; check <= 'Z'; check++)
	{
		if (c == check)
			return (1);
	}

	return (0);
}
