#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

#include <stdio.h>
/* betty style doc for function main goes there */
int main(void)
{
int n, LastDigit;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
lastDigit = n % 10;

printf("%d Last digit of", n);
printf("is");
if (lastDigit > 5)
{
printf("and is greater than 5\n");
}
else if (lastDigit == 0)
{
printf("and is 0\n");
}
else if (lastDigit < 6 && lastDigit != 0)
{
printf("and is less than 6 and not 0\n");
}
return (0);
}
