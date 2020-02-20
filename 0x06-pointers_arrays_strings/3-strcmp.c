#include "holberton.h"

/**
 * _strcmp - compares two strings
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 *
 * Return: the difference between the ASCII values of the first non-matching
 *         characters, 0 if they match
 */

int _strcmp(char *s1, char *s2)
{
	int idx, check = 0;

	if (!s1 && !s2)
		return (0);
	else if (!s1)
		return (0 - s2[0]);
	else if (!s2)
		return (s1[0]);

	for (idx = 0; s1[idx] && s2[idx] && !check; idx++)
	{
		if (s1[idx] != s2[idx])
			check = s1[idx] - s2[idx];
	}

	return (check);
}
