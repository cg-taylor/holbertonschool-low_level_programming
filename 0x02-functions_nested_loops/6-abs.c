#include "holberton.h"

/**
 * _abs - Determine the absolute value of an integer
 * @num: an integer
 *
 * Return: the absolute value of num
 */

int _abs(int num)
{
	if (num < 0)
		return (num * -1);
	return (num);
}
