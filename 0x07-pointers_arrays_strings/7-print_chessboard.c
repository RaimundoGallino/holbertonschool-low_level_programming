#include "holberton.h"

/**
 * print_chessboard - print a  chesscoard
 * @a: array to be printed
 *
 * Return: byte number of the characters tat match
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{

		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);



		}
		_putchar(10);
	}
}
