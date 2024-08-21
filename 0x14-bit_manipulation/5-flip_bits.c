#include "main.h"

/**
 * flip_bits - counts bits to be flipped to get from n to m.
 * @n:a number
 * @m: second number
 * Return: number of bits to be flipped.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;
	unsigned long int result = n ^ m;
	int bits = 0;
	int num;

	for (i = 63; i >= 0; i--)
	{
		num = result >> i;

		if (num & 1)
			bits++;
	}

	return (bits);
}
