#include "dog.h"
#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - displays the number of characters of a string
 *
 * @s: pointer to the string.
 * Return: length of the string
 */
int _strlen(char *s)
{
	int str = 0;

	while (s[str] != '\0')
	{
		str++;
	}
	return (str);
}

/**
 * _strdup - copies a string to a new memory location
 * @str: the size of the memory to print
 *
 * Return: Nothing.
 */
char *_strdup(char *str)
{
	char *str2;
	unsigned int i, n;

	if (str == NULL)
		return (NULL);

	n = _strlen(str) + 1;

	str2 = malloc(sizeof(char) * n);

	if (str2 == NULL)
		return (NULL);

	for (i = 0; i < n; i++)
		str2[i] = str[i];

	return (str2);
}

/**
 * init_dog - check the code for Holberton School students.
 * @d: the dog structure defined before
 * @name: name of the owner
 * @owner: owner of the dog
 * @age: age of the dog
 * Return: Always 0.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *copied;
	copied = malloc(sizeof(dog_t));

	if (copied != NULL)
	{
		copied->owner = _strdup(owner);

		copied->name = _strdup(name);

		copied->age = age;

		if (!(copied->name) || !(copied->owner))
		{
			free(copied->owner);
			free(copied->name);
			free(copied);
			return (NULL);
		}
		return (copied);
	}
	else
	{
		return (NULL);
	}
}
