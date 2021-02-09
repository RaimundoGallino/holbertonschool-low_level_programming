#include "holberton.h"
/**
 * _islower - checks for lowercase character
 * @c: The character to check
 *
 * Return: 0 is lowercase.
 *
 */

int _islower(int c)
{


	if (c <= 'z' && c >= 'a')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
