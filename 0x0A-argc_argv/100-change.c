#include <stdio.h>
#include <stdlib.h>

/**
 * _change - entry point
 * @imp: number of arguments passed
 * Return: 0 succes
 */

int _change(int imp)
{
	if (imp >= 25)
	{
		imp -= 25;
		return (imp);
	}
	if (imp >= 10)
	{
		imp -= 10;
		return (imp);
	}
	if (imp >= 5)
	{
		imp -= 5;
		return (imp);
	}
	if (imp >= 2)
	{
		imp -= 2;
		return (imp);
	}
	if (imp >= 1)
	{
		imp -= 1;
		return (imp);
	}
	return (0);
}
/**
 * main - entry point
 * @argc: number of arguments passed
 * @argv: array of pointers pointing to these arguments
 * Return: 0 succes
 */

int main(int argc, char **argv)
{
	int cmon;
	int imp;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	imp = atoi(argv[1]);

	for (; 1 == 1;)
	{
		imp = _change(imp);
		cmon++;

		if (imp <= 0)
		{
			break;
		}
	}
	printf("%i\n", cmon);
	return (0);
}
