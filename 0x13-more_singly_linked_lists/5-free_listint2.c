#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
 * free_listint2 - frees the nodes of a list
 *
 * @head:pointer to the head of the list
 * Return: no return.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *nextNode;

	temp = *head;

	if (head != NULL)
	{
		nextNode = (*head)->next;

		while (nextNode)
		{
			free(temp);
			temp = nextNode;
			nextNode = nextNode->next;

		}
		free(temp);
	}
	*head = NULL;
}
