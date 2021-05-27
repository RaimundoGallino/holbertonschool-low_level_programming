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

    unsigned int index;
    const unsigned char *hash;

    if (!key)
    {
        hash = hash_djb2(key);
        index = hash % size;
    }

}
