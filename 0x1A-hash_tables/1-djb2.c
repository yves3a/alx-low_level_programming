#include "hash_tables.h"

/**
 * hash_djb2 - a function that implement djb2 algorithm
 * @str: a pointer to a string to be hashed
 *
 * Description: it works the same way as usual one
 *		to calculate a hash value
 * Return: the hash value
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c;
	}
	return (hash);
}
