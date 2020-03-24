#include "lists.h"

/**
 * delete_nodeint_at_index - Delete a node anywhere in a `listint_t` list
 * @head: double pointer to the first element in the list
 * @index: position of the node to delete
 *
 * Return: 1 if successful, -1 if it fails
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *node = *head, *hold;

	if (!*head)
		return (-1);

	if (index == 0)
	{
		hold = *head;
		*head = (*head)->next;
		free(hold);
		return (1);
	}

	while (count < index)
	{
		hold = node;
		node = node->next;
		count++;
	}

	if (!node)
		return (-1);

	hold->next = node->next;
	free(node);
	return (1);
}
