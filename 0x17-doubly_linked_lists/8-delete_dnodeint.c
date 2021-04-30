#include "lists.h"

/**
 * insert_dnodeint_at_index- adds a node to the beginning.
 *
 * Return: no Return
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *curr;
	dlistint_t *aux;
	unsigned int i = 0;

	if (!*head)
	{
		return (-1);
	}
	curr = *head;

	if (index == 0)
	{
		*head = curr->next;
        if (curr->prev != NULL)
            curr->prev = NULL;
		free(curr);
		return (1);
	}
	/* find the place to free */
	for (; curr != NULL && i < index - 1; i += 1)
		curr = curr->next;

	if (index - 1 == i && curr->next != NULL)
	{
		aux = curr->next;
		curr->next = aux->next;
		free(aux);
		return (1);
	}
	return (-1);
}