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
 * str_concat - concatenates two strings in dynamically allocated buffer
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 *
 * Return: pointer to the new string or NULL if it fails
 */

char *str_concat(char *s1, char *s2)
{
	char *new = NULL;
	int idx, length1, length2;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	length1 = _strlen(s1);
	length2 = _strlen(s2);

	new = malloc(sizeof(char) * (length1 + length2 + 1));

	if (!new)
		return (NULL);

	for (idx = 0; *s1; idx++, s1++)
		new[idx] = *s1;

	for ( ; *s2; idx++, s2++)
		new[idx] = *s2;

	new[idx] = '\0';

	return (new);
}
