#include <stdio.h>

/**
 * main - print 1 to 100, replacing multiples of 3, 5, and 15 with words
 *
 * Return: Always 0
 */

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 15 == 0)
			printf("FizzBuzz ");
		else if (num % 5 == 0)
		{
			if (num != 100)
				printf("Buzz ");
			else
				printf("Buzz\n");
		}
		else if (num % 3 == 0)
			printf("Fizz ");
		else
			printf("%d ", num);
	}

	return (0);
}
