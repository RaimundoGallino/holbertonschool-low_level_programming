#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: number of arguments passed
 * @argv: array of pointers pointing to these arguments
 * Return: 0 succes
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			char *ch;

			sum += strtol(argv[i], &ch, 10);

			if (*ch != '\0')
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}

	return (0);
}
