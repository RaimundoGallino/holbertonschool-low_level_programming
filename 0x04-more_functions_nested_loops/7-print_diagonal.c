#include "holberton.h"
/**
 *  print_diagonal - print a piramide
 *
 * @n: number of lines
 * Return: 1 if c is a letter.
 *
 */
void print_diagonal(int n)
{
	int sp, sk;

	if (n > 0)
	{
		for (sk = 0; sk < n; sk++)
		{

			for (sp = 1; sp <= sk; sp++)
			{
				_putchar(' ');

			}
			_putchar('\\');
			_putchar(10);
		}


	}
	else
	{
		_putchar(10);
	}

}
