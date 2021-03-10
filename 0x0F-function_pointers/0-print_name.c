#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - holds the string given and passes it to the function (*name)
 * @name: name given
 * @f: function to be called
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);

}
