#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(int argc, char* argv[])
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
				return(1);
			}
		}
		printf("%d\n", sum);
	}

	return(0);
}
