#include "holberton.h"

/**
 * findPrime - recursive function to determine if an integer is prime
 * @num: the integer to test
 * @max: num / 2, the maximum value to test
 * @factor: starting at 3, if num % factor == 0, num is not prime
 *
 * Return: 1 if num is prime, 0 if it is not
 */

int findPrime(int num, int max, int factor)
{
	if (num % factor == 0)
		return (0);
	else if (factor < max)
		return (findPrime(num, max, ++factor));
	return (1);
}

/**
 * is_prime_number - determines if an integer is prime
 * @n: an integer
 *
 * Return: 1 if `n` if prime, 0 if it is not
 */

int is_prime_number(int n)
{
	int max = n / 2;

	if (n % 2 == 0 || n < 2)
		return (0);
	return (findPrime(n, max, 3));
}
