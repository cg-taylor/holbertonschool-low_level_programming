#include "holberton.h"

/**
 * _pow_recursion - calculates the value of `x` to the power of `y`
 * @x: the base integer
 * @y: the exponent integer
 *
 * Return: the result of `x` raised to the power of `y`
 */

int _pow_recursion(int x, int y)
{
	if (y > 0)
		return (x * _pow_recursion (x, y - 1));
	else if (y < 0)
		return (-1);
	else
		return (1);
}
