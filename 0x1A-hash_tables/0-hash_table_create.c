#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - it creates a hash table
 * @size: size of the array
 *
 * Return: a pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i;

	/* Allocate memory for the hash table */
	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	/* allocate memory for the array of pointers */
	table->array = calloc(size, sizeof(hash_node_t *));
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	/* Initialise all array elements to NULL */
	for (i = 0; i < size; i++)
		table->array[i] = NULL;

	table->size = size;
	return (table);
}
