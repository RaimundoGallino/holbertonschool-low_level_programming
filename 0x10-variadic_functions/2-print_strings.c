#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - print the numbers given
 * @n: numbers of integers to enter
 * @separator:
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;

	char * string;

	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(ap, char *);

		if (string != NULL)

			printf("%s", string);
		else
			printf("(nil)");

		if (separator != NULL && i != (n - 1))

			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
