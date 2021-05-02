#include "lists.h"
/**
 * free_dlistint - frees the list.
 * @head: head of the list
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
