#include "holberton.h"
#include <stddef.h>

/**
 * cap_string - capitalize every word in a string
 * @str: pointer to the string to modify
 *
 * Return: pointer to the modified string
 */

char *cap_string(char *str)
{
	char *separator = ",;.!?\"(){} \t\n";
	int i, j;

	if (!str)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		for (j = 0; separator[j]; j++)
		{
			if (str[i] == separator[j])
			{
				i++;
				if (str[i] >= 'a' && str[i] <= 'z')
					str[i] -= 32;
			}
		}
	}

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;

	return (str);
}
