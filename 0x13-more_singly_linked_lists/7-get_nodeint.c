#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
 * get_nodeint_at_index - gets the node at the index position
 * and return the value
 *
 * @head:pointer to the head of the list
 * @index:
 * Return: no return.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	listint_t *node = head;
	unsigned int i = 0;

	if (head != NULL)
	{
		for (; node && i < index; i++)
		{
			node = node->next;

			if (node == NULL)
				return (NULL);
		}
	}
	return (node);
}
