#include "holberton.h"
/**
 * print_most_numbers - print numbers from 0 to 9 exept 2 and 4
 *
 *
 * Return: 1 if c is a letter.
 *
 */

void print_most_numbers(void)
{
	int a = 0;

	while (a <= 9)
	{
		if (a == 1 || a == 3)
		{
			a = a + 1;
		}
		else
		{
			a++;
			_putchar(a + '0');
		}

	}
	_putchar(10);

}
