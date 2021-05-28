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

	unsigned long int index;
	unsigned long int hash;

	if (key != NULL)
	{
		hash = hash_djb2(key);
		index = hash % size;
	}
	return (index);
}
