#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
if (n > 0)
{
printf("is positive %f \n", n);
}
if (n == 0)
{
printf("is zero %f \n", n);
}
if (n < 0)
{
printf("is negative % \n", n);
}
return (0);
}
