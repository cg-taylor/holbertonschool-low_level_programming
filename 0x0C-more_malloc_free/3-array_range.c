#include "holberton.h"

/**
 * array_range - create and fill an array of integers
 * @min: the number to start filling the array from
 * @max: the last number to store in the array
 *
 * Description: The array contains all values from `min` to `max` (inclusive)
 *              in numerical order.
 *
 * Return: pointer to the new array or NULL if it fails
 */

int *array_range(int min, int max)
{
	int *array = NULL;
	int idx;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(int) * (1 + max - min));

	if (!array)
		return (NULL);

	for (idx = 0; min <= max; idx++, min++)
	{
		array[idx] = min;
	}

	return (array);
}
