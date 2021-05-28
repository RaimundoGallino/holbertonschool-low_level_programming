#include "hash_tables.h"
/**
 * hash_table_set - implementation of the djb2 algorithm
 * @key: string used to generate hash value
 * @value: size of the list
 * @ht: hash table
 *
 * Return: hash value
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{

	hash_node_t *new_node, *tmp;
	unsigned long int index;


	if (!ht || !ht->array || !value)
		return (0);
	if (key != NULL)
	{
		if (strlen(key) != 0)
			return (0);
	}
	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];

	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			strcpy(tmp->value, value);
			return (1);
		}
		tmp = tmp->next;
	}

	new_node = malloc(sizeof(hash_node_t));

	strcpy(new_node->key, key);
	strcpy(new_node->value, value);
	new_node->next = ht->array[index];
	return (1);
}
