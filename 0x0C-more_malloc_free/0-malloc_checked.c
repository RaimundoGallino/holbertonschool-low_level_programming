#include <stdio.h>
#include <stdlib.h>

/**
 * @b: integer of the size of the malloc
 *
 * Return: Always 0.
 */

void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
	       exit (98);

	return (p);

}
