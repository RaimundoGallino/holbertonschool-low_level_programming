#include "holberton.h"

/**
 * _puts_recursion - check the code for Holberton School students.
 * @s: string to print
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return(0);
	}
	else
		return (1 + _strlen_recursion(s + 1));
}
