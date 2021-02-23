#include "holberton.h"

/**
 * _memcpy - copies a memory area copies n bytes from memory area
 * src to memory area dest.
 * @dest: adress to the memory area to be written
 * @src: memory area to be copied
 * @n: amount of bytes to copy
 * Return: Nothing.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *string = dest;
	unsigned int c = 0;

	while (c < n && src[c] != '\0')
	{
		dest[c] = src[c];
		c++;
	}
	while (c < n)
	{

		dest[c] = '\0';
		c++;
	}

	return (string);
}
