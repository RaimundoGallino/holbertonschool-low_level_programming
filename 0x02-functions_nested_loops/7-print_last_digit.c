#include "holberton.h"
/**
 * print_last_digit - print the last digit of a number
 * @n: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int print_last_digit(int n)
{
	int lastDigit = n % 10;

	if (n >= 10)
	{
		return (lastDigit);
	}
	else
	{
		return (n);
	}

}
