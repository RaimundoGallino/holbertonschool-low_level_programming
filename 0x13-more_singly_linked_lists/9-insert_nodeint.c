#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - adds a new node at the index number of the list.
 * @n:integer value of the list
 * @head:pointer to the head of the list
 * @idx: index number to add the new node
 * Return: new node.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *curr;
	listint_t *prev;
	unsigned int i = 0;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;

	prev = NULL;

	/* find the place to insert */
	for (curr = *head; curr != NULL; curr = curr->next, i += 1)
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
		*head = new;

	return (new);

}
