#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - adds a new node at the index number of the list.
 * @head:pointer to the head of the list
 * @index: index number to add the new node
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr;
	listint_t *aux;
	unsigned int i = 0;

	if (!*head)
	{
		return (-1);
	}

	curr = *head;

	if (index == 0)
	{
		*head = curr->next;
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
