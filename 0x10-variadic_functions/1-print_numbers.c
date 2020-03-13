#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - print all parameters in a list
 * @separator: string of characters to print between each number
 * @n: the number of integers passed to the function
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	if (n == 0)
		return;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (i < n - 1 && separator)
			printf("%s", separator);

	}
	va_end(args);

	printf("\n");
}
