#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - print matrix diagonal sum
 * @a: pointer to the matrix
 * @size: size of the matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j, s1 = 0, s2 = 0;

	for (i = (size + 1); i < ((size * size) + (size - 1)); i += (size + 1))
	{
		s1 =  s1 + a[i];
	}

	for (j = (size - 1); j < ((size * size) - (size - 1)); j += (size - 1))
	{

		s2 = s2 + a[j];
	}

	printf("%d, %d", s1, s2);
	printf("\n");

}
