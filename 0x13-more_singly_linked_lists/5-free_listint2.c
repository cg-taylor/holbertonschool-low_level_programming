#include "lists.h"

/**
 * free_listint2 - free all elements of a singly linked list_t list
 * @head: double pointer to the first element in the list
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *node, *h = *head;

	while (h)
	{
		node = h;
		h = h->next;
		free(node);
	}
	*head = NULL;
}
