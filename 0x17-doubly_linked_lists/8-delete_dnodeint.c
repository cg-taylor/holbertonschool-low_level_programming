#include "lists.h"

/**
 * delete_dnodeint_at_index - Delete the node at a given index in a linked list
 * @head: a double pointer to the first element of the list
 * @index: the position in the list of the element to be removed
 *
 * Return: 1 if it succeeds, -1 if it fails
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count;
	dlistint_t *node = *head;

	if (!head || !*head)
		return (-1);

	/* loop to index */
	for (count = 0; count < index; count++)
	{
		node = node->next;
		if (!node)
			return (-1);
	}
	/* index = 0 */
	if (index == 0)
	{
		if (node->next)
			node->next->prev = NULL;
		*head = node->next;
	}
	/* reroute pointers */
	else
	{
		if (node->next)
			node->next->prev = node->prev;
		if (node->prev)
			node->prev->next = node->next;
	}
	/* free memory and return */
	free(node);
	return (1);
}
