#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * _strlen_recursion - gets the string lenght by using recursion.
 * @s: string to check
 * Return: Always 0.
 */
int _strlen_recursion(const char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * add_node - check the code for Holberton School students.
 * @h:pointer to the headof the list
 * Return: Always 0.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

        new = malloc(sizeof(list_t));

        if (new == NULL)
        {
                return (NULL);
        }


        new->str = strdup(str);
        if (new->str == NULL)
        {
                free(new);
        }

        new->len = _strlen_recursion(str);
        new->next = *head;

        *head = new;

        return (new);

}
