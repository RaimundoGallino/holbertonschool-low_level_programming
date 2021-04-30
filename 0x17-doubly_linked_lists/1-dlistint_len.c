#include "lists.h"

size_t dlistint_len(const dlistint_t *h)
{

    const dlistint_t *current;
    size_t count = 0;

    current = h;

    while (current->next != NULL)
    {
        current = current->next; 
        count++;
    }
    return(count);
}