#include "main.h"

/**
 * binary_to_uint - it converts a binary number to an unsigned integer
 * @b: a pointer to a string of 0 and 1 chars
 * Return: converted number
 *	0 when b has a char that is not 0 or 1
 *	0 when b is NULL.
 */

unsigned int binary_to_uint(const char *b)
{

	unsigned int sum  = 0;
	int i;

	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		sum = sum * 2 + (b[i] - '0');
	}
	return (sum);
}


