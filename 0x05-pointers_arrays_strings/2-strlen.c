#include "holberton.h"

/**
 * _strlen - displays the number of characters of a string
 *
 * @*s: pointer to the string.
 */
int _strlen(char *s)
{
	int str = 0;

	while (s[str] != '\0')
	{
		str++;
	}
	return(str);
}
