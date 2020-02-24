#include <stddef.h>
#include "holberton.h"

/**
 * _strchr - locates the first occurence of a character in a string
 * @s: pointer to the string to search
 * @c: the character to search for
 *
 * Return: a pointer to the first occurence of `c`
 *         NULL if `c` isn't found
 */

char *_strchr(char *s, char c)
{
	char *found = s;

	while (*found)
	{
		if (*found == c)
			return (found);
		found++;
	}

	if (*found == c)
		return (found);

	return (NULL);
}
