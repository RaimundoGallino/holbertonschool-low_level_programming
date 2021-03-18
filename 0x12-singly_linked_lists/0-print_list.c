#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

size_t print_list(const list_t *h)
{
	const list_t *contador = h;
	if (h)
	{
		while (contador->next)
		{
		contador = contador->next;

			if (contador->next != NULL)
			{
				printf("[%i]", contador->len);
				printf("%s", contador->str);
			}
			else
			{	
				printf("[%i]", 0);
				printf("[%s]", (nil));
			}

		}
	}
	
}