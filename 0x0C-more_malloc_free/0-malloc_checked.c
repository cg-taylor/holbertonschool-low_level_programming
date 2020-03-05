#include "holberton.h"

/**
 * malloc_checked - Allocate `b` bytes of memory and check that it succeeded
 * @b: the number of bytes to allocate
 *
 * Return: pointer to the newly allocated memory
 *         normal process termination (`exit(98)`)n if `malloc` fails
 */

void *malloc_checked(unsigned int b)
{
	void *block = NULL;

	if (b > 0)
		block = malloc(b);
	else
		return (NULL);

	if (!block)
		exit(98);

	return (block);
}
