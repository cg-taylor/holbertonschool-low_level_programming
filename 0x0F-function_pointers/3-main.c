#include "3-calc.h"

/**
 * main - entry point for a program that performs simple operations
 * @argc: number of command line arguments
 * @argv: array containing all command line arguments
 *
 * Return: 0 if successful
 *         Exit status 98 if the number of arguments is incorrect
 *         Exit status 99 if the operator is invalid
 *         Exit status 100 if user attempts to divide by 0
 */

int main(int argc, char **argv)
{
	int num1, num2, result;
	int (*op_func)(int, int);

	/* check number of arguments */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	op_func = get_op_func(argv[2]);

	result = op_func(num1, num2);

	printf("%d\n", result);
	return (0);
}
