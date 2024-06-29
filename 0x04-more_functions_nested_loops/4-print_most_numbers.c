#include "main.h"
/**
 * print_most_numbers - prints most numbers betweeen 0 to 9
 * Return: numbers from 0 to 9 except 3 and 4
 */
void print_most_numbers(void)
{
	int c;

	for (c = 0; c < 10; c++)
	{
		if ((c != 2) && (c != 4))
		{
		_putchar((c % 10) + '0');
		}
	}
	_putchar('\n');
}
