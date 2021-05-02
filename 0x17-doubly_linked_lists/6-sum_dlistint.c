#include "lists.h"
/**
 * sum_dlistint - add all the data values of the nodes in the list
 * @head: pointer to the head of the list
 * Return: the value of the sum
 */
int sum_dlistint(dlistint_t *head)
{
    dlistint_t *node = head;
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
