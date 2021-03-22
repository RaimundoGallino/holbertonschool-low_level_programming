#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_list - check the code for Holberton School students.
 * @h:pointer to the headof the list
 * Return: Always 0.
 */
size_t print_listint(const listint_t *h)
{
	size_t contador = 0;

	if (h)
	{
		while (h)
		{
			if (h->n == 0)
			{
				printf("0\n");
			}
			else
			{
				printf("%i\n", h->n);

			}

			contador += 1;

			h = h->next;
		}
	}


	return (contador);
}
