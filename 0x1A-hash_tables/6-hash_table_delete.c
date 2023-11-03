#include "hash_tables.h"

/**
 * hash_table_delete - This function deletes the hash table
 * @ht: The hash table to be deleted
 *
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned int index = 0;
	hash_node_t *node = ht->array[index];

	if (ht == NULL)
		return;
	for (; index < ht->size; ++index)
	{
		while (node)
		{
			/*node = node ->next;*/
			free(node->key);
			free(node->value);
			free(node);
		}
	}
	free(ht->array);
	free(ht);
}
