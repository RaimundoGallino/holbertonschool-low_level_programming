#include "holberton.h"

/**
 * *_strcpy - check the code for Holberton School students.
 * @dest: save the copied string
 * @src: the string to be copied
 * Return: the saved string --> dest
 */

char *_strcpy(char *dest, char *src)
{
	char *saved = dest;

	while (*src)
	{
		*dest++ = *src++;
	}
	*dest = 0;
	return (saved);
}
