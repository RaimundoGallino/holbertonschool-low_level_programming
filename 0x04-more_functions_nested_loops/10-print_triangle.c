#include "holberton.h"
#include <stdio.h>
/**
 * print_triangle - prints a tirangle
 *
 * @size: size number of the triangle
 * Return: 1 if c is a letter.
 *
 */
void print_triangle(int size)
{
	int x;
	int y;

	if (size > 0)
	{
		for (y = 0; y < size; y++)
		{
			for (x = 0; x < size; x++)
			{
				if (x >= size - 1 - y)
				{
					_putchar(35);
				}
				else
				{
					_putchar(' ');
				}
			}
			_putchar(10);
		}
	}
	else
	{
		_putchar(10);
	}

}
