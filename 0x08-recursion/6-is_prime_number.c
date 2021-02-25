#include "holberton.h"

/**
 * prime_check - check if a the number is prime
 * @n: number to check
 * @i: counter
 *
 * Return: 1 if is prime and 0 if not
 */
int prime_check(int n, int i)
{
	if (i == 2)
	{
		return (1);
	}
	else if ((n % i) == 0)
	{
		return (0);
	}
	return (prime_check(n, i - 1));
}

/**
 * is_prime_number - return 1 if the input integer is a prime number,
 * otherwise return 0.
 * @n: number to check.
 *
 * Return: 1 or 0.
 */

int is_prime_number(int n)
{

	int i = n / 2;

	if (n > 2)
	{
		return (prime_check(n, i));
	}
	if (n < 2)
	{
		return (0);
	}
	else
	{
		return (1);
	}

}
