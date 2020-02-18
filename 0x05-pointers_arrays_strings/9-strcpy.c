#include "holberton.h"

/**
 * _strcpy - copies a string into a new buffer
 * @dest: pointer to the new buffer
 * @src: pointer to the string to copy
 *
 * Return: pointer to `dest`
 */

char *_strcpy(char *dest, char *src)
{
	int idx;

	if (!(src))
	{
		return (dest);
	}

/* Copy everything up to the null byte */
	for (idx = 0; *(src + idx); idx++)
		*(dest + idx) = *(src + idx);

/* Copy the null byte */
	*(dest + idx) = *(src + idx);

	return (dest);
}
