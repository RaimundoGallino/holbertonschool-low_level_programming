#include "lists.h"
/**
 * get_dnodeint_at_index - gets the node at the index position.
 * @head: pointer to the head of the list
 * @index: index number for the position to get
 * Return: the node of the index position
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