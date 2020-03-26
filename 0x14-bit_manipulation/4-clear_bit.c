#include "holberton.h"

/**
 * clear_bit - set the value of a bit to 0 at a given index
 * @n: the number to change
 * @index: the index of the bit to set
 *
 * Return: 1 if it worked, -1 if it failed
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int most_bits;
	unsigned long int num = *n;

/* multiply by 8 because sizeof returns # of bytes; 8 bits in a byte */
	most_bits = sizeof(unsigned long int) * 8;

	if (index > most_bits)
		return (-1);

	num = num >> index;

/* if num is divisible by 2, then the last bit is already 0 */
	if (num % 2)
		num -= 1;

	num = num << index;

	*n = *n & num;


	return (1);
}
