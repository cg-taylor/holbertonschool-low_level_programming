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
 * argstostr - concatenates all command line arguments
 * @ac: the number of command line arguments
 * @av: pointer to an array containing the command line arguments
 *
 * Description: Concatenates all command line arguments into a single string
 *              where each argument is separated by a newline
 *
 * Return: pointer to the new string or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	char *str = NULL;
	int i, j, k, length;

	length = 0;
	k = 0;

	if (!ac || !av)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		length += _strlen(*(av + i));
	}

	str = malloc(sizeof(char) * (length + ac + 1));

	if (!str)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++, k++)
			str[k] = av[i][j];
		str[k++] = '\n';
	}
	str[k] = '\0';

	return (str);
}
