#include "lists.h"

/**
 * get_dnodeint_at_index - Find the node at position `index`
 * @head: pointer to the first node in a `dlistint_t` list
 * @index: index of the node to find, begins at 0
 *
 * Return: A pointer to the node at position `index`
 *         or NULL if it does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter = 0;

	if (!head)
		return (NULL);

	if (index == 0)
		return (head);

	while (counter < index)
	{
		if (head->next)
			head = head->next;
		else
			return (NULL);
		counter++;
	}

	return (head);
}
