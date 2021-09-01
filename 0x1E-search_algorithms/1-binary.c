#include "search_algos.h"

/**
 * binary_search - Entry point
 * @array: array passed
 * @size: size of the array
 * @value: value to search
 * Return: Always EXIT_SUCCESS
 */
int binary_search(int *array, size_t size, int value)
{
	size_t start = 0, end = size - 1;
	size_t middle, i;

	if (!array)
		return (-1);

	while (start <= end)
	{
		middle = start + (end - start) / 2;
		printf("Searching in array: ");
		for (i = start; i < end; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[i]);


		if (array[middle] == value)
		{
			return (middle);
		}

		if (array[middle] < value)
			start = middle + 1;
		else
			end = middle - 1;
	}
	return (-1);
}
