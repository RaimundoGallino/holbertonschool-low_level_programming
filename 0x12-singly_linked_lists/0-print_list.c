#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

size_t print_list(const list_t *h)
{
	size_t contador = 0;

	if (h)
	{
		while (h->next)
		{
			if (h->next != NULL)
			{
				printf("[%i] %s\n", h->len, h->str);

				contador += 1;

				if (h->str == NULL)
				{
					printf("(nill)");
				}
			}
			
			h = h->next;
		}
		
		printf("[%i]", 0);
		
	}
	else
	{
		return (contador);
	}
	return(contador);
	
}