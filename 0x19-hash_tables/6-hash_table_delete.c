#include "hash_tables.h"

/**
 * hash_table_delete - deletes hash table
 * @ht: hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *node, *next_node;

	if (ht == NULL)
		return;

	index = 0;
	while (index < ht->size)
	{
		node = ht->array[index];
		while (node != NULL)
		{
			next_node = node->next;
			free(node->key);
			free(node->value);
			free(node);
			if (next_node != NULL)
				node = next_node;
			else
				break;
		}
		index++;
	}
	free(ht->array);
	free(ht);
}
