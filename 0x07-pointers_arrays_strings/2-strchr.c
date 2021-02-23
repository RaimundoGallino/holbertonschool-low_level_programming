#include "holberton.h"

/**
 * _strchr - locates a character of a string
 * @s: strint to search
 * @c: characters to locate
 * Return: pointer to the string
 */
char *_strchr(char *s, char c)
{
	char *r = s;

	while (*r != '\0')
	{
		r++;

		if (*r == c)
		{
			return (r);

		}
	}
	return (0);

}
