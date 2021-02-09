#include "holberton.h"
/**
 * _abs - returns the absolute value of n
 * @n: the number to be computed
 *
 * Return: -n when is negative and n when is positive
 *
 */

int _abs(int n)
{
	if (n <= 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
