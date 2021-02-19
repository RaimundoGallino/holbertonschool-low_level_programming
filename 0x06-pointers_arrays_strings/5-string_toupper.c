#include "holberton.h"

/**
 * string_toupper - conctatenates two strings.
 *
 * @s: first string to concatenate
 *
 * Return: the concatenated string.
 */
char *string_toupper(char *s)
{

	int i = 0;

	while (s[i] != '\0')
	{

		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;

		}

		i++;
	}

	return (s);
}
