#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints an array of n integers;
 *
 * @a: pointer to the array value
 * @n: size of the array
 */

void print_array(int *a, int n)
{

	for (int i = 0; i < n; i++)
	{
		if (a[i] == a[n - 1])
		{
			printf("%d", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
	}
	printf("\n");

}
