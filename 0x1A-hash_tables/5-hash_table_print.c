#include "hash_tables.h"
/**
 * hash_table_get - implementation of the djb2 algorithm
 * @ht: hash table
 * @key: string used to generate hash value
 *
 * Return: hash value
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;

	if (!ht || !ht->array)
		return;
	tmp = ht;

	while (tmp)
	{
        printf("'%s': '%s'",tmp->key, tmp->value);

        if (tmp->next)
            printf(",");
        tmp = tmp->next;
	}
}
