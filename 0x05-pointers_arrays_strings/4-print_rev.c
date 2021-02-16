#include "holberton.h"
#include "2-strlen.c"

/**
 * print_rev - prints a srting, in reverse..
 *
 * @*s: pointer to the string.
 */

void print_rev (char *s)
{
	int len, i;

	len = _strlen(s);

	for (i = len; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar(10);
}
