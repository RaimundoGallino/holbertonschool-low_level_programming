#include "holberton.h"

/**
 * _print_rev_recursion - prints the string in reverse using recursion
 * @s: string to print
 * Return: the full string reversed
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(++s);
		putchar(*(s - 1));
	}
	else if (s == '\0')
	{
		return;
	}
}
