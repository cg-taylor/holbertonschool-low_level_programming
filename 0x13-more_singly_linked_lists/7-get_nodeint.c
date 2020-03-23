#include "lists.h"

/**
 * get_nodeint_at_index - Find the node at position index in a `listint_t` list
 * @head: pointer to the first element of the list
 * @index: index of the element to find
 *
 * Return: pointer to the node at position `index`
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *node = head;

	if (index > 0)
	{
		while (count < index && node)
		{
			node = node->next;
			count++;
		}
	}
	else
		return (head);

	if (!node)
		return (NULL);

	return (node);
}
