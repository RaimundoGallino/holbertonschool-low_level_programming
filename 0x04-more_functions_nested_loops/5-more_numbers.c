#include "holberton.h"
/**
 * more_numbers - print numbers from 0 to 9 and 10 to 14
 * - displaying to digits with putchar function
 *
 * Return: 1 if c is a letter.
 *
 */

void more_numbers(void)
{
	int a;
	int pt;

	for (pt = '0'; pt <= '9'; pt++)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a > 9)
			{
				_putchar((a / 10) + '0');

			}
			_putchar((a % 10) + '0');
		}


	_putchar(10);
	}
}
