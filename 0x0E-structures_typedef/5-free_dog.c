#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - frees the dog
 * @d: the size of the memory to print
 *
 * Return: Nothing.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);

	}
}
