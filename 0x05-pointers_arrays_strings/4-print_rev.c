#include "holberton.h"

/**
 * print_rev - prints a srting, in reverse..
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

void print_rev(char *s)
{
	int len, i;
	len = _strlen(s);

	for(i=len;i>=0;i--)
	{
		_putchar(*(s+i));
	}
	_putchar(10);
}
