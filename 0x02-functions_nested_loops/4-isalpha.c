#include "holberton.h"

/**
 * _isalpha - tests if a character is alphabetical
 * @c: the character to test
 *
 * Return: 1 if c is a letter, 0 if not
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);

	return (0);
}
