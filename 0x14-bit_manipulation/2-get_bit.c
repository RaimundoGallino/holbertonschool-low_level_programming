#include "holberton.h"

/**
 * get_bit - converts binary to unsigned int
 * @n: unsigned long int
 * @index: index of the bit you want to get
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
