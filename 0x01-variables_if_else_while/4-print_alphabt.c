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
	char ch = 'a';

	for (; ch <= 'z' ; ch++)
	{
		if ((ch == 'q' || ch == 'e'))
		{
		}
		else
		{
			putchar(ch);
		}
	}
	putchar('\n');

	return (0);
}
