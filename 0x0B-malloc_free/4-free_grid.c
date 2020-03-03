#include "holberton.h"

/**
 * free_grid - frees a 2D grid allocated by `alloc_grid`
 * @grid: double pointer to the grid
 * @height: number of rows in the grid
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	if (!grid || height <= 0)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
