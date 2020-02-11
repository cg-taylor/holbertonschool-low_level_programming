#include <stdio.h>

/**
 * main - Sums the even numbers of the Fibonacci sequence less than 4 million
 *
 * Return: Always 0
 */

int main(void)
{
	long num1, num2, temp;
	long sum = 0;

	num1 = 1;
	num2 = 2;

	while (num2 < 4000000)
	{
		if (num2 % 2 == 0)
		{
			printf("%ld + \n", num2);
			sum += num2;
		}

		temp = num2;
		num2 += num1;
		num1 = temp;
	}

	printf("%ld\n", sum);

	return (0);
}
