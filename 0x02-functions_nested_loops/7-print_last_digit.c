#include "holberton.h"
/**
 * print_last_digit - print the last digit of a number
 * @n: The number to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int print_last_digit(int n)
{
	int lastDigit = n % 10;

	if (n >= 0)
	{
		_putchar('0' + lastDigit);
		return (lastDigit);
	}
	else
	{
		_putchar(-lastDigit + '0');
		return (-lastDigit);
	}
}
