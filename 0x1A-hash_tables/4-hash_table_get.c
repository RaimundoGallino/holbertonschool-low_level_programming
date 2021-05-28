#include "hash_tables.h"
/**
 * hash_table_get - implementation of the djb2 algorithm
 * @ht: hash table
 * @key: string used to generate hash value
 *
 * Return: hash value
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp;
	unsigned long int index;

	if (!ht || !ht->array)
		return (0);
	if (key == NULL || strlen(key) == 0)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];

	while (tmp)
	{
		if (strcmp(tmp->key, (char *)key) == 0)
		{
			return (tmp->value);
		}
		else
			return (NULL);
		tmp = tmp->next;
	}

	return (NULL);
}
