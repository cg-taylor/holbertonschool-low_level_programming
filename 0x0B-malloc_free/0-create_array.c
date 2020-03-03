#include "holberton.h"

/**
 * create_array - allocate memory for an array of chars, then initialize it
 * @size: the size of the array
 * @c: the byte to fill it with
 *
 * Return: pointer to the array or NULL if malloc fails or size is 0
 */

char *create_array(unsigned int size, char c)
{
	char *array = NULL;
	unsigned int idx;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (!array)
		return (NULL);

	for (idx = 0; idx < size; idx++)
		array[idx] = c;

	return (array);
}
