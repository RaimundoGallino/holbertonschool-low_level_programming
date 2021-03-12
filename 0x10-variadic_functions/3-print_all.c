#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_all - print the numbers given
 *
 * @format:
 *
 */
void print_all(const char * const format, ...)
{

	va_list ap;
	int i = 0, j;
	char *spr = "";

	dt_f arr[] = {
		{"c", print_c},
		{"i", print_i},
		{"f", print_f},
		{"s", print_s},
		{NULL, NULL}
	};


	va_start(ap, format);

	while (format[i])
	{
		j = 0;
		while (arr[j].c)
		{
			if (format[i] == arr[j].c[0])
			{
				printf("%s", spr);
				arr[j].f(ap);
				spr = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}

/**
 * print_c - print with format char.
 * @c: char to print.
 **/

void print_c(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * print_i - print with format int.
 * @i: int to print.
 **/

void print_i(va_list ap)
{
	printf("%i", va_arg(ap, int));
}

/**
 * print_f - print with format float.
 * @f: float to print.
 **/

void print_f(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * print_s - print with format string.
 * @s: string to print.
 **/

void print_s(va_list ap)
{
	char *str = va_arg(ap, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}
