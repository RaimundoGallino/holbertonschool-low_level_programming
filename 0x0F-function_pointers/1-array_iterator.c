#include <stdio.h>
#include <stddef.h>
#include "function_pointers.h"
/**
 * array_iterator - iterates over the array given
 * @size: size of the array
 * @array: array given
 * @action: pointer to the function
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)

		(*action)(array[i]);
}
