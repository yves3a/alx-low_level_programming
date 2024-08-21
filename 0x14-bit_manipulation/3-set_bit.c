#include "main.h"

/**
 * set_bit - it sets the value of a bit to 1 at a given index.
 * @n: a pointer pointing to that number
 * @index: a specific index of a bit to set.
 * Return: 1 if successful, -1 if error occured.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n |= (1 << index);

	return (1);
}

