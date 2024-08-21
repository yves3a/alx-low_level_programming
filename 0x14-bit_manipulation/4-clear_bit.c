#include "main.h"

/**
 * clear_bit - it sets the bit value to 0 at a given index.
 * @n: a pointer to that number.
 * @index: a specific index where to set.
 * Return: 1 if it worked , or -1 if error occured.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
