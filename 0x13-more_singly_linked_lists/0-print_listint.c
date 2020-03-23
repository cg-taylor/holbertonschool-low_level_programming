#include <stdio.h>
#include "lists.h"

/**
 * print_listint - print all elements of a singly linked list
 * @h: head of a singly linked list
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count;

	for (count = 0; h != NULL; count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (count);
}
