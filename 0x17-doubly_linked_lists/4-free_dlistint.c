#include "lists.h"

/**
 * free_dlistint - free a `dlistint_t` list
 * @head: pointer to a doubly linked list
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
