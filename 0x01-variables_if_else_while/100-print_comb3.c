0;10;1c#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int n1;
	int n2;

	for (n1 = '0'; n1 <= '8'; n1++)
	{
		for (n2 = n1; n2 <= '9'; n2++)
		{
			if (n1 != n2)
			{

				putchar(n1);
				putchar(n2);
				if (n1 != '8')
				{
					putchar(',');
					putchar(' ');
				}

			}
		}
	}
	putchar('\n');
	return (0);
}
