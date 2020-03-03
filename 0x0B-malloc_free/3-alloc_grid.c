#include "holberton.h"

/**
 * alloc_grid - dynamically allocate memory for a 2D array of integers
 * @width: the number of columns in the array
 * @height: the number of rows in the array
 *
 * Return: a pointer to the new array or NULL if it fails
 */

int **alloc_grid(int width, int height)
{
	int **array = NULL;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(sizeof(int) * height);

	if (!array)
		return (NULL);

	for (y = 0; y < height; y++)
	{
		array[y] = malloc(sizeof(int) * width);

		if (!array[y])
		{
			for (x = 0; x < y; x++)
				free(array[x]);
			free(array);

			return (NULL);
		}
	}
	return (array);
}
