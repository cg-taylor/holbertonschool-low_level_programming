#include "holberton.h"

/**
 * calcFactorial - does the math to calculate the factorial of an integer
 * @product: the factorial of `n`
 * @num: an integer
 *
 * Return: the factorial of `n`
 */

int calcFactorial(int product, int num)
{
	if (num)
	{
		product *= num;
		return (calcFactorial(product, num - 1));
	}
	return (product);
}

/**
 * factorial - calculates the factorial of an integer
 * @n: an integer
 *
 * Return: the factorial of an integer as an integer, -1 if n < 0
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (calcFactorial(1, n));
}
