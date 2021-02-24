#include "holberton.h"

/**
 * is_prime_number - returns 1 if is a prime number and 0 if it is not
 * @n: number to check
 *
 * Return: 1 if is prime and 0 if not
 */
int prime_check(int n, int i)
{
        if ( i == 2)
        {
		return(1);
        }
        else if ((n % i) == 0)
        {
		return(0);
        }
        return (prime_check (n, i -1));
}

int is_prime_number(int n)
{

	int i = n / 2;

	if (n > 2)
	{
		return prime_check (n, i);
	}
	if ( n < 2)
	{
		return(0);
	}
	else
	{
		return(1);
	}

}
