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

/*	if (!src)
	{
		return (NULL);
	}
	else if (!dest)
	{
		dest = src;
		return (dest);
	}
*/
	length = _strlen(src);
	max = _strlen(dest);

	if (n > max)
		n = max;

	for (idx = 0; idx < n; idx++)
	{
		if (idx >= length)
			dest[idx] = '\0';
		else
			dest[idx] = src[idx];
	}

	if (n <= length)
		dest[idx] = src[idx];

	return (dest);
}
