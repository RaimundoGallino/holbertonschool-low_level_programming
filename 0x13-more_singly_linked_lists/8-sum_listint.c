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
int sum_listint(listint_t *head)
{

	listint_t *node = head;
	int sum = head->n;


	if (head != NULL)
	{
		while (node)
		{
			sum += node->n;
			node = node->next;
		}
	}
	else
		return (0);
	return (sum);
}
