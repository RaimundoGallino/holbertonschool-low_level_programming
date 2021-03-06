#include "holberton.h"

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
