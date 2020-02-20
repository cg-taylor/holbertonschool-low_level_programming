#include "holberton.h"

/**
 * reverse_array - reverse the contents of an array of integers
 * @a: pointer to the first element in the array
 * @n: the number of elements in the array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int idx, temp;

	for (idx = 0; idx < n / 2; idx++)
	{
		temp = a[idx];
		a[idx] = a[(n - 1) - idx];
		a[(n - 1) - idx] = temp;
	}
}
