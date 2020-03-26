#include "holberton.h"

/**
 * flip_bits - determine # of bits that must flip to get from `n` to `m`
 * @n: the first number
 * @m: the second number
 *
 * Return: the number of bits that must change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int num = n ^ m;
	unsigned int count = 0;

	while (num)
	{
		if (num & 1)
			count++;

		num = num >> 1;
	}

	return (count);
}
