#include "holberton.h"
#include <stdio.h>

/**
 * swap_int - swap the two values of the input
 * @*a: pointer a
 * @*b: pointer b
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;

	*b = temp;

}
