#include "holberton.h"
#include "_putchar.c"
#include "2-strlen.c"
/**
 * rev_string - prints a srting, in reverse..
 *
 * @*s: pointer to the string.
 */
void rev_string(char *s)
{
	int len, i;
	len = _strlen(s);

	for(i = len; i >= 0; i--)
	{
		_putchar(*(s+i));
	}
	_putchar(10);
}
