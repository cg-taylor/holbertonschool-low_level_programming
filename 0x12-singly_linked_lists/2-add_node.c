#include "lists.h"
#include <string.h>

/**
 * _strlen - count number of characters in a string
 * @str: a string
 *
 * Return: number of characters in the string
 */

int _strlen(char *str)
{
	int count;

	for (count = 0; str[count]; count++)
		;
	return (count);
}

/**
 * add_node - add a new node to the beginning of a singly linked list
 * @head: double pointer to the head of a singly linked list
 * @str: the contents of the new node
 *
 * Return: pointer to the new element or NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (!str)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	if(!(new->str))
	{
		free(new);
		return (NULL);
	}

	new->len = _strlen(new->str);
	new->next = *head;
	*head = new;

	return (new);
}
