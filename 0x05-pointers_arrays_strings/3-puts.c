#include "holberton.h"

/**
 * _puts - prints the string that the pointer is referencing
 *
 * @str: - pointer to the string to print
 * Return: the string
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar(10);
}
