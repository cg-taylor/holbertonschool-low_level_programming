#include "holberton.h"

/**
 * print_alphabet - print the alphabet in lowercase
 *
 * Return: void
 */

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		_putchar(alpha);
	_putchar('\n');
}
