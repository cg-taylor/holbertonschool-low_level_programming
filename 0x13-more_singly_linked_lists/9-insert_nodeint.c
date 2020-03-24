#include "lists.h"

/**
 * insert_nodeint_at_index - Insert a node at any point in a singly linked list
 * @head: double pointer to the head of the list
 * @idx: the index to insert new node at
 * @n: value of the new node
 *
 * Return: pointer to the new node or NULL if it fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *prev;
	unsigned int count = 0;

	if (!*head)
		return (NULL);

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;

	prev = *head;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (*head);
	}

	while (count < idx - 1)
	{
		if (prev)
			prev = prev->next;
		else
		{
			free(new);
			return (NULL);
		}
		count++;
	}

	new->next = prev->next;
	prev->next = new;

	return (new);
}
