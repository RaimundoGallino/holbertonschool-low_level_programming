#include "holberton.h"

/**
 * _strspn - gets the length on bytes
 * @s: initial segment to be checked
 * @accept: the check of bytes
 * Return: byte number of the characters tat match
 */
unsigned int _strspn(char *s, char *accept)
{
	int c1, c2;

	c1 = 0;

	while (s[c1])
	{
		c2 = 0;

		while (accept[c2])
		{
			if (s[c1] == accept[c2])
			{
				break;
			}
			c2++;
		}
		if (!accept[c2])
		{
			return (c1);
		}
		c1++;
	}
	return (c1);
}
