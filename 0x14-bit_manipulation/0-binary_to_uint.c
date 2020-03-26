#include "holberton.h"

/**
 * _pow - calculates the value of `x` to the power of `y`
 * @x: the base integer
 * @y: the exponent integer
 *
 * Return: the result of `x` raised to the power of `y`
 */

int _pow(int x, int y)
{
	if (y > 0)
		return (x * _pow(x, y - 1));
	else if (y < 0)
		return (-1);
	else
		return (1);
}

/**
 * binary_to_uint - convert a binary string to an unsigned integer
 * @b: pointer to the binary string
 *
 * Return: the converted number of 0 if it fails
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0, exp;
	int index = 0;

	if (!b)
		return (0);

	while (b[index])
		index++;

	index--;

	for (exp = 0; index >= 0; index--, exp++)
	{
		if (b[index] == '1' || b[index] == '0')
		{
			result += (b[index] - '0') * _pow(2, exp);
		}
		else
			return (0);
	}

	return (result);
}
