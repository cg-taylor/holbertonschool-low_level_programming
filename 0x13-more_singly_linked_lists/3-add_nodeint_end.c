#include "lists.h"

/**
 * add_nodeint_end - add a new node to the end of a singly linked list
 * @head: double pointer to the head of a singly linked list
 * @n: the contents of the new node
 *
 * Return: pointer to the new element or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (!*head)
	{
		*head = new;
		return (new);
	}

	last = *head;
	while (last->next)
		last = last->next;

	last->next = new;

	return (new);
}
