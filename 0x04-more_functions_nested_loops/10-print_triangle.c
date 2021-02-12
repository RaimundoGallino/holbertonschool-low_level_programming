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
	int y;
	int x;

	for (y = 0; y < size; y++)
	{
		for (x = 0; x < size; x++)
		{
			if (x >= size - 1 - y)
			{
				printf("#");
			}
			else
			{
				printf(" ");
			}
		}
		_putchar(10);
	}

}
