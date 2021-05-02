#include "lists.h"
/**
 * add_dnodeint - adds a node to the beginning.
 * @head: double pointer to the head of the list
 * @n: data value
 * Return: the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
    new->prev = NULL;
	*head = new;

	return (new);
}
