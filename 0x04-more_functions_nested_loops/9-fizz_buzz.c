#include "holberton.h"
#include <stdio.h>
/**
 *  main - print a piramide
 *
 *
 * Return: 1 if c is a letter.
 *
 */
int main(void)
{
	int n;
	int m3;
	int m5;

	for (n = 1; n <= 100; n++)
	{
		m3 = n % 3;
		m5 = n % 5;

		if (m3 == 0)
		{
			printf("Fizz");
		}
		else if (m5 == 0)
		{
			printf("Buzz");
		}
		else if (m3 == 0 && m5 == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", n);
		}

		if (n != 100)
		{
			printf(" ");
		}
	}
	putchar(10);
	return (0);
}
