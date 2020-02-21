#include <stddef.h>
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
 * _strncpy - copy `n` bytes of a string to a new buffer
 * @dest: pointer to the new buffer
 * @src: pointer to the string to copy
 * @n: number of bytes to copy
 *
 * Return: pointer to the new string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int idx, length, max;

	length = _strlen(src);

	if (n > length)
		max = length;
	else
		max = n;

	for (idx = 0; idx < max; idx++)
		dest[idx] = src[idx];

	if (n > length)
		for (idx = length; idx < n; idx++)
			dest[idx] = '\0';

	return (dest);
}
