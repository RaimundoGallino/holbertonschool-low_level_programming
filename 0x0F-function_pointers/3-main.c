#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function to be described
 *
 * @argc: numeric argument
 * @argv: char argument given
 * Return: result
 */
int main(int argc, char *argv[])
{
	int n1, n2;
	char *opr;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	opr = argv[2];
	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);

	if ((opr[0] == '/' || opr[0] == '%') && n2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(opr)(n1, n2));
	return (0);

}
