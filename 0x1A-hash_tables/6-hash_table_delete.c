#include "hash_tables.h"

/**
 * hash_table_delete - This function deletes the hash table
 * @ht: The hash table to be deleted
 *
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned int index = 0;
	hash_node_t *hash_node;

	if (ht == NULL || ht->array == NULL)
		return;
	for (; index < ht->size; index++)
	{
		while (ht->array[index])
		{
			hash_node = ht->array[index]->next;
			free(ht->array[index]->key);
			free(ht->array[index]->value);
			free(ht->array[index]);
			ht->array[index] = hash_node;
		}
	}
	free(ht->array);
	ht->size = 0;
	ht->array = NULL; /* set to NULL since nothing is in */
	free(ht);
}
