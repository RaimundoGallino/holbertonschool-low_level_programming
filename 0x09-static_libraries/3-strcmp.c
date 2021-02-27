#include "holberton.h"
/**
 * _strcmp - compare two strings with it respectively ASCII values
 * @s1: first string to compare
 * @s2: second string to compare
 * Return: the concatenated string.
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	if (*s1 == *s2)
	{
		return (0);
	}

	else
	{
		return (*s1 - *s2);
	}
}
