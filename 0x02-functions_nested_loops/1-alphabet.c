#include "holberton.h"
/* betty style doc for function main goes there */

/**
 * print_alphabet - prints the alphabet in lowercase
 *
 *
 */

void print_alphabet(void)
{
/* your code goes there */
	char ch = 'a';

	for (; ch <= 'z' ; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');

}
