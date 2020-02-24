#include <stddef.h>
#include "holberton.h"

/**
 * _strspn - determines the length of a prefix substring
 * @s: pointer to the string to search
 * @accept: pointer to a string of bytes to search for
 *
 * Return: the number of sequential bytes in `s` consisting only of bytes from
 *         `accept`
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count, idx;
	char *str = s;

	count = 0;

	for ( ; *str; str++)
	{
		for (idx = 0; *(accept + idx); idx++)
		{
			if (*str == *(accept + idx))
			{
				count++;
				break;
			}
		}
		if (*str != *(accept + idx))
			break;
	}

	return (count);
}
