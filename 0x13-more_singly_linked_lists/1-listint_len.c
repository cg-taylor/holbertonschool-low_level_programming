#include "lists.h"

/**
 * listint_len - count number of elements in a linked list
 * @h: head of a singly linked list
 *
 * Return: number of elements in the linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t count;

	for (count = 0; h != NULL; count++)
		h = h->next;

	return (count);
}
