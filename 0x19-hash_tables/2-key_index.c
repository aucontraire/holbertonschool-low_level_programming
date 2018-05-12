#include "hash_tables.h"

/**
 * key_index - gets index of array in hash table
 * @key: key
 * @size: size of array
 *
 * Return: index of array in hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;


	hash = hash_djb2(key);
	return (hash % size);
}
