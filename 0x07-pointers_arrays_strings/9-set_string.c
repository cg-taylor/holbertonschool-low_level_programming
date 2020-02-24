#include "holberton.h"

/**
 * set_string - sets the value of a char pointer using a double pointer
 * @s: double pointer to a string
 * @to: pointer to the value to change to
 *
 * Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
