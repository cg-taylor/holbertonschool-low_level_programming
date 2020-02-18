#include <stdio.h>
#include "holberton.h"

/**
 * print_array - print `n` elements of an array of integers
 * @a: pointer to the first element in an array of integers
 * @n: number of elements of the array to be printed
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int idx;

	for (idx = 0; idx < n; idx++)
	{
		if (idx < n - 1)
			printf("%d, ", a[idx]);
		else
			printf("%d\n", a[idx]);
	}
}
