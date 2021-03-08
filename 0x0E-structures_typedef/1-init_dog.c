#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - check the code for Holberton School students.
 * @d: the dog structure defined before
 * @name: name of the owner
 * @owner: owner of the dog
 * @age: age of the dog
 * Return: Always 0.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d != NULL)
	{

		d->name = name;
		d->owner = owner;
		d->age = age;
	}

}
