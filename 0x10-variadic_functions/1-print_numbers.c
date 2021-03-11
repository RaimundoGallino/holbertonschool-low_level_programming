#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - print the numbers given
 * @n: numbers of integers to enter
 * @separator:
 * Return: sum.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;

	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d",va_arg(ap, int));

		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	putchar(10);
	va_end(ap);

}
