#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_list - check the code for Holberton School students.
 * @h:pointer to the headof the list
 * Return: Always 0.
 */
size_t print_list(const list_t *h)
{
	size_t contador = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nill)\n");
		}
		else
		{
			printf("[%i] %s\n", h->len, h->str);

		}

		contador += 1;

		h = h->next;
}

	return (contador);
}
