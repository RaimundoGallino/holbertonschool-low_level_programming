#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * list_len - check the code for Holberton School students.
 * @h:pointer to the headof the list
 * Return: Always 0.
 */
size_t list_len(const list_t *h)
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
