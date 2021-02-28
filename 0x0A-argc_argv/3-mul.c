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
	int i, mul = 1;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
