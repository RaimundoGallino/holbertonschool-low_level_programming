#include <unistd.h>
#include "holberton.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_alphabet_x10(void)
{
	char ch;
	int pa;

	for (pa = 0; pa <= 10; pa++)
	{
		for (ch = 'a'; ch <= 'z' ; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');

	}
}
