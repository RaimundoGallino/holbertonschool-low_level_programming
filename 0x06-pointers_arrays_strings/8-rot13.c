#include "holberton.h"
/**
 * rot13 - encodes the string given to rot13.
 * @s: sring to be encoded
 * Return: Always 0.
 */

char *rot13(char *s)
{
	int i = 0;
	int j = 0;

	char alph[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";


	while (s[i] != '\0')
	{
		while (alph[j] != '\0')
		{
			if (s[i] == alph[j])
			{
				s[i] = rot[j];
			}
			j++;
		}
		j = 0;
		i++;
}
	return (s);

}
