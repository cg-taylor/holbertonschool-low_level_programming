#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - reallocate memory to a new pointer
 * @ptr: the pointer to reallocate
 * @old_size: the size of ptr
 * @new_size: the size of the new memory block
 *
 * Return: void pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *new_ptr;

	if (old_size == new_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(sizeof(char) * new_size);
	if (!new_ptr)
		return (NULL);

	if (ptr)
	{
		for (i = 0; i < old_size; i++)
			new_ptr[i] = *((char *)ptr + i);
	}
	free(ptr);

	return (new_ptr);
}
