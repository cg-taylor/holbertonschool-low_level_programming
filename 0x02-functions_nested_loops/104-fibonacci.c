#include <stdio.h>
#include <float.h>

/**
 * main - Print the first 98 numbers in the Fibonacci sequence
 *
 * Return: Always 0
 */

int main(void)
{
	float num1, num2, temp;
	int count = 1;

	num1 = 1;
	num2 = 2;

	printf("%.f, ", num1);

	for (count = 2 ; count < 99; count++)
	{
		if (count != 98)
			printf("%.f, ", num2);
		else
			printf("%.f\n", num2);

		temp = num2;
		num2 += num1;
		num1 = temp;
	}

	putchar('\n');

	return (0);
}
