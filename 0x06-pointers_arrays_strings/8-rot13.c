#include "holberton.h"

/**
 * rot13 - encodes and decodes strings in rot13
 * @str: pointer to the string to encode
 *
 * Return: pointer to modified string
 */

char *rot13(char *str)
{
	char *rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	int i, j;

	for (i = 0; str[i]; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == alphabet[j])
			{
				str[i] = rot13[j];
				break;
			}
		}
	}
	return (str);
}
