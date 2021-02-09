#include "holberton.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: The character to print
 *
 * Return: 1 if c is a letter.
 *
 */

int _isalpha(int c)
{


	if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
