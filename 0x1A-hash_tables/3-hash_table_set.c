#include "hash_tables.h"

/**
 * hash_table_set - function that adds element to the hash table
 * @ht: pointer to the hash table
 * @key: pointer to the key
 * @value: a pointer to the value
 * Return: returns 1, otherwise returns 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *current;

	/* Check for invalid input */
	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	index = key_index((const unsigned char *) key, ht->size);
	current = ht->array[index];
	while (current)
	{
		/* check if the key already exists */
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			return (1);
		}
		current = current->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	/* duplicate key and store it in the new node */
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}
	/* Inserting a new node the veginning of the linked list */
	new_node->next = ht->array[index]; /* point new node to current head*/
	ht->array[index] = new_node;/*updating the head of the lists*/
	return (1);
}
