#include "main.h"
/**
 * print_alphabet_x10 - prints alphabets 10 times followed by the new line
 *
 * Return: 0 on seccess execution
 */

void print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 1; i <= 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
