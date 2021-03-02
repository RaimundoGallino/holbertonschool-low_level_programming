#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strcat - conctatenates two strings.
 *
 * @dest: first string to concatenate
 * @src: string to concatenate after the first one
 * Return: the concatenated string.
 */

char *_strcat(char *dest, char *src)
{
	char *saved;
	int c, c1;

	while (dest[c] != '\0')
	{
		c++;
	}

	while (src[c1] != '\0')
	{
		dest[c] = src[c1];
		c++;
		c1++;
	}

	saved = dest;

	return (saved);
}
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
 * str_concat - copies a string to a new memory location
 * @s1: first string to concatenate
 * @s2: second stting to concatenate
 *
 * Return: Nothing.
 */

char *str_concat(char *s1, char *s2)
{
	char *str;

	str = malloc(sizeof(char) * ((_strlen(s1) + 1) + ((_strlen(s2) + 1)));

	if (str == NULL)
		return (NULL);

	str = _strcat(str, s1);
	str = _strcat(str, s2);

	if (s1 == NULL)
		return (NULL);

	if (s2 == NULL)
		return (NULL);

	return (str);
}
