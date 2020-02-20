#include "holberton.h"

/**
 * _strlen - count the number of characters in a string
 * @s: pointer to a string
 *
 * Return: number of characters in the string
 */

int _strlen(char *s)
{
	int count = 0;

	while (*(s + count))
		count++;

	return (count);
}

/**
 * _strncat - appends n bytes of one string to another
 * @dest: pointer to the string to append to
 * @src: pointer the string to be appended
 * @n: the number of bytes to append
 *
 * Return: pointer to the new string
 */

char *_strncat(char *dest, char *src, int n)
{
	char *temp = dest;
	int idx, length;

	if (!src || n == 0)
		return (dest);
	else if (!dest)
		return (src);

	length = _strlen(src);

	if (n > length)
		n = length;

	while (*temp)
		temp++;

	for (idx = 0;  idx < n - 1; idx++)
		temp[idx] = src[idx];
	if (n <= length)
		temp[idx] = src[idx];

	return (dest);
}
