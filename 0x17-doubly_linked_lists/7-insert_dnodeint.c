#include "lists.h"
/**
 * insert_dnodeint_at_index - adds a node to the index position given
 * @h: double pointer to the list
 * @idx: index number of the node
 * @n: data value of the new node
 * Return: new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *curr;
	unsigned int i = 0;

	if (idx == 0)
		return (add_dnodeint(&(*h), n));
	if ((unsigned int)dlistint_len(*h) == idx)
		return (add_dnodeint_end(&(*h), n));
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	for (curr = *h; curr != NULL; curr = curr->next, i += 1)
	{
		if (i >= idx)
			break;
		new->prev = curr;
	}
	if (idx > i && curr == NULL)
	{
		free(new);
		return (NULL);
	}
	new->next = curr;
	if (new->prev != NULL)
	{
		new->next->prev->next = new;
		new->prev = new->next->prev;
		new->next->prev = new;
	}
	else
		*h = new;
	return (new);
}
