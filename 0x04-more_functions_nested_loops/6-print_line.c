#include "holberton.h"
/**
 *  print_line - print number of lines you indicate
 *
 * @n: number of lines
 * Return: 1 if c is a letter.
 *
 */
void print_line(int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		_putchar(95);
	}

	_putchar(10);
}
