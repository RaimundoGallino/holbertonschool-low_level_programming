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
    unsigned long int i, flag = 0;


	if (!ht)
		return;
    printf("{");

    for (i = 0; i < ht->size; i++)
    {
	    tmp = ht->array[i];
        while (tmp)
        {
            printf("'%s': '%s'",tmp->key, tmp->value);

            if (flag == 1)
                printf(", ");
            tmp = tmp->next;
            flag = 1;
        }
    }
    printf("}\n");
}
