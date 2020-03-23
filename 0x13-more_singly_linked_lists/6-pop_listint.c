#include "lists.h"

/**
 * pop_listint - delete the head node of a `listint_t' list
 * @head: double pointer to the first element of a linked list
 *
 * Return: the data stored in the head node (an integer)
 */

int pop_listint(listint_t **head)
{
	int value;
	listint_t *next = (*head)->next;

	if (!*head)
		return (0);

	value = (*head)->n;

	free(*head);

	*head = next;

	return (value);
}
