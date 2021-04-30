#include "lists.h"

/**
 * get_dnodeint_at_index- adds a node to the beginning.
 *
 * Return: no Return
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
