#include "holberton.h"

/**
 * print_number - prints the given integer.
 *
 * @n: the int to be printed.
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n == 0)
		_putchar('0');
	else
	{
		if (n / 10 != 0)
			print_number(n / 10);

		_putchar(n % 10 + '0');
	}
}
