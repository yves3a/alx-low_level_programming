#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key
 * @ht: Hash table to look into
 * @key: Key whose associated value is to be retrieved
 *
 * Return: Value associated with the key, or NULL if key not found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (!ht || !key || *key == '\0') /* Validate input */
		return (NULL);

	/* Compute the index of the key */
	index = key_index((const unsigned char *)key, ht->size);

	/* Access the linked list at the computed index */
	node = ht->array[index];

	/* Traverse the linked list to find the key */
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value); /* Key found, return value */
		node = node->next; /* Move to the next node */
	}

	return (NULL); /* Key not found */
}
