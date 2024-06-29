#include "main.h"
/**
 * print_line - a function that draws a straight line in the terminal
 * @n: number of times the character should be printed
 * Return: a straight line
 */
void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
