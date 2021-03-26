#include "holberton.h"

/**
 * set_bit - sets the value of a bit to 1 at the given index
 * @n: unsigned long int
 * @index: position given
 * Return: 1 if it worked, or -1 if an error occurred.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int len, sval = 1;

	len = sizeof(*n)* 8;

	if (index > len)
		return (-1);

	sval = sval << index;
	*n = *n | sval;
	return (1);
}
