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
	char *found, *str, *substr;
	int flag = 0;

	for (str = haystack; *str; str++)
	{
		if (*str == *needle)
		{
			found = str;
			flag = 1;

			for (substr = needle; *substr; substr++, str++)
			{
				if (*str != *substr)
				{
					flag = 0;
					break;
				}
			}
			if (!*substr && flag)
				return (found);
		}
	}

	if (!flag)
		return (NULL);
	return (found);
}
