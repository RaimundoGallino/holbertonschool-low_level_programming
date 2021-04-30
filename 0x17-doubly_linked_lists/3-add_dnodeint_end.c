#include "lists.h"

/**
 * add_dnodeint_end - adds a node to the beginning.
 *
 * Return: newnode.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *new;
    dlistint_t *temp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

    new->n = n;
    new->next = NULL;
    
    if (head != NULL)
    {
        new->prev = NULL;   
        *head = new;
    }
    else
    {
        temp = *head;
        while (temp->next != NULL)  
        {     
            temp = temp->next;
        }
        temp->next = new;
        new ->prev = temp;
    }
    return (new);
}
