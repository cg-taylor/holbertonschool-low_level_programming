#include "holberton.h"

/**
 * print_chessboard - print a 2D array containing a chessboard
 * @a: pointer to the first element in the array
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
