#include "holberton.h"

/**
 * set_bit - set the value of a bit to 1 at a given index
 * @n: the number to change
 * @index: the index of the bit to set
 *
 * Return: 1 if it worked, -1 if it failed
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int most_bits;
	unsigned long int num = *n;

/* multiply by 8 because sizeof returns # of bytes; 8 bits in a byte */
	most_bits = sizeof(unsigned long int) * 8;

	if (index > most_bits)
		return (-1);

	num = (num >> index) | 1;
	num = num << index;

	*n = *n | num;


	return (1);
}
