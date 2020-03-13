#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - print strings separated by a defined separator string
 * @separator: the string to separate each string with
 * @n: the number of strings passed to the function
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	char *current;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		current = va_arg(strings, char *);

		if (i && separator)
			printf("%s", separator);

		if (current)
			printf("%s", current);
		else
			printf("(nil)");
	}
	va_end(strings);

	printf("\n");
}
