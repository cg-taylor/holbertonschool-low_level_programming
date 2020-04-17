#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		if (num != 0)
		{
			putchar(',');
			putchar(' ');
		}
		putchar(num + '0');
		num++;
	}
	putchar('\n');

	return (0);
}
