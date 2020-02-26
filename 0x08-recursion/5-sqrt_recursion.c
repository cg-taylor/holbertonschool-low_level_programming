#include "holberton.h"

int calc_sqrt(int n, int root)
{
	if ((root * root) != n && (root * root) < n)
		return (calc_sqrt(n, root + 1));
	else if (root * root > n)
		return (-1);
	else
		return (root);
}

/**
 * _sqrt_recursion - calculate the natural square root of an integer
 * @n: an integer
 *
 * Return: the natural square root or -1 if it does not exist
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else
		return (calc_sqrt(n, 1));
}
