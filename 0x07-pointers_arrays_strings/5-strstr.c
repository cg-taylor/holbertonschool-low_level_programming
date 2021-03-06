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
	char *str, *substr;

	do {
		str = haystack;
		substr = needle;
		do {
			if (!*substr)
				return (haystack);
			if (!*str)
				return (NULL);

		} while (*str++ == *substr++);

	} while (*haystack++);

	return (NULL);
}
