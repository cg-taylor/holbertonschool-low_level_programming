#include "holberton.h"

/**
 * _isdigit - Checks if a character is a digit
 * @c: the character to be tested
 *
 * Return: 1 if `c` is a digit, 0 if not
 */

int _isdigit(int c)
{
	int check;

	for (check = 0; check <= 9; check++)
	{
		if (c == check)
			return (1);
	}

	return (0);
}
