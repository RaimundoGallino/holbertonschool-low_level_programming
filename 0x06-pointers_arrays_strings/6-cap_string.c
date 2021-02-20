#include "holberton.h"

/**
 * cap_string - capitalizes the firstletter of the word
 * @s: sting to be capitalized
 * Return: string.
 */

char *cap_string(char *s)
{

	int i = 0, j = 0;
	char sym[] = {44, 59, 10, 46, 33, 63, 34, 40, 41, 123, 125, 32, 9, 0};

	if (s[i] >= 'a' && s[i] <= 'z')
	{
		s[i] = s[i] - 32;
	}

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			while (sym[j] != '\0')
			{

				if (s[i - 1] == sym[j])
				{
					s[i] = s[i] - 32;
				}

				j++;
			}
		}
		j = 0;
		i++;
	}

	return (s);
}
