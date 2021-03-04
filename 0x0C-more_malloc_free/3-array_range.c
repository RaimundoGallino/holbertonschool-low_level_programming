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
	int i, j;
	int *p;

	if (min > max)
		return (NULL);

	p = malloc(sizeof(int) * (max - min) + 1);

	if (p == NULL)
		return (NULL);

	j = min;

	for (i = 0; i < ((max - min) + 1); i++)
	{
		p[i] = j;
		j++;
	}

	return (p);
}
