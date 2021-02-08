#include <stdio.h>
#include "holberton.h"
/* betty style doc for function main goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
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
