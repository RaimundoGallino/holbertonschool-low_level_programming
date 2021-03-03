#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - prints a grid of integers
 *
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */
int **alloc_grid(int width, int height)
{
	int **array, i;

	if (width <= 0 || height <= 0)
		return(NULL);

	array = malloc(height * sizeof(int *));

	if (array == NULL)
		return (NULL);

	array[0] = 0;

	for(i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int));
	}
	return (array);
}
