#include <stdio.h>
#include <math.h>

/**
 * find_prime - finds the largest prime factor of a number
 * @num: the number to factor
 * @max: the square root of the number and upper limit for tests
 *
 * Return: largest prime factor
 */

long find_prime(long num, long max)
{
	long factor, maxPrime;

	for (factor = 3; factor <= max; factor += 2)
	{
		if (num % factor == 0)
		{
			maxPrime = factor;
			num /= factor;
		}
	}

	if (num > 2)
		maxPrime = num;

	return (maxPrime);

}

/**
 * main - print the largest prime factor of a number
 *
 * Return: Always 0
 */

int main(void)
{
	long number = 612852475143;
	long factor, min;

	min = (long) sqrt(612852475143);
	factor = find_prime(number, min);

	printf("%ld\n", factor);

	return (0);
}
