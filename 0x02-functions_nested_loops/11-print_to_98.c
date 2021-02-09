#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - print til 98 in a special way
 * @n: The number to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_to_98(int n)
{

	for (; n < 98; n++)
	{
		printf("%d, ", n);
	}
	for (; n > 98; n--)
	{
		printf("%d, ", n);
	}
	printf("%d\n", n);


}
