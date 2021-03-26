#include <stdio.h>
#include "holberton.h"
/**
 *print_binary - print binary number
 *@n: the number unsigned
 *
 *Return: void
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');

}
