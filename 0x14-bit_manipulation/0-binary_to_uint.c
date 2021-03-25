#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>
#include <math.h>
/**
 * _strlen_recursion - gets the string lenght by using recursion.
 * @s: string to check
 * Return: Always 0.
 */

int _strlen_recursion(const char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: binary numbers passed by a string
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int dec = 0, tab = 1, lenb, i;

	lenb = _strlen_recursion(b);

	for (i = lenb; i > 0; i--)
	{
		if (b[i - 1] == '0' || b[i - 1] == '1')
		{
			if (b[i - 1] == '1')
				dec += tab;
			tab *= 2;
		}
		else
			return (0);
	}
	return (dec);
}
