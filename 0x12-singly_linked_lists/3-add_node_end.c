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
 * add_node_end - check the code for Holberton School students.
 * @str:pointer to the string that contains the string
 * @head:pointer to the head of the list
 * Return: new.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new,*temp;

	*temp = head;

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
	new->next = NULL;

        if (temp != NULL)
        {
		while (temp->next)
		{
			temp = temp->next;
		}
		temp->next = new;
	}
	else
	{
		*head = new;
	}

	return (new);
}
