#include "lists.h"

/**
 * insert_dnodeint_at_index- adds a node to the beginning.
 *
 * Return: no Return
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *new;
	dlistint_t *curr;
	dlistint_t *prev;
	unsigned int i = 0;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	prev = NULL;

	/* find the place to insert */
	for (curr = *h; curr != NULL; curr = curr->next, i += 1)
	{
		if (i >= idx)
			break;
		prev = curr;
	}
	if (idx > i && curr == NULL)
	{
		free(new);
		return (NULL);
	}
	/* set the ponter of the new node to the one that was on that position*/
	new->next = curr;
	/* insert the new node in the position or end of the list */
	if (prev != NULL)
		prev->next = new;

	else
		*h = new;

	return (new);
}