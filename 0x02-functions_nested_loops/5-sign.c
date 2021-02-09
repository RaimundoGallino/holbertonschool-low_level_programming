#include "holberton.h"
/**
 * print_sign - prints the sign of a number
 * @n: The integer to print
 *
 * Return: positive 1.
 * negative, -1 is returned, and errno is set appropriately.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}

}
