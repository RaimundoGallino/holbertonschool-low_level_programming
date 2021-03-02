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

	n = strlen(str) + 1;
	str2 = malloc(sizeof(char) * n);

	if (str2 == NULL)
		return (NULL);

	for (i = 0; i < n; i++)
		str2[i] = str[i];

	return (str2);
}
