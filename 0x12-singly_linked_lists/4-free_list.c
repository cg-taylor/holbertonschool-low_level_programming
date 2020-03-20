#include "lists.h"

/**
 * free_list - free all elements of a singly linked list_t list
 * @head: first element in the list
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node->str);
		free(node);
	}
}
