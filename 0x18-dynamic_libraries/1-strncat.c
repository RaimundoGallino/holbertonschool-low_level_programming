#include "holberton.h"
/**
 * _strncat - conctatenates two strings, with an specific
 * number to print the second string.
 * @dest: first string to concatenate
 * @src: string to concatenate after the first one
 * @n: total characters to print
 *  Return: the concatenated string.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *saved;
	int c, c1;

	c = 0;
	c1 = 0;

	while (dest[c] != '\0')
	{
		c++;
	}

	while (src[c1] != '\0' && c1 < n)
	{
		dest[c] = src[c1];
		c++;
		c1++;
	}
	saved = dest;

	return (saved);
}
