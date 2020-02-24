#include "holberton.h"

/**
 * _memset - Fills a buffer with a constant byte
 * @s: pointer to the buffer to fill
 * @b: the byte to fill with
 * @n: the number of bytes to fill
 *
 * Return: pointer to the filled buffer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int idx;

	for (idx = 0; idx < n; idx++)
		s[idx] = b;

	return (s);
}
