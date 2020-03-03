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
 * _strdup - copy a string to a dynamically allocated space in memory
 * @str: pointer to the string to copy
 *
 * Return: pointer to a new dynamically allocated string, NULL if it fails
 */

char *_strdup(char *str)
{
	char *new = NULL;
	int length, idx;

	if (!str)
		return (NULL);

	length = _strlen(str);

	new = malloc(sizeof(char) * length);

	if (!new)
		return (NULL);

	for (idx = 0; str[idx]; idx++)
		new[idx] = str[idx];

	new[idx] = '\0';

	return (new);
}
