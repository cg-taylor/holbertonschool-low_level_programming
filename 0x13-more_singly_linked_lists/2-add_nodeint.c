#include "lists.h"

/**
 * add_nodeint - add a new node to the beginning of a singly linked list
 * @head: double pointer to the head of a singly linked list
 * @n: the contents of the new node
 *
 * Return: pointer to the new element or NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
