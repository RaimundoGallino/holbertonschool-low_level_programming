#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - cheks the op passed
 * @s: check for the operator
 *
 * Return: the correct function, NULL if fails
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i;

	i = 0;

	while (ops[i].op)
	{
		if (*s == *ops[i].op)

			return (ops[i].f);
		i++;
	}
	return (NULL);
}
