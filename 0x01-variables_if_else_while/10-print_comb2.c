# goes there */
#include <stdio.h>
/* betty style doc for function main goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
/* your code goes there */
	int n;
	int n1

	for (n = '0'; n <= '9' ; n++)
	{
		putchar(n);
		for (n1 = '0'; n1 <= '9' ; n1++)
		{
			putchar(n1);
			if (n != '9' || n1 != '9')
			{
				putchar(',');
				putchar(' ');
			}

		}

	}
	putchar('\n');

	return (0);
}
