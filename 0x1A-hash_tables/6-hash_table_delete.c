#include "hash_tables.h"
/**
 * hash_table_delete - implementation of the djb2 algorithm
 * @ht: hash table
 *
 * Return: hash value
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp, *tmp1;
	unsigned long int i;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			free(tmp->value);
			free(tmp->key);
			tmp1 = tmp;
			tmp = tmp->next;
			free(tmp1);
		}
		free(tmp);
	}

	free(ht->array);
	free(ht);
}
