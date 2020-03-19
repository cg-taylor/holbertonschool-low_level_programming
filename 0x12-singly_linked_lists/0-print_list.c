#include <stdio.h>
#include "lists.h"

/**
 * print_list - print all elements of a singly linked list
 * @h: head of a singly linked list
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count;

	for (count = 0; h != NULL; count++)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}

	return (count);
}
