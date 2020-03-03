#include "holberton.h"

/**
 * _strlen - determine the length of a string
 * @str: pointer to the string
 *
 * Return: the length of the string
 */

int _strlen(char *str)
{
	int length;

	if (!str)
		return (0);

	for (length = 0; str[length]; length++)
		;

	return (length);
}

/**
 * str_concat - concatenates two strings in a dynamically allocated memory buffer
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 *
 * Return: pointer to the new string or NULL if it fails
 */

char *str_concat(char *s1, char *s2)
{
	char *new = NULL;
	int length1, length2, idx;

	if (!s1 && !s2)
		return (NULL);

	length1 = _strlen(s1);
	length2 = _strlen(s2);

	new = malloc(sizeof(char) * (length1 + length2));

	if (!new)
		return (NULL);

	for (idx = 0; s1[idx]; idx++)
		new[idx] = s1[idx];

	for ( ; s2[idx - length1]; idx++)
		new[idx] = s2[idx - length1];

	new[idx] = '\0';

	return (new);
}
