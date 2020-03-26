#include "holberton.h"

/**
 * get_bit - return the value of a bit at a given index
 * @n: the number to search
 * @index: the index of the bit to return
 *
 * Return: the value of the bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int most_bits;

/* multiply by 8 because sizeof returns # of bytes; 8 bits in a byte */
	most_bits = sizeof(unsigned long int) * 8;

	if (index > most_bits)
		return (-1);

	return ((n >> index) & 1);
}
