#include "holberton.h"

/**
 * _isupper - checks for un uppercase character.
 *
 * @c: character to check
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _isupper(int c)
{
	if (c <= 'Z' && c >= 'A')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
