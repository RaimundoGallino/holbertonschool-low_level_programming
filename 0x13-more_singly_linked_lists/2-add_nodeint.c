#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_nodeint - adds a node at the beginning of the list
 * @n:value of the integer in the struct
 * @head:pointer to the head of the list
 * Return: new.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;
	
	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;

	new->next = *head;

	*head = new;

	return (new);

}
