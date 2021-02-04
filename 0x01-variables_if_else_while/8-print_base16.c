#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
/* your code goes there */
	char ch;
	char ch1;

	for (ch = '0'; ch <= '9' ; ch++)
	{
		putchar(ch);
	}
	for (ch1 = 'a'; ch1 <= 'f' ; ch1++)
	{
		putchar(ch1);
	}

	putchar('\n');

	return (0);
}
