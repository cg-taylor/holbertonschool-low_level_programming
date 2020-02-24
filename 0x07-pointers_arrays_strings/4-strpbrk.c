#include <stddef.h>
#include "holberton.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer to the string to search
 * @accept: pointer to the string of bytes to search for
 *
 * Return: pointer to the first matching byte or NULL if none is found
 */

char *_strpbrk(char *s, char *accept)
{
	int idx;
	char *found = s;

	for ( ; *found; found++)
	{
		for (idx = 0; accept[idx]; idx++)
		{
			if (*found == accept[idx])
				return (found);
		}
	}

	return (NULL);
}
