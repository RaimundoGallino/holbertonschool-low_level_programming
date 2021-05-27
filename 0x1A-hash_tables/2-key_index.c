#include "hash_tables.h"
/**
 * hash_djb2 - implementation of the djb2 algorithm
 * @key: string used to generate hash value
 * @size: size of the list
 *
 * Return: hash value
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{

    unsigned int i;
    hash_table_t *new_table = malloc(sizeof(hash_table_t));
    if (!new_table)
        return(NULL);
    new_table->array = malloc(sizeof(hash_node_t **) * size);
    if (!new_table->array)
        return(NULL);

    for (i = 0; i < size; i++)
    {
        if (strcmp(new_table->array[i], key) == 0)
        {
            return hash_djb2(&new_table->array[i]);
        }
    }

}
