#include "holberton.h"

/**
 * string_toupper - changes a string to all uppercase letters
 * @str: the string to modify
 *
 * Return: pointer to the modified string
 */

char *string_toupper(char *str)
{
	int idx;

	for (idx = 0; str[idx]; idx++)
	{
		if (str[idx] >= 'a' && str[idx] <= 'z')
/* Difference between the ASCII values of 'a' and 'A' is 32 */
			str[idx] -= 32;
	}
	return (str);
}
