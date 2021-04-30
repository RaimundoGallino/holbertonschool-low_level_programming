#include "lists.h"

/**
 * free_dlistint- adds a node to the beginning.
 *
 * Return: no Return
 */

void free_dlistint(dlistint_t *head)
{
    dlistint_t *temp;
	dlistint_t *nextNode;

	temp = head;

	if (head != NULL)
	{
		nextNode = head->next;

		while (nextNode)
		{
			free(temp);
			temp = nextNode;
			nextNode = nextNode->next;

		}
		free(temp);
	}
}
