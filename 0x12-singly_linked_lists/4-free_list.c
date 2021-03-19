#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
 * free_list - frees the nodes of a list
 *
 * @head:pointer to the head of the list
 * Return: no return.
 */
void free_list(list_t *head)
{
	list_t *temp;
	list_t *nextNode;

	temp = head;

	if (head != NULL)
	{
		nextNode = head->next;

		while (nextNode)
		{
			free(temp->str);
			free(temp);
			temp = nextNode;
			nextNode = nextNode->next;

		}
		free(temp->str);
		free(temp);
	}
}
