#include "3-calc.h"

/**
 * get_op_func - select the correct operation function
 * @s: the operator passed to the program as an argument
 *
 * Return: pointer to a function that takes two integers as parameters
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	if (!s)
		return (NULL);

	while (ops[i].op)
	{
		if (*s == ops[i].op[0] && !s[1])
			return (ops[i].f);
		i++;
	}

	printf("Error\n");
	exit(99);
}
