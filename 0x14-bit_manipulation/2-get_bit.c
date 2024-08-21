#include "main.h"

/**
 * get_bit - prints the bit value at a given index
 * @n: a number
 * @index: an index of a bit value
 * Return: the value of bit or -1 when a error occured.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index > 63)
	{
		return (-1);
	}
	value = (n >> index) & 1;

	return (value);
}
