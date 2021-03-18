#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

size_t print_list(const list_t *h)
{
	size_t contador = 0;

	
		while (h)
		{
			
			if (h->str == NULL)
			{
				printf("[0] (nill)\n");
			}
			printf("[%i] %s\n", h->len, h->str);

			contador += 1;

		
			if (h->next != NULL)
			{
				h = h->next;
			}
		}

	return(contador);
	
}