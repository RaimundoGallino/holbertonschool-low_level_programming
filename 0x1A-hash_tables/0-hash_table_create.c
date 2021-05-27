#include "hash_tables.h"
/**
 * hash_djb2 - implementation of the djb2 algorithm
 * @size: string used to generate hash value
 *
 * Return: hash value
 */

hash_table_t *hash_table_create(unsigned long int size)
{
    unsigned long int i;
    
    hash_table_t *new_table = malloc(sizeof(hash_table_t));
    if (!new_table)
        return(NULL);
    
    new_table->array = malloc(sizeof(hash_node_t **) * size);
    if (!new_table->array)
        return(NULL);

    new_table->size = size;

    for (i = 0; i < size; i++)
    {
        new_table->array[i] = NULL;
    }

    return new_table;
}
