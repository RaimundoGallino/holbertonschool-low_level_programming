#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * listint_len - counts the length of the list
 * @h:pointer to the head of the list
 * Return: count.
 */
size_t listint_len(const listint_t *h)
{
	size_t contador = 0;

	if (h)
	{
		while (h)
		{

			contador += 1;

			h = h->next;
		}
	}


	return (contador);
}
