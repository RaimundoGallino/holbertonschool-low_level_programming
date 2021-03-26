#include "holberton.h"

/**
 * flip_bits - converts binary to unsigned int
 * @n: unsigned long int
 * @m: index of the bit you want to get
 * Return: unsigned int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{

	unsigned long int num = n ^ m;
	unsigned int con = 0;
	unsigned int len = (sizeof(num) * 8);

	while (len >= 0)
	{
		if (num & 1)
			con++;
		num = num >> 1;
		len--;
	}
	return (con);
}
