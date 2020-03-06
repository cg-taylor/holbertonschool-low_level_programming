#include "holberton.h"

/**
 * _strlen - Determine the length of a string
 * @str: pointer to a string
 *
 * Return: the number of characters in the string
 */

int _strlen(char *str)
{
	int length;

	for (length = 0; str[length]; length++)
		;

	return (length);
}

/**
 * string_nconcat - Concatenate two strings
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * @n: number of bytes to append from `s2`
 *
 * Description: Allocates a new space in memory to hold `s1` and `n` bytes of
 *              `s2`. The new string is null terminated even if all of `s2` is
 *              not included. A NULL string is treated like an empty string.
 *
 * Return: pointer to the new string or NULL if it fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new = NULL;
	unsigned int i, length1, length2, total_length;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	length1 = _strlen(s1);
	length2 = _strlen(s2);

	if (n > length2)
		n = length2;

/* Extra byte for the null terminator is included in length1 */
	total_length = length1 + n;

	new = malloc(sizeof(char) * total_length);

	if (!new)
		return (NULL);

	for (i = 0; i < total_length; i++)
	{
		if (i < length1 && *s1)
		{
			new[i] = *s1;
			s1++;
		}
		else
		{
			new[i] = *s2;
			s2++;
		}
	}
	new[i] = '\0';

	return (new);
}
