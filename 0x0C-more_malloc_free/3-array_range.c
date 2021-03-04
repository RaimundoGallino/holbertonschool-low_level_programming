#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: value to start
 * @max: value to end
 *
 * Return: pointer to the array.
 */

int *array_range(int min, int max)
{
	int i, dif;
	int *p;

	if (min > max)
		return (NULL);

	dif = (max - min) + 1;

	p = malloc(sizeof(int) * dif);

	if (p == NULL)
		return (NULL);


	for (i = 0; i < dif; i++, min++)
	{
		p[i] = min;
	}

	return (p);
}
