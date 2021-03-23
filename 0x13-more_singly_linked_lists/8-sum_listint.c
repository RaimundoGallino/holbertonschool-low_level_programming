#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
 * sum_listint - gets the node at the index position
 * and return the value
 *
 * @head:pointer to the head of the list
 * Return: no return.
 */
int sum_listint(listint_t *head)
{

	listint_t *node = head;
	int sum = 0;


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
