#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - print any combination of ints, floats, chars, and strings
 * @format: a list of types of arguments passed to the function
 *
 * Return: void
 */

void print_all(const char *const format, ...)
{
	va_list args;
	char *string;
	unsigned int i = 0, flag;

	while (format)
	{
		va_start(args, format);
		while (format[i])
		{
			flag = 1;
			switch (format[i])
			{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				string = va_arg(args, char *);
				if (!string)
					string = "(nil)";
				printf("%s", string);
				break;
			default:
				flag = 0;
				break;
			}
		if (format[i + 1] && flag)
			printf(", ");
		i++;
		}
		va_end(args);
		break;
	}
	printf("\n");
}
