#include "lists.h"

/**
 * insert_dnodeint_at_index - Insert a new node at position `idx`
 * @h: a double pointer to the first element of the list
 * @idx: the location of the new node in the list; idx begins at 0
 * @n: the value of the new node
 *
 * Description: This function inserts a new node containing `n` at position
 * `idx`. If it's not possible to insert a node at `idx`, it isn't added and
 * NULL is returned.
 *
 * Return: address of the new node, NULL if it fails
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	/* declarations */
	dlistint_t *thisNode;
	dlistint_t *new = malloc(sizeof(dlistint_t));

	/* check for null && malloc fail, free new if it exists, return NULL */
	if (!h || !new)
		return (new ? free(new), NULL : NULL);
	new->n = n;
	thisNode = *h;
	/* check if the new node is going at the head of the list */
	if (!*h)
	{
		new->prev = NULL;
		new->next = NULL;
		return (*h = new);
	}
	if (idx == 0)
	{
		new->prev = NULL;
		new->next = thisNode ? thisNode : NULL;
		if (thisNode)
			thisNode->prev = new;
		return (*h = new);
	}

	for (; thisNode; thisNode = thisNode->next, idx--)
	{
	/* idx - 1 because we want to insert before the current node at idx */
		if (idx - 1 == 0)
		{
			new->prev = thisNode;
			new->next = thisNode->next;
			if (new->next)
				new->next->prev = new;
			thisNode->next = new;
			return (new);
		}
	}
	return (free(new), NULL);
}
