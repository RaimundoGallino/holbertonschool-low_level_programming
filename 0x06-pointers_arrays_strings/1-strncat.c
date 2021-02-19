#include "holberton.h"
/**
 *
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
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

	while(src[c1] != '\0' && c1 < n)
	{
		dest[c] = src[c1];
		c++;
		c1++;
	}
	saved = dest;

	return(saved);
}
