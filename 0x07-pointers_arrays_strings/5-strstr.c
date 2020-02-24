#include <stddef.h>
#include "holberton.h"

/**
 * _strstr - locate a substring within a string
 * @haystack: pointer to the string to search
 * @needle: pointer to the substring to search for
 *
 * Return: pointer to the beginning of the substring or NULL if not found
 */

char *_strstr(char *haystack, char *needle)
{
	char *found = NULL;
	int idx;

	if (!haystack || !needle)
		return (NULL);

	for ( ; *haystack; haystack++)
	{
		if (*haystack == *needle)
		{
			found = haystack;
			for (idx = 0; *(needle + idx) && *haystack; idx++, haystack++)
			{
				if (*haystack != *(needle + idx))
				{
					found = NULL;
					break;
				}
			}
		}
	}

	return (found);
}
