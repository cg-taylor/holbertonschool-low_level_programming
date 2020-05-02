#include "lists.h"

/**
 * add_dnodeint - Add a new node to the beginning of a dlistint_t list
 * @head: double pointer to the first node of a dlistint_t list
 * @n: the value of the new node
 *
 * Return: the address of the new node, NULL on failure
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (!head)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->prev = NULL;

/* if there are no other nodes, make new the last node as well */
	if (!*head)
	{
		*head = new;
		new->next = NULL;
	}
/* otherwise, slide it in */
	else
	{
		new->next = *head;
		(*head)->prev = new;
		*head = new;
	}

	return (new);
}
