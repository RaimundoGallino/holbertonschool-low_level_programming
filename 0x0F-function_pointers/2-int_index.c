#include <stdio.h>
#include <stddef.h>
#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @size: size of the array
 * @array: the array of integers given
 * @cmp: funtion to be called
 *
 * Return: the index value and -1 if it fails
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp == NULL || array == NULL || size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{

		if (cmp(array[i]))
		{
			return (i);
		}

	}
	return (-1);
}
