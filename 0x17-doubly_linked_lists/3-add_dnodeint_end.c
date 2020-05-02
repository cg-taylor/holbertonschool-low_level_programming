#include "lists.h"

/**
 * add_dnodeint_end - Add a new node to the end of a dlistint_t list
 * @head: double pointer to the first node of a dlistint_t list
 * @n: the value of the new node
 *
 * Return: the address of the new node, NULL on failure
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *current = *head;

	if (!head)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

/* if there are no other nodes, make new the first node as well */
	if (!*head)
	{
		*head = new;
		new->prev = NULL;
	}
/* otherwise, traverse the list and add node to end */
	else
	{
		while (current->next)
		{
			current = current->next;
		}
		current->next = new;
		new->prev = current;
	}

	return (new);
}
