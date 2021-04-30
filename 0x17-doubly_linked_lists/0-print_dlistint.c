#include "lists.h"

size_t print_dlistint(const dlistint_t *h)
{
    const dlistint_t *current;
    size_t count = 0;

    current = h;

        while (current->next != NULL)
        {
            printf("%i\n",current->n);
            current = current->next;
            count++;
        }

    return(count);
}
