#include <stdio.h>
#include <float.h>

/**
 * main - Print the first 98 numbers in the Fibonacci sequence
 *
 * Return: Always 0
 */

int main(void)
{
	unsigned long a, b, total = 0, a2 = 0, b2 = 0, total2 = 0;
	unsigned long cutoff = 10000000000000000;
	int cut = 0, idx;

	a = 1;
	b = 2;

	printf("%lu, %lu, ", a, b);

	for (idx = 3; idx < 99; idx++)
	{
	       	total = a + b;

		if (total < cutoff && !cut)
		{
			printf("%lu", total);

			a = b;
			b = total;
		}
		else
			cut = 1;

		if (cut)
		{
			total2 = total / cutoff + a2 + b2;
			total %= cutoff;
			a2 = b2;
			b2 = total2;
			a = b;
			b = total;

			printf("%lu%016lu", total2, total);
		}
		if (idx < 98)
			printf(", ");
	}
	putchar('\n');

	return (0);
}
