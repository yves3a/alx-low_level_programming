#include "hash_tables.h"

/**
 * shash_table_create - creates a sorted hash table structure
 * @size: size of sorted hash table structure
 *
 * Return: pointer to the newly created sorted hash table
 *		or NULL if the something went wrong
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *sht;
	unsigned long int i;
	/* allocating memory for the sorted hash table */
	sht = malloc(sizeof(shash_table_t));
	if (sht == NULL)
		return (NULL);

	/* Allocating memory fo the array */
	sht->array = malloc(size * sizeof(shash_node_t*));
	if (sht->array == NULL)
		return (NULL);

	/* Initialising each cell of the array with NULL */
	for (i = 0; i < size; i++)
		sht->array[i] = NULL;
	sht->shead = NULL;
	sht->stail = NULL;

	return (sht);
}

/**
 * create_node - it creates a node.
 * @key: pointer to the key of that node
 * @value: pointer to the value of that node
 *
 * Return: pointer to that new_node.
 */

shash_node_t *create_node(const char *key, const char *value)
{
	shash_node_t *new_node;

	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;
	new_node->sprev = NULL;
	new_node->snext = NULL;

	return (new_node);
}

/**
 * shash_table_set - it adds an element to the hash table
 * @key: pointer to the key
 * @value: pointer to the value
 *
 * Return: 1 on success, otherwise 0.
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *current, *new_node, *prev_node;
	unsigned long int index;

	if (!ht || !key || !value|| !*key)
		return 0;

	index = key_index((const unsigned char *) key, ht->size);

	current = ht->array[index];
	prev_node = NULL;

	while (current != NULL && strcmp(current->key, key))
	{
		prev_node = current;
		current = current->next;
	}

	/* if key already exist, update its value */
	if (current != NULL && strcmp(current->key, key) == 0)
	{
		free(current->value);
		current->value = strdup(value);
		return (1);
	}

	/* Create a new node for the key_value pair */
	new_node = create_node(key,value);
	if (new_node == NULL)
		return (0);

	/* inserting the new node into the hash table's array */
	if (prev_node == NULL)
	{
		current = ht->array[index];
		prev_node->next = current;
	}
	else
	{
		current = prev_node->next;
		prev_node->next = current;
	}

	/* Insert the new node into the sorted linked list */
	if (ht->shead == NULL || strcmp(key, ht->shead->key) < 0)
	{
		new_node->next = ht->shead;
		ht->shead = new_node;
	}
	else
	{
		/* Traverse sorted list to find the corect position */
		current = ht->shead;
		while (current->snext != NULL && strcmp(key, current->snext->key) > 0)
			current = new_node->snext;

		/* Insert the new_node in the sorted position */
		new_node->snext = current->snext;
		current->snext = new_node;
	}

	/* Update the tail pointer if new node is the last element */
	if (new_node->snext == NULL)
		ht->stail = new_node;

	return (1);

}

/**
 * shash_table_get - Retrieves the value associated with a key
 * in the sorted hash table
 * @ht: The sorted hash table
 * @key: The key string
 *
 * Return: The value associated with the key, or NULL if not found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *node;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	node = ht->array[index];

	while (node != (NULL))
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);

		node = node->next;
	}

	return (NULL);
}

/**
 * shash_table_print - Prints the sorted hash table in ascending order
 * @ht: The sorted hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;

	printf("{");
	node = ht->shead;
	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);
		if (node->snext != NULL)
			printf(", ");
		node = node->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Prints the sorted hash table in descending order
 * @ht: The sorted hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;

	printf("{");
	node = ht->stail;
	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);
		if (node->sprev != NULL)
			printf(", ");
		node = node->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - Deletes the sorted hash table
 * @ht: The sorted hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int index;
	shash_node_t *node, *next_node;

	if (ht == NULL)
		return;

	for (index = 0; index < ht->size; index++)
	{
		node = ht->array[index];
		while (node != NULL)
		{
			next_node = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = next_node;
		}
	}

	free(ht->array);
	free(ht);
}
