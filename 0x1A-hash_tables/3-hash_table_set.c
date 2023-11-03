#include "hash_tables.h"

/**
 * hash_table_set - This function adds elements to the hash table
 * @ht: The hash table
 * @key: The key which is not an empty string
 * @value: The value associated with the key
 *
 * Return: 1 if successfull otherwise 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int index = key_index((unsigned char *)key, ht->size);
	hash_node_t *hash_node = malloc(sizeof(hash_node_t));
	/* Check for memory allocation*/
	if (ht == NULL || hash_node == NULL)
		return (0);

	while (ht->array[index])
	{
		if (strcmp(ht->array[index]->key, key) == 0)
		{
			free(ht->array[index]->value);
			ht->array[index]->value = strdup(value);
			return (-1);
		}
		ht->array[index] = ht->array[index]->next;
	}
	if (ht->array[index] == NULL)
	{
		hash_node->key = strdup(key);
		hash_node->value = strdup(value);
		hash_node->next = NULL;
		ht->array[index] = hash_node;
		return (1);
	}

	hash_node = malloc(sizeof(hash_node_t *));
	if (hash_node == NULL)
		return (0);
	hash_node->key = strdup(key);
	hash_node->value = strdup(value);
	hash_node->next = NULL;
	ht->array[index] = hash_node;
	return (1);
}
