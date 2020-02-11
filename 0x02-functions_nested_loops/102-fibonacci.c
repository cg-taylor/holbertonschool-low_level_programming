#include <stdio.h>

/**
 * main - Print the first 50 numbers in the Fibonacci sequence
 *
 * Return: Always 0
 */

int main(void)
{
	long num1, num2, temp;
	int count;

	num1 = 1;
	num2 = 2;

	printf("%ld, ", num1);

	for (count = 0; count < 50; count++)
	{
		if (count != 49)
			printf("%ld, ", num2);
		else
			printf("%ld\n", num2);

		temp = num2;
		num2 += num1;
		num1 = temp;
	}
	return (0);
}
