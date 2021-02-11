#include "holberton.h"
/**
 * times_table - print the last digit of a number
 *
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */


void times_table(void)
{
	int x;
	int y;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			int z = x * y;
			int d = z / 10;
			int u = z % 10;

			if (z >= 10)
			{
				_putchar (d + '0');
				_putchar (u + '0');
			}
			else if (z != 0)
			{
				_putchar (' ');
				_putchar (u + '0');
			}
			else if (z == 0 && y != 0)
			{
				_putchar (' ');
				_putchar (u + '0');
			}
			else
			{
				_putchar (u + '0');
			}

			if (y == 9)
			{
				_putchar(10);
			}
			else
			{
				_putchar(',');
				_putchar(' ');
			}

		}
	}
}
