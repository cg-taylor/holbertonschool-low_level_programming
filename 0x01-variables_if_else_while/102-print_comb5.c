#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int right, left;

	for (left = 0; left <= 99; left++)
	{
		for (right = left + 1; right <= 99; right++)
		{
			if (right != 1)
			{
				putchar(',');
				putchar(' ');
			}
			putchar((left / 10) + '0');
			putchar((left % 10) + '0');
			putchar(' ');
			putchar((right / 10) + '0');
			putchar((right % 10) + '0');
		}
	}
	putchar('\n');

	return (0);
}
