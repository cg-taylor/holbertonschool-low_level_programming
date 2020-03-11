#include "function_pointers.h"

/**
 * int_index - search for the first matching integer in an array
 * @array: the array to search
 * @size: the number of elements in the array
 * @cmp: function pointer to a comparison function
 *
 * Return: index of the first matching element or -1 if there are no matches
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int idx, match;

	if (!array || !cmp || size < 1)
		return (-1);

	for (idx = 0; idx < size; idx++)
	{
		match = cmp(array[idx]);
		if (match)
			break;
	}

	if (match)
		return (idx);
	else
		return (-1);
}
