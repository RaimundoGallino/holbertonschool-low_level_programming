#include "holberton.h"

/**
 * clear_bit - converts binary to unsigned int
 * @n: unsigned long int
 * @index: index of the bit you want to get
 * Return: unsigned int
 */

int clear_bit(unsigned long int *n, unsigned int index)
{

	unsigned int len, sval = 1;

	len = sizeof(*n) * 8;

	if (index > len)
		return (-1);

	sval = ~(sval << index);
	*n = *n & sval;
	return (1);
}
