#include <stdio.h>
#include <stddef.h>
#include "function_pointers.h"
/**
 * void array_iterator - print a name in uppercase
 * @size: size of the array
 * @action: pointer to the function
 * Return: Nothing.
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
