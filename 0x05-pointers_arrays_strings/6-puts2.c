#include "holberton.h"

/**
 * puts2 - prints every other character of a string.
 *
 * @str: input string
 */
void puts2(char *str)
{

	int s = 0;

	while (str[s] != '\0')
	{
		_putchar(*str);
		str += 2;
	}
	_putchar(10);
}
