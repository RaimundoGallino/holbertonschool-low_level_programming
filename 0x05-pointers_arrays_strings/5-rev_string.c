#include "holberton.h"
#include "2-strlen.c"

/**
 * rev_string - prints a srting, in reverse..
 *
 * @s: pointer to the string.
 */

void rev_string(char *s)
{
	int len, i;
	char *start, *end, temp;

	len = _strlen(s);
	start = s;
	end = s + len - 1;

	for (i = 0; i < len / 2; i++)
	{
		temp = *end;
		*end = *start;
		*start = temp;

		start++;
		end--;
	}
}
