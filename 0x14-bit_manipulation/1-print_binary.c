#include "main.h"

/**
 * print_binary - prints binary format of a number
 * @n: unsigned long integer
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar('0' + (n & 1));
}

