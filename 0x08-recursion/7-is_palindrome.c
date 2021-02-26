#include "holberton.h"
#include "2-strlen_recursion.c"

/**
 * comparing - compares if the word is palindrom
 * @s: string given
 * @start: start position of the string
 * @end: end position of the string
 *
 * Return: 1 or 0.
 */
int comparing(int start, int end, char *s)
{

	if (s[start] == s[end])
		return (comparing((start + 1), (end - 1), s));

	if (start >= end)
		return (1);

	return (0);
}
/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if is not
 * @s: string given
 *
 * Return: 1 or 0.
 */

int is_palindrome(char *s)
{
	int start, end;
	int len = _strlen_recursion(s);

	start = 0;
	end = len - 1;

	return (comparing(start, end, s));
}
