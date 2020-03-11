#include "function_pointers.h"

/**
 * array_iterator - executes a given function on every element of an array
 * @array: an array of integers
 * @size: the number of elements in the array
 * @action: pointer to a function that takes an int and returns void
 *
 * Description: action either prints each element in decimal or hexadecimal
 * form depending on which function is passed to array_iterator.
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t idx;

	if (!array || !action || !size)
		return;

	for (idx = 0; idx < size; idx++)
		(*action)(array[idx]);
}
