#include "holberton.h"

/**
 * _islower - tests if a character is lowercase
 * @c: the character to test
 *
 * Return: 1 if c is lowercase, 0 if not
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

	return (0);
}
