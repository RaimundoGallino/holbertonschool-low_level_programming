#include "lists.h"
/**
 * delete_dnodeint_at_index - frees a node at the index position
 * @head: double pointer to the head of the list
 * @index: index number of the node we want to free
 * Return: 1 on success -1 if it fails
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

		if (curr->next != NULL)
			curr->next->prev = NULL;
		free(curr);
		return (1);
	}
	for (; curr != NULL && i < index - 1; i += 1)
		curr = curr->next;

	if (index - 1 == i && curr->next != NULL)
	{
		aux = curr->next;
		curr->next->prev = curr;
		curr->next = aux->next;
		free(aux);
		return (1);
	}
	return (-1);
}
