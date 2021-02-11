#include "holberton.h"
/**
 *  print_square - print a square
 *
 * @size: size number
 * Return: 1 if c is a letter.
 *
 */
void print_square(int size)
{
	int a, b;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{

			for (b = 1; b < size; b++)
			{
				_putchar(35);

			}
			_putchar(35);
			_putchar(10);
		}


	}
	else
	{
		_putchar(10);
	}

}
