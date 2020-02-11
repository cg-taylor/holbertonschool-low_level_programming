#include <stdio.h>

/**
 * main - Calculates the sum of the multiples of 3 and 5 smaller than 1024
 *
 * Return: Always 0
 */

int main(void)
{
	long sum = 0;
	int max;

	for (max = 0; max < 1024; max++)
	{
		if (max % 3 == 0 || max % 5 == 0)
			sum += max;
	}

	printf("%ld\n", sum);

	return (0);
}
