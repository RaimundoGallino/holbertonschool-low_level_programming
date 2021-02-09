#include "holberton.h"
/**
 * print_alphabet_x10 - prints 10 times the entire alphabet
 *
 *
 *
 *
 */
void print_alphabet_x10(void)
{
	char ch;
	int pa;

	for (pa = 0; pa <= 9; pa++)
	{
		for (ch = 'a'; ch <= 'z' ; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');

	}
}
