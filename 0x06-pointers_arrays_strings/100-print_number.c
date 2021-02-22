#include "holberton.h"

/**
 * print_number - prints the given integer.
 *
 * @n: the int to be printed.
 */
void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		_putchar('-');
		i = -n;
	}

	if (n == 0)
		_putchar('0');
	else
	{
		if (i / 10 != 0)
			print_number(i / 10);

		_putchar(i % 10 + '0');
	}
}
