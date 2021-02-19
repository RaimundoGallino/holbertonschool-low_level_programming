#include "holberton.h"
/**
 * _strcmp - compare two strings with it respectively ASCII values
 * @s1: first string to compare
 * @s2: second string to compare
 * Return: the concatenated string.
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
