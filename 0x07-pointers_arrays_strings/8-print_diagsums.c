#include <stdio.h>
#include "holberton.h"

/**
 * leftToRight - Calculates the diagonal sum from top left to bottom right
 * @a: pointer to the 2D array of integers
 * @size: the size of the array
 *
 * Return: the diagonal sum
 */

int leftToRight(int *a, int size)
{
	int i;
	int sum = 0;

	for (i = 0; i < (size * size); i += (size + 1))
	{
		sum += a[i];
	}
	return (sum);
}

/**
 * rightToLeft - Calculates the diagonal sum from top right to bottom left
 * @a: pointer to the 2D array of integers
 * @size: the size of the array
 *
 * Return: the diagonal sum
 */

int rightToLeft(int *a, int size)
{
	int i;
	int sum = 0;

	for (i = (size - 1); i < (size * size) - 1; i += (size - 1))
	{
		sum += a[i];
	}
	return (sum);
}

/**
 * print_diagsums - print the sums of the diagonals of a square matrix
 * @a: pointer to the 2D array of integers
 * @size: the size of the array
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int rightToLeftSum, leftToRightSum;

	rightToLeftSum = rightToLeft(a, size);
	leftToRightSum = leftToRight(a, size);

	printf("%d, %d\n", leftToRightSum, rightToLeftSum);
}
