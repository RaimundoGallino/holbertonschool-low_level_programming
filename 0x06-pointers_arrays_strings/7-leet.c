#include "holberton.h"
/**
 * leet - swaps specific letters to numbers.
 * @s: the string to be changed
 * Return: s.
 */
char *leet(char *s)
{
	char let[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L', '\0'};
	int num[] = {'4', '3', '0', '7', '1'};
	int i = 0, j = 0;

	while (s[i] != '\0')
	{
		while (j < 10)
		{
			if (s[i] == let[j])
			{
				s[i] = num[j / 2];
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (s);
}
