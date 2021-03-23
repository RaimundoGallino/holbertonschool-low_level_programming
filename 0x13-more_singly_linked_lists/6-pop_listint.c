#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
 * pop_listint - frees the head node of a list and return the data
 *
 * @head:pointer to the head of the list
 * Return: data.
 */
int pop_listint(listint_t **head)
{
	int temp = (*head)->n;
	listint_t *node = *head;

	if (!*head)
	{
		return (0);
	}

	*head = node->next;

	free(node);
	return (temp);
}
