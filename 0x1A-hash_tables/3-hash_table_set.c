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
	if (key == NULL || strlen(key) == 0)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];

	while (tmp)
	{
		if (strcmp(tmp->key, (char *)key) == 0)
		{
			printf("%s\n",tmp->key);
			tmp->value = (char *)value;
			return (1);
		}
		tmp = tmp->next;
	}

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);

	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
