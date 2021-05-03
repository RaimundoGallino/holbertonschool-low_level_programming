#include "holberton.h"

/**
 * _memset - fills memory with a constant value
 * @s: pointer to an array
 * @b: constant char
 * @n: numbers of the constante value repetitions
 * Return: the pointer updated
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int c1 = 0;
	char *string = s;

	for (; c1 < n; c1++, s++)
	{
		*s = b;
	}
	return (string);

}
