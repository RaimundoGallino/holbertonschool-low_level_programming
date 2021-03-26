#include "holberton.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: binary numbers passed by a string
 * Return: unsigned int
 */
int get_bit(unsigned long int n, unsigned int index)
{

	unsigned int len;

	len = sizeof(n) * 8;

	if (index > len)
		return (-1);

	n >>= index;
	return (n & 1);

}
