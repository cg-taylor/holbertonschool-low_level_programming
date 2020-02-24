#include "holberton.h"

/**
 * _memcpy - copies `n` bytes of a buffer to a new memory location
 * @dest: pointer to an empty buffer
 * @src: pointer to the buffer to be copied
 * @n: the number of bytes to copy from `src`
 *
 * Return: pointer to `dest`
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int idx;

	for (idx = 0; idx < n && *(src + idx); idx++)
		*(dest + idx) = *(src + idx);

	return (dest);
}
