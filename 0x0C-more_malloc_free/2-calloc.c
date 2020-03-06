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

/**
 * _calloc - Allocate memory for an array of `nmemb` elements of `size` bytes
 * @nmemb: the number of items in the array
 * @size: the size of each item in the array (in bytes)
 *
 * Return: pointer to the new array or NULL if it fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array = NULL;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(nmemb * size);

	if (!array)
		return (NULL);

	_memset(array, 0, nmemb * size);

	return (array);
}
