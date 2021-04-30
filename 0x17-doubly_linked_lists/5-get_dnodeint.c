#include "lists.h"

/**
 * get_dnodeint_at_index- adds a node to the beginning.
 *
 * Return: no Return
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    dlistint_t *node = head;
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