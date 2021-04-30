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
    //Add newNode as new tail of the list  
    else {  
        //newNode will be added after tail such that tail's next will point to newNode  
        tail->next = new;  
        //newNode's previous will point to tail  
        new->prev = tail;  
        //newNode will become new tail  
        tail = new;  
        //As it is last node, tail's next will point to NULL  
        tail->next = NULL;  
    }  
	return (new);
}