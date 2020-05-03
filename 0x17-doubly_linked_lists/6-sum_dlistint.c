#include "lists.h"

/**
 * sum_dlistint - sum all of the numerical data in a `dlistint_t` list
 * @head: pointer to the first element of a doubly linked list
 *
 * Return: the total sum or 0 if the list is empty
 */

int sum_dlistint(dlistint_t *head)
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
