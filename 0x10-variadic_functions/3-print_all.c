#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_all - print the numbers given
 * @n: numbers of integers to enter
 * @format:
 *
 */
void print_all(const char * const format, ...)
{
	typedef struct dt
	{
		char *c;
		void (*f)(char*);
	} dt_f;

	dt_f arr[] = {
		{"c", print_c},
		{"i", print_i},
		{"f", print_f},
		{"s", print_s},
		{NULL, NULL}
	};

	int i = 0, j = 0;

	va_list ap;

	va_start(ap, format);


	while (i )
	{
		while (arr[i].c)
		{
			
		}
	}
}
void print_c(va_list ap)
{
	printf("%c", va_arg(ap, char));
}

void print_i(va_list ap)
{
	printf("%i", va_arg(ap, int));
}

void print_f(va_list ap)
{
	printf("%f", va_arg(ap, float));
}

void print_s(va_list ap)
{
        printf("%s", va_arg(ap, char*));
}
