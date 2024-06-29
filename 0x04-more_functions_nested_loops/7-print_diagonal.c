#include "main.h"
/**
 * print_diagonal - a function to print a diagonal line
 * @n: n is the number of times the character \ should be printed
 *Return: a diagonal line
 */
void print_diagonal(int n)
{
	int i, j;

	if (n < 1)
	{
	_putchar('\n');
	return;
	}

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
