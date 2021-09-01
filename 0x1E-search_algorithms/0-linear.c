#include "search_algos.h"

/**
 * linear_search - Entry point
 * @array: array passed
 * @size: size of the array
 * @value: value to search
 * Return: Always EXIT_SUCCESS
 */
int linear_search(int *array, size_t size, int value)
{
    if (!array)
        return (-1);

    int i;
 
    for(i = 0; i < size; i++)
    {
        if (array[i] == value)
            printf("Value checked array[%d] = [%d]\n", i, value);
        else
            return (-1);
    } 
}
