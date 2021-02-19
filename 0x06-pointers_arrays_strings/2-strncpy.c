#include "holberton.h"
/**
 * _strncpy - conctatenates two strings, with an specific
 * number to print the second string.
 * @dest: first string to concatenate
 * @src: string to concatenate after the first one
 * @n: total characters to print
 *  Return: the concatenated string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int c = 0;

	while (c < n && src[c] != '\0')
	{
		dest[c] = src[c];
		c++;
	}
	while (c < n)
	{
		c++;
		dest[c] = '\0';
	}

	return (dest);
}
