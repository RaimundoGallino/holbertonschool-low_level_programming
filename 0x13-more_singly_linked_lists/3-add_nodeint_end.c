#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of the list.
 * @n:integer value of the list
 * @head:pointer to the head of the list
 * Return: new node.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp;

	temp = *head;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;

	new->next = NULL;

	if (temp != NULL)
	{
		while (temp->next)
		{
			temp = temp->next;
		}
		temp->next = new;
	}
	else
	{
		*head = new;
	}

	return (new);
}
