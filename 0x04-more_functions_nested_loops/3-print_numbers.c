#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9
 * Return: 0 to 9 (success)
 */

void print_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		_putchar((c % 10) + '0');
	}
	_putchar('\n');
}
