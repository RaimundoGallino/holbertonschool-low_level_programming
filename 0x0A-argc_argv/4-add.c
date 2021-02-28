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
	int i, sum;

	sum = 0;

	for (i = 1; i < argc; i++)
	{
		char *ch;
		int neg;

		neg = strtol(argv[i], &ch, 10);

		if (*ch != '\0' || neg < 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += neg;
	}
	printf("%d\n", sum);

	return (0);
}
