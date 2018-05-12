#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 *
 * Return: pointer to hash table, otherwise return NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int index;

	if (size < 1)
		return (NULL);
	if ((ht = malloc(sizeof(hash_table_t))) == NULL)
		return (NULL);
	if ((ht->array = malloc(sizeof(hash_node_t *) * size)) == NULL)
		return (NULL);
	for (index = 0; index < size; index++)
		ht->array[index] = NULL;
	return (ht);
}
