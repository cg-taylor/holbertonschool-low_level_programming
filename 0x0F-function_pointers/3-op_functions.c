#include "3-calc.h"

/**
 * op_add - Add two integers
 * @a: the first operand
 * @b: the second operand
 *
 * Return: the sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtract two integers
 * @a: the first operand
 * @b: the second operand
 *
 * Return: the difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiply two integers
 * @a: the first operand
 * @b: the second operand
 *
 * Return: the product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divide two integers
 * @a: the first operand
 * @b: the second operand
 *
 * Return: the quotient of a and b
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Calculate the remainder of the division of two integers
 * @a: the first operand
 * @b: the second operand
 *
 * Return: the remainder of a divided by b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
