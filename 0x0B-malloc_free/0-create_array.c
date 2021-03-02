#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - prints buffer in hexa
 * @c: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */

char *create_array(unsigned int size, char c)
{
	char *str, *str2;
	unsigned int i;

	str = malloc(sizeof(char) * size);

	if (str == NULL)
		return (NULL);

	if (size == 0)
		return (NULL);

	str2 = str;

	for (i = 0; i < size; i++)
	{
		*str = c;
		str++;
	}

	return (str2);
}
