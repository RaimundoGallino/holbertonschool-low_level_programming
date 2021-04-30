#include "lists.h"
/**
 * print_dlistint- prints the data of all the nodes in the list
 *
 * Return: no Return
 */
size_t print_dlistint(const dlistint_t *h)
{
    const dlistint_t *current;
    size_t count = 0;

    current = h;
    if (h != NULL)
    {
        while (current)
        {
            printf("%i\n",current->n);
            current = current->next;
            count++;
        }
    }
    return(count);
}
