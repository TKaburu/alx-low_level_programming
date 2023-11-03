#include "hash_tables.h"

/**
 * hash_table_print - Prints out the hash table
 * @ht: The hash table
 *
 */


void hash_table_print(const hash_table_t *ht)
{
	unsigned int first = 1;/* checks if it's the first key-value pair*/
	unsigned int t = 0;
	hash_node_t *node = ht->array[t];

	if (ht == NULL)
		return;

	printf("{");
	for (; t < ht->size; ++t)
	{
		node = ht->array[t];
		while (node)
		{
			if (first)
				first = 0;
			else
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
		}
	}
	printf("}\n");
}

