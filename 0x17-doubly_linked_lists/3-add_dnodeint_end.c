#include "lists.h"

/**
 * add_dnodeint_end - adds a node to the beginning.
 *
 * Return: newnode.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *new;
	dlistint_t *tail;
    dlistint_t *temp;

    temp = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
    new->n = n;

	 if(*head == NULL) 
    {   
        temp = new;
        tail = new;   
        temp->prev = NULL;  
        tail->next = NULL;  
    }  
    else {  
       
        tail->next = new;  
        new->prev = tail;  
        tail = new;    
        tail->next = NULL;  
    }  
	return (new);
}