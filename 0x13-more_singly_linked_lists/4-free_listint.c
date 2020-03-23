#include "lists.h"

/**
 * free_listint - free all elements of a singly linked list_t list
 * @head: first element in the list
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
