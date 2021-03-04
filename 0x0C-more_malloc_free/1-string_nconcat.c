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

	if (s == '\0')
		return (0);

	while (s[str] != '\0')
	{
		str++;
	}
	return (str);
}

/**
 * string_nconcat - concatenates two strings
 * @s1: first string to copy
 * @s2: second string to copy
 * @n: number of the second string to print
 *
 * Return: Always 0.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i;
	unsigned int len1 = _strlen(s1), len2 = _strlen(s2);


	if (n >= len2)
	{
		p = malloc(sizeof(char) * (len1 + len2 + 1));
		n = len2;
	}
	else
	{
		p = malloc(sizeof(char) * (len1 + n + 1));
	}

	if (p == NULL)
	{
		return (NULL);
	}


	for (i = 0; i < len1; i++)
	{
		p[i] = s1[i];
	}

	for (i = 0; i < n; i++)
	{
		p[i + len1] = s2[i];

	}

	p[i + len1] = '\0';

	return (p);
}
