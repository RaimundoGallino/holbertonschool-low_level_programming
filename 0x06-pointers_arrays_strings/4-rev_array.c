#include "holberton.h"
/**
 * reverse_array - reverse an array of integers
 * @a: pointer to the array of integers
 * @n: total number of the array
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	int start, end;

	start = 0;
	end = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[end];
		a[end] = a[start];
		a[start] = temp;

		start++;
		end--;
	}

}
