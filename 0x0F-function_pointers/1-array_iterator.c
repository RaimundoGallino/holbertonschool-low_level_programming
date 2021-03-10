#include <stdio.h>
#include <stddef.h>
#include "function_pointers.h"
/**
 * void array_iterator - print a name in uppercase
 * @size: size of the array
 * @action: pointer to the function
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)

		(*action)(array[i]);
}
