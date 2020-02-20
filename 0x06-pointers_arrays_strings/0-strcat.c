#include "holberton.h"

/**
 * _strcat - concatenates two strings
 * @dest: pointer to the string to append to
 * @src: pointer the string to be appended
 *
 * Return: pointer to the new string
 */

char *_strcat(char *dest, char *src)
{
	char *temp = dest;
	int idx;

	if (!src)
		return (dest);
	else if (!dest)
		return (src);

	while (*temp)
		temp++;

	for (idx = 0; src[idx]; idx++)
		temp[idx] = src[idx];
	temp[idx] = src[idx];

	return (dest);
}
