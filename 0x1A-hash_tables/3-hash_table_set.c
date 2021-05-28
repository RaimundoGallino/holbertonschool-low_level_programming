#include "hash_tables.h"
/**
 * hash_djb2 - implementation of the djb2 algorithm
 * @key: string used to generate hash value
 * @size: size of the list
 *
 * Return: hash value
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{

    hash_node_t *new_node;
    const char *val = strdup(value);
    unsigned long int index;
    if (!ht || !*ht)
        return (0);

    if (value == NULL)
        return (0);
    if (key != NULL)
    {
        if (strlen(key) != 0)
            return (0);
    }
    index = key_index((const unsigned char*)key, ht->size);

    if (ht->array[index] == NULL)
    {
        new_node = malloc(sizeof(hash_node_t));
        strcpy(new_node->value, val);
        strcpy(new_node->key, key);
        new_node->next = NULL;
        
        return (1);
    }
    else
        return (0);
}
