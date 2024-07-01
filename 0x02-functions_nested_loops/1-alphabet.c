#include "main.h"

/**
 * print_alphabet - a functions that prints a alphabets
 * Return: 0 on success execution
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
