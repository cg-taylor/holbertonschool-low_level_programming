#include "lists.h"

/**
 * sum_listint - Calculate the sum of all the data in a `listint_t` list
 * @head: pointer to the first element in the list
 *
 * Return: Sum of all data (integer) or 0 if the list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
